#import "UnityAppController.h"
#import "UnityAppController+ViewHandling.h"
#import "UnityAppController+Rendering.h"
#import "iPhone_Sensors.h"

#import <CoreGraphics/CoreGraphics.h>
#import <QuartzCore/QuartzCore.h>
#import <QuartzCore/CADisplayLink.h>
#import <UIKit/UIKit.h>
#import <Availability.h>

#import <OpenGLES/EAGL.h>
#import <OpenGLES/EAGLDrawable.h>
#import <OpenGLES/ES2/gl.h>
#import <OpenGLES/ES2/glext.h>

#include <mach/mach_time.h>

// MSAA_DEFAULT_SAMPLE_COUNT was moved to iPhone_GlesSupport.h
// ENABLE_INTERNAL_PROFILER and related defines were moved to iPhone_Profiler.h
// kFPS define for removed: you can use Application.targetFrameRate (30 fps by default)
// DisplayLink is the only run loop mode now - all others were removed

#include "CrashReporter.h"
#include "iPhone_OrientationSupport.h"
#include "iPhone_Profiler.h"
#include "iPhone_Common.h"

#include "UI/Keyboard.h"
#include "UI/UnityView.h"
#include "UI/SplashScreen.h"
#include "Unity/DisplayManager.h"
#include "Unity/EAGLContextHelper.h"
#include "Unity/GlesHelper.h"
#include "PluginBase/AppDelegateListener.h"

#import "UnityIOS.h"
#import "DBProcess.h"

extern "C" void UnityRunUnitTests();

bool	_ios42orNewer			= false;
bool	_ios43orNewer			= false;
bool	_ios50orNewer			= false;
bool	_ios60orNewer			= false;
bool	_ios70orNewer			= false;
bool	_ios80orNewer			= false;
bool	_ios81orNewer			= false;
bool	_ios82orNewer			= false;
bool	_ios90orNewer			= false;

bool	_supportsDiscard		= false;
bool	_supportsMSAA			= false;
bool	_supportsPackedStencil	= false;

// was unity rendering already inited: we should not touch rendering while this is false
bool	_glesContextCreated		= false;
// was unity inited: we should not touch unity api while this is false
bool	_unityAppReady			= false;
// should we skip present on next draw: used in corner cases (like rotation) to fill both draw-buffers with some content
bool	_skipPresent			= false;
// was app "resigned active": some operations do not make sense while app is in background
bool	_didResignActive		= false;


// was startUnity scheduled: used to make startup robust in case of locking device
static bool	_startUnityScheduled	= false;


static bool	_isAutorotating		= false;

void UnityInitJoysticks();


@implementation UnityAppController

@synthesize unityView			= _unityView;
@synthesize unityDisplayLink	= _unityDisplayLink;

@synthesize rootView			= _rootView;
@synthesize rootViewController	= _rootController;
@synthesize mainDisplay			= _mainDisplay;
@synthesize renderDelegate		= _renderDelegate;

- (void)setWindow:(id)object		{}
- (UIWindow*)window					{ return _window; }



- (void)shouldAttachRenderDelegate	{}
- (void)preStartUnity				{}

//是否第一次启动
-(bool) isFirstStarted{
    return _firstStarted;
}

-(void) bringMVFirst{
    [_window bringSubviewToFront:_mvc.view];
    _window.rootViewController = _mvc;
}

-(void) bringROOTVFirst{
    [_window bringSubviewToFront:_rootView];
    _window.rootViewController = _rootController;
}

-(UnityIOS*)getUnityIOS{
    return unityIOS;
}

-(NSNumber*)getTaskCount:(NSString*)targetId{
    //if([_dict count]==0)
      //  return NULL;
    NSNumber* taskcount = [_dict objectForKey:targetId];
    return taskcount;
}

-(NSString*)getId:(NSNumber*)taskCount{
    if([_dict count]==0)
        return NULL;
    int b = [taskCount intValue];
    NSMutableString* str = [[NSMutableString alloc] init];
    [_dict enumerateKeysAndObjectsUsingBlock:^(id key, id obj, BOOL *stop){
        int a = [(NSNumber*)obj intValue];
        if(a == b){
            [str appendString:(NSString*)key];
            *stop = YES;
        }
    }];
    NSString* targetId = [[str copy] autorelease];
    return targetId;
}

-(void)addTaskCount:(NSString*)id taskcount:(NSNumber*)taskcount{
    [_dict setObject:taskcount forKey:id];
}

-(void)delTaskCount:(NSString*)id{
    if([_dict count]==0)
        return ;
    [_dict removeObjectForKey:id];
}

-(void)showProgressBar{
    [self setProgress:0];
    [_rootView addSubview:tvc.view];
}
-(void)hideProgressBar{
    [tvc.view removeFromSuperview];
}
-(void)setProgress:(float)value{
    [tvc setProgress:value];
}

- (void)startUnity:(LoadViewController*)lvc
{
	NSAssert(_unityAppReady == NO, @"[UnityAppController startUnity:] called after Unity has been initialized");
	UnityInitApplicationGraphics();

	// we make sure that first level gets correct display list and orientation
	[[DisplayManager Instance] updateDisplayListInUnity];
	[self updateOrientationFromController:[SplashScreenController Instance]];

	UnityLoadApplication();
	Profiler_InitProfiler();

	[self showGameUI];
	[self createDisplayLink];
	UnitySetPlayerFocus(1);
    
    if(_firstStarted){
        _firstStarted = false;
        
    }
    
    [lvc.view removeFromSuperview];
    [lvc release];}

- (void)transitionToViewController:(UIViewController*)vc
{
	_rootController.view = nil;
	vc.view = _rootView;
	_rootController = vc;
	_window.rootViewController = vc;

	[_rootView layoutSubviews];
}

- (void)checkOrientationRequest
{
	ScreenOrientation requestedOrient = (ScreenOrientation)UnityRequestedScreenOrientation();
	if(requestedOrient == autorotation)
	{
		if(!_isAutorotating)
		{
			[self transitionToViewController:[self createRootViewController]];
			[UIViewController attemptRotationToDeviceOrientation];
		}
		_isAutorotating = true;
	}
	else
	{
		if(requestedOrient != _unityView.contentOrientation)
			[self orientUnity:requestedOrient];
		_isAutorotating = false;
	}
}


- (void)onForcedOrientation:(ScreenOrientation)orient
{
	[_unityView willRotateTo:orient];
	[self transitionToViewController:[self createRootViewController]];
	[_unityView didRotate];
}

- (NSUInteger)application:(UIApplication *)application supportedInterfaceOrientationsForWindow:(UIWindow *)window
{
	// UIInterfaceOrientationMaskAll
	// it is the safest way of doing it:
	// - GameCenter and some other services might have portrait-only variant
	//     and will throw exception if portrait is not supported here
	// - When you change allowed orientations if you end up forbidding current one
	//     exception will be thrown
	// Anyway this is intersected with values provided from UIViewController, so we are good
	return   (1 << UIInterfaceOrientationPortrait) | (1 << UIInterfaceOrientationPortraitUpsideDown)
		   | (1 << UIInterfaceOrientationLandscapeRight) | (1 << UIInterfaceOrientationLandscapeLeft);
}

- (void)application:(UIApplication*)application didReceiveLocalNotification:(UILocalNotification*)notification
{
	AppController_SendNotificationWithArg(kUnityDidReceiveLocalNotification, notification);
	UnitySendLocalNotification(notification);
}

- (void)application:(UIApplication*)application didReceiveRemoteNotification:(NSDictionary*)userInfo
{
	AppController_SendNotificationWithArg(kUnityDidReceiveRemoteNotification, userInfo);
	UnitySendRemoteNotification(userInfo);
}

- (void)application:(UIApplication*)application didRegisterForRemoteNotificationsWithDeviceToken:(NSData*)deviceToken
{
	AppController_SendNotificationWithArg(kUnityDidRegisterForRemoteNotificationsWithDeviceToken, deviceToken);
	UnitySendDeviceToken(deviceToken);
}

- (void)application:(UIApplication*)application didFailToRegisterForRemoteNotificationsWithError:(NSError*)error
{
	AppController_SendNotificationWithArg(kUnityDidFailToRegisterForRemoteNotificationsWithError, error);
	UnitySendRemoteNotificationError(error);
}

- (BOOL)application:(UIApplication*)application openURL:(NSURL*)url sourceApplication:(NSString*)sourceApplication annotation:(id)annotation
{
	NSMutableArray* keys	= [NSMutableArray arrayWithCapacity:3];
	NSMutableArray* values	= [NSMutableArray arrayWithCapacity:3];

	#define ADD_ITEM(item)	do{ if(item) {[keys addObject:@#item]; [values addObject:item];} }while(0)

	ADD_ITEM(url);
	ADD_ITEM(sourceApplication);
	ADD_ITEM(annotation);

	#undef ADD_ITEM

	NSDictionary* notifData = [NSDictionary dictionaryWithObjects:values forKeys:keys];
	AppController_SendNotificationWithArg(kUnityOnOpenURL, notifData);
	return YES;
}

- (BOOL)application:(UIApplication*)application didFinishLaunchingWithOptions:(NSDictionary*)launchOptions
{
    //[UnityIOS copyFiles];
    //[UnityIOS delFiles];
	printf_console("-> applicationDidFinishLaunching()\n");
	// get local notification
	if (&UIApplicationLaunchOptionsLocalNotificationKey != nil)
	{
		UILocalNotification *notification = [launchOptions objectForKey:UIApplicationLaunchOptionsLocalNotificationKey];
		if (notification)
			UnitySendLocalNotification(notification);
	}

	// get remote notification
	if (&UIApplicationLaunchOptionsRemoteNotificationKey != nil)
	{
		NSDictionary *notification = [launchOptions objectForKey:UIApplicationLaunchOptionsRemoteNotificationKey];
		if (notification)
			UnitySendRemoteNotification(notification);
	}

	if ([UIDevice currentDevice].generatesDeviceOrientationNotifications == NO)
		[[UIDevice currentDevice] beginGeneratingDeviceOrientationNotifications];

	UnityInitApplicationNoGraphics([[[NSBundle mainBundle] bundlePath]UTF8String]);

	[self selectRenderingAPI];
	[UnityRenderingView InitializeForAPI:self.renderingAPI];
	[DisplayManager Initialize];
	_mainDisplay	= [[[DisplayManager Instance] mainDisplay] createView:YES showRightAway:NO];
	_window			= _mainDisplay.window;
    
	[KeyboardDelegate Initialize];

	[self createViewHierarchy];
	[self preStartUnity];
    _firstStarted = true;
    return YES;
}

- (void)applicationDidEnterBackground:(UIApplication *)application
{
	printf_console("-> applicationDidEnterBackground()\n");
}

- (void)applicationWillEnterForeground:(UIApplication *)application
{
	printf_console("-> applicationWillEnterForeground()\n");

	// applicationWillEnterForeground: might sometimes arrive *before* actually initing unity (e.g. locking on startup)
	if(_unityAppReady)
	{
		// if we were showing video before going to background - the view size may be changed while we are in background
		[GetAppController().unityView recreateGLESSurfaceIfNeeded];
	}
}

- (void)applicationDidBecomeActive:(UIApplication*)application
{
	printf_console("-> applicationDidBecomeActive()\n");

	if(_unityAppReady)
	{
		if(_didResignActive)
			UnityPause(false);
		UnitySetPlayerFocus(1);
	}
	else if(!_startUnityScheduled)
	{
		_startUnityScheduled = true;
        _mvc = [[MainViewController alloc] init];
        _mvc.view.frame = _window.bounds;
        
        //创建UnityIOS
        unityIOS = [[UnityIOS alloc] init];
        unityIOS.taskCount = 2;
        _dict = [[NSMutableDictionary alloc] init];
        
        DBProcess* dbProcess = [DBProcess GetInstance];
        //第一次启动
        if(![[NSUserDefaults standardUserDefaults] boolForKey:@"firstStart"]){
            [[NSUserDefaults standardUserDefaults] setBool:YES forKey:@"firstStart"];
            [dbProcess createTable];
        }
        //[dbProcess clearRecord];
        
        //创建进度view
        tvc = [[TestViewController alloc] init];
        CGRect frame = CGRectZero;
        CGRect bound = _window.bounds;
        frame.size.width = bound.size.width;
        frame.size.height = bound.size.height/5;
        frame.origin.x = bound.origin.x;
        frame.origin.y = bound.size.height*0.4;
        tvc.view.frame = frame;
        tvc.view.backgroundColor = [UIColor colorWithWhite:1 alpha:0];
        
        [_window addSubview:_mvc.view];
        
        [_window bringSubviewToFront:_mvc.view];
        _window.rootViewController = _mvc;
        //[self performSelector:@selector(startUnity:) withObject:application afterDelay:0];
	}

	_didResignActive = false;
}

- (void)applicationWillResignActive:(UIApplication*)application
{
	printf_console("-> applicationWillResignActive()\n");

	if(_unityAppReady)
	{
		UnitySetPlayerFocus(0);
		UnityPause(true);

		extern void UnityStopVideoIfPlaying();
		UnityStopVideoIfPlaying();

		// Force player to do one more frame, so scripts get a chance to render custom screen for minimized app in task manager.
		UnityForcedRepaint();
	}

	_didResignActive = true;
}

- (void)applicationDidReceiveMemoryWarning:(UIApplication*)application
{
	printf_console("WARNING -> applicationDidReceiveMemoryWarning()\n");
}

- (void)applicationWillTerminate:(UIApplication*)application
{
	printf_console("-> applicationWillTerminate()\n");

	Profiler_UninitProfiler();
	UnityCleanup();
}

- (void)dealloc
{
	extern void SensorsCleanup();
	SensorsCleanup();

	[self releaseViewHierarchy];
	[super dealloc];
}
@end


void AppController_RenderPluginMethod(SEL method)
{
	id delegate = GetAppController().renderDelegate;
	if([delegate respondsToSelector:method])
		[delegate performSelector:method];
}
void AppController_RenderPluginMethodWithArg(SEL method, id arg)
{
	id delegate = GetAppController().renderDelegate;
	if([delegate respondsToSelector:method])
		[delegate performSelector:method withObject:arg];
}

void AppController_SendNotification(NSString* name)
{
	[[NSNotificationCenter defaultCenter] postNotificationName:name object:GetAppController()];
}
void AppController_SendNotificationWithArg(NSString* name, id arg)
{
	[[NSNotificationCenter defaultCenter] postNotificationName:name object:GetAppController() userInfo:arg];
}

void AppController_SendMainViewControllerNotification(NSString* name)
{
	[[NSNotificationCenter defaultCenter] postNotificationName:name object:UnityGetGLViewController()];
}

extern "C" UIWindow*			UnityGetMainWindow()		{ return GetAppController().mainDisplay.window; }
extern "C" UIViewController*	UnityGetGLViewController()	{ return GetAppController().rootViewController; }
extern "C" UIView*				UnityGetGLView()			{ return GetAppController().unityView; }
extern "C" ScreenOrientation	UnityCurrentOrientation()	{ return [GetAppController().unityView contentOrientation]; }



bool LogToNSLogHandler(LogType logType, const char* log, va_list list)
{
	NSLogv([NSString stringWithUTF8String:log], list);
	return true;
}

void UnityInitTrampoline()
{
#if ENABLE_CRASH_REPORT_SUBMISSION
	SubmitCrashReportsAsync();
#endif
	InitCrashHandling();

	_ios42orNewer = true;
	_ios43orNewer = true;
	_ios50orNewer = true;
	_ios60orNewer = [[[UIDevice currentDevice] systemVersion] compare: @"6.0" options: NSNumericSearch] != NSOrderedAscending;
	_ios70orNewer = [[[UIDevice currentDevice] systemVersion] compare: @"7.0" options: NSNumericSearch] != NSOrderedAscending;
	_ios80orNewer = [[[UIDevice currentDevice] systemVersion] compare: @"8.0" options: NSNumericSearch] != NSOrderedAscending;
	_ios81orNewer = [[[UIDevice currentDevice] systemVersion] compare: @"8.1" options: NSNumericSearch] != NSOrderedAscending;
	_ios82orNewer = [[[UIDevice currentDevice] systemVersion] compare: @"8.2" options: NSNumericSearch] != NSOrderedAscending;
	_ios90orNewer = [[[UIDevice currentDevice] systemVersion] compare: @"9.0" options: NSNumericSearch] != NSOrderedAscending;

	// Try writing to console and if it fails switch to NSLog logging
	fprintf(stdout, "\n");
	if (ftell(stdout) < 0)
		SetLogEntryHandler(LogToNSLogHandler);

    // Fix home directory environment variable.
    const char *newHomeDirectory = ([[NSHomeDirectory() stringByAppendingPathComponent:@"Documents"] UTF8String]);
    setenv("XDG_CONFIG_HOME", newHomeDirectory, 1);

	UnityInitJoysticks();
}

extern "C" const char* const* UnityFontDirs()
{
	static const char* const dirs[] = {
		"/System/Library/Fonts",
		NULL
	};
	return dirs;
}

extern "C" const char* const* UnityFontFallbacks()
{
	static const char* const fonts[] = {
		"Hiragino Kaku Gothic ProN", // Japanese characters
		"Heiti TC",				// Traditional Chinese characters (on 9.0 OS substitutes this with "PingFang TC")
		"Heiti SC",				// Simplified Chinese characters (on 9.0 OS substitutes this with "PingFang SC")
		"PingFang TC",			// Traditional Chinese characters on 9.0
		"PingFang SC",			// Simplified Chinese characters on 9.0
		"AppleSDGothic Neo",	// Korean characters
		".Sukhumvit Set UI",	// Thai characters on 8.2
		"AppleGothic",
		"Noto Sans Yi",			// Yi characters on 9.0
		"Helvetica",
		".LastResort",
		NULL
	};
	return fonts;
}

extern "C" UIView* UnityGetAppControllerRootView()
{
	return GetAppController().rootView;
}
