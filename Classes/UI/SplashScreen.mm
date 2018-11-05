
#include "SplashScreen.h"
#include "UnityViewControllerBase.h"
#include "iPhone_OrientationSupport.h"
#include "iPhone_Common.h"
#import <Foundation/Foundation.h>

#include <cstring>

extern "C" const char* UnityGetLaunchScreenXib();

static SplashScreen*            _splash      = nil;
static bool						_isOrientable = false; // true for iPads and iPhone 6+
static bool						_usesLaunchscreen = false;
static SplashScreenController*  _controller  = nil;
static ScreenOrientation		_nonOrientableDefaultOrientation = portrait;

// we will create and show splash before unity is inited, so we can use only plist settings
static bool     _canRotateToPortrait            = false;
static bool     _canRotateToPortraitUpsideDown  = false;
static bool     _canRotateToLandscapeLeft       = false;
static bool     _canRotateToLandscapeRight      = false;

static BOOL ShouldAutorotateToInterfaceOrientation_SplashImpl(id, SEL, UIInterfaceOrientation);
 
static const char* GetScaleSuffix(float scale, float maxScale)
{
	if (scale > maxScale)
		scale = maxScale;
	if (scale <= 1.0)
		return "";
	if (scale <= 2.0)
		return "@2x";
	return "@3x";
}

@implementation SplashScreen
{
	UIImageView* m_ImageView;
	UIView* m_XibView;
}

- (id)initWithFrame:(CGRect)frame
{
    self = [super initWithFrame:frame];
    return self;
}

- (void)unloadImage
{
	if (m_ImageView != nil && m_ImageView.image != nil)
	{
		[m_ImageView.image release];
		m_ImageView.image = nil;
	}
}

/* The following launch images are produced by Xcode6:

	LaunchImage.png
	LaunchImage@2x.png
	LaunchImage-568h@2x.png
	LaunchImage-700@2x.png
	LaunchImage-700-568h@2x.png
	LaunchImage-700-Landscape@2x~ipad.png
	LaunchImage-700-Landscape~ipad.png
	LaunchImage-700-Portrait@2x~ipad.png
	LaunchImage-700-Portrait~ipad.png
	LaunchImage-800-667h@2x.png
	LaunchImage-800-Landscape-736h@3x.png
	LaunchImage-800-Portrait-736h@3x.png
	LaunchImage-Landscape@2x~ipad.png
	LaunchImage-Landscape~ipad.png
	LaunchImage-Portrait@2x~ipad.png
	LaunchImage-Portrait~ipad.png
*/
- (void)updateOrientation:(ScreenOrientation)orient
{
	bool orientPortrait  = (orient == portrait || orient == portraitUpsideDown);
	bool orientLandscape = (orient == landscapeLeft || orient == landscapeRight);

	bool rotateToPortrait  = _canRotateToPortrait || _canRotateToPortraitUpsideDown;
	bool rotateToLandscape = _canRotateToLandscapeLeft || _canRotateToLandscapeRight;

	const char* orientSuffix = "";
	if (_isOrientable)
	{
		if (orientPortrait && rotateToPortrait)
			orientSuffix = "-Portrait";
		else if (orientLandscape && rotateToLandscape)
			orientSuffix = "-Landscape";
		else if (rotateToPortrait)
			orientSuffix = "-Portrait";
		else
			orientSuffix = "-Landscape";
	}

	NSString* imageName;
	if (_usesLaunchscreen)
	{
		// Launch screen uses the same aspect-filled image for all iPhones. So,
		// we need a special case if there's a launch screen and iOS is configured
		// to use it.
		// Note that we don't use launch screens for iPads since there's no way
		// to use different layouts depending on orientation.
		if (m_XibView == nil)
		{
			m_XibView = [[[[NSBundle mainBundle] loadNibNamed:@"LaunchScreen" owner:nil options:nil] objectAtIndex:0] retain];
			[self addSubview:m_XibView];
		}
	}
	else
	{
		// Old launch image from file
		if (UI_USER_INTERFACE_IDIOM() != UIUserInterfaceIdiomPhone)
		{
			// iPads
			const char* iOSSuffix = _ios70orNewer ? "-700" : "";
			const char* scaleSuffix = GetScaleSuffix([UIScreen mainScreen].scale, 2.0);
			imageName = [NSString stringWithFormat:@"LaunchImage%s%s%s~ipad",
								iOSSuffix, orientSuffix, scaleSuffix];
		}
		else
		{
			// iPhones
			float scale = [UIScreen mainScreen].scale;
			const char* scaleSuffix = GetScaleSuffix(scale, 3.0);
			const char* iOSSuffix = _ios70orNewer ? "-700" : "";
			const char* rezolutionSuffix = "";
			CGSize size = [[UIScreen mainScreen] bounds].size;
 
			if (size.height == 568 || size.width == 568) // iPhone5
				rezolutionSuffix = "-568h";
			else if (size.height == 667 || size.width == 667) // iPhone6
			{
				rezolutionSuffix = "-667h";
				iOSSuffix = "-800";

				if (scale > 2.0) // iPhone6+ in display zoom mode
					scaleSuffix = "@2x";
			}
			else if (size.height == 736 || size.width == 736) // iPhone6+
			{
				rezolutionSuffix = "-736h";
				iOSSuffix = "-800";
			}
			imageName = [NSString stringWithFormat:@"LaunchImage%s%s%s%s",
								  iOSSuffix, orientSuffix, rezolutionSuffix, scaleSuffix];
		}

		NSString* imagePath = [[[[NSBundle mainBundle] pathForResource: imageName ofType: @"png"] retain] autorelease];

		UIImage* image = [[UIImage imageWithContentsOfFile: imagePath] retain];
		if (m_ImageView == nil)
		{
			m_ImageView = [[[UIImageView alloc] initWithImage:image] retain];
			[self addSubview:m_ImageView];
		}
		else
		{
			[self unloadImage];
			m_ImageView.image = image;
		}
	}
}

- (void)layoutSubviews
{
	if (m_XibView)
		m_XibView.frame = self.bounds;
	else if (m_ImageView)
		m_ImageView.frame = self.bounds;
}
 
+ (SplashScreen*)Instance
{
    return _splash;
}

- (void) freeSubviews
{
	if (m_ImageView != nil)
	{
		[m_ImageView removeFromSuperview];
		[self unloadImage];
		[m_ImageView release];
		m_ImageView = nil;
	}
	if (m_XibView != nil)
	{
		[m_XibView removeFromSuperview];
		[m_XibView release];
		m_XibView = nil;
	}
}

@end

@implementation SplashScreenController

- (void)create:(UIWindow*)window
{
    NSArray* supportedOrientation = [[[NSBundle mainBundle] infoDictionary] objectForKey:@"UISupportedInterfaceOrientations"];

    _canRotateToPortrait            = [supportedOrientation containsObject: @"UIInterfaceOrientationPortrait"];
    _canRotateToPortraitUpsideDown  = [supportedOrientation containsObject: @"UIInterfaceOrientationPortraitUpsideDown"];
    _canRotateToLandscapeLeft       = [supportedOrientation containsObject: @"UIInterfaceOrientationLandscapeRight"];
    _canRotateToLandscapeRight      = [supportedOrientation containsObject: @"UIInterfaceOrientationLandscapeLeft"];

    CGSize size = [[UIScreen mainScreen] bounds].size;

    // iPads and iPhone 6+ have orientable splash screen
    _isOrientable = UI_USER_INTERFACE_IDIOM() != UIUserInterfaceIdiomPhone || (size.height == 736 || size.width == 736);

	// Launch screens are used only on iOS8+ iPhones
	const char* xib = UnityGetLaunchScreenXib();
	_usesLaunchscreen = (_ios80orNewer && xib != NULL && std::strcmp(xib, "LaunchScreen") == 0 &&
						 UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone);

	if (_usesLaunchscreen && !(_canRotateToPortrait || _canRotateToPortraitUpsideDown))
		_nonOrientableDefaultOrientation = landscapeLeft;
	else
		_nonOrientableDefaultOrientation = portrait;

    _splash   = [[SplashScreen alloc] initWithFrame: [[UIScreen mainScreen] bounds]];
    _splash.contentScaleFactor = [UIScreen mainScreen].scale;

    if (_isOrientable)
    {
        _splash.autoresizingMask = UIViewAutoresizingFlexibleWidth | UIViewAutoresizingFlexibleHeight;
        _splash.autoresizesSubviews = YES;
    }
    else if (_canRotateToPortrait || _canRotateToPortraitUpsideDown)
    {
        _canRotateToLandscapeLeft = false;
        _canRotateToLandscapeRight = false;
    }
	// launch screens always use landscapeLeft in landscape
	if (_usesLaunchscreen && _canRotateToLandscapeLeft)
		_canRotateToLandscapeRight = false;

    self.view = _splash;

    self.wantsFullScreenLayout = TRUE;

    [window addSubview: _splash];
    window.rootViewController = self;
    [window bringSubviewToFront: _splash];

    ScreenOrientation orient = ConvertToUnityScreenOrientation(self.interfaceOrientation, 0);
    [_splash updateOrientation: orient];

	if (!_isOrientable)
		orient = _nonOrientableDefaultOrientation;
    OrientView([SplashScreenController Instance], _splash, orient);
}

- (void)willRotateToInterfaceOrientation:(UIInterfaceOrientation)toInterfaceOrientation duration:(NSTimeInterval)duration
{
    if (_isOrientable)
        [_splash updateOrientation: ConvertToUnityScreenOrientation(toInterfaceOrientation, 0)];
}

- (void)didRotateFromInterfaceOrientation:(UIInterfaceOrientation)fromInterfaceOrientation
{
	if (!_isOrientable)
		OrientView([SplashScreenController Instance], _splash, _nonOrientableDefaultOrientation);
}

- (BOOL)shouldAutorotate
{
    return true;
}

- (NSUInteger)supportedInterfaceOrientations
{
    NSUInteger ret = 0;

    if(_canRotateToPortrait)              ret |= (1 << UIInterfaceOrientationPortrait);
    if(_canRotateToPortraitUpsideDown)    ret |= (1 << UIInterfaceOrientationPortraitUpsideDown);
    if(_canRotateToLandscapeLeft)         ret |= (1 << UIInterfaceOrientationLandscapeRight);
    if(_canRotateToLandscapeRight)        ret |= (1 << UIInterfaceOrientationLandscapeLeft);

    return ret;
}

+ (SplashScreenController*)Instance
{
    return _controller;
}

@end

void ShowSplashScreen(UIWindow* window)
{
    static bool _ClassInited = false;
    if(!_ClassInited)
    {
        AddShouldAutorotateToImplIfNeeded([SplashScreenController class], &ShouldAutorotateToInterfaceOrientation_SplashImpl);
        AddStatusBarSupportDefaultImpl([SplashScreenController class]);
        _ClassInited = true;
    }

    _controller = [[SplashScreenController alloc] init];
    [_controller create:window];
}

void HideSplashScreen()
{
    if(_splash)
    {
        [_splash removeFromSuperview];
        [_splash freeSubviews];
        [_splash release];
        _splash = nil;
    }
    if(_controller)
    {
        [_controller release];
        _controller = nil;
    }
}

static BOOL
ShouldAutorotateToInterfaceOrientation_SplashImpl(id self_, SEL _cmd, UIInterfaceOrientation interfaceOrientation)
{
    switch(interfaceOrientation)
    {
        case UIInterfaceOrientationPortrait:            return _canRotateToPortrait;
        case UIInterfaceOrientationPortraitUpsideDown:  return _canRotateToPortraitUpsideDown;
        case UIInterfaceOrientationLandscapeRight:      return _canRotateToLandscapeLeft;
        case UIInterfaceOrientationLandscapeLeft:       return _canRotateToLandscapeRight;

        default:                                        return false;
    }

    return false;
}
