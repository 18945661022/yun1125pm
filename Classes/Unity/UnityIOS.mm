//
//  UnityIOS.m
//  Unity-iPhone
//
//  Created by Apple on 2017/11/9.
//

#import <Foundation/Foundation.h>
#import "UnityIOS.h"
#import "UnityAppController.h"
#import "TestViewController.h"
#import "DownloadControl.h"
#include "define.h"
#import "DataLoadService.h"
#import "Record.h"
#import "DBProcess.h"
//#import "WXShareViewController.h"
//#import "WXApi.h"



@implementation UnityIOS
+(NSString*)getFileName
{
    NSDate* now = [NSDate date];
    NSDateFormatter* formatter = [[NSDateFormatter alloc] init];
    [formatter setDateFormat:@"yyyy-MM-dd-HH-mm-ss"];
    NSString* date = [formatter stringFromDate:now];
    return [date stringByAppendingString:@".jpg"];
}

//拷贝到library
+(void)copyFiles
{
    //获取library目录
   // NSArray* libPaths  = NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES);
    //NSString *docPath = [libPaths lastObject];
    //获取library/caches目录
    NSArray* libPaths  = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES);
    NSString* cachesPath = [libPaths objectAtIndex:0];
    
    
    //data/raw目录
    NSString *appPath = [[NSBundle mainBundle] bundlePath];
    NSString *fileName = @"Data/Raw/alamolong.assetbundle";
    NSString *wholeName = [appPath stringByAppendingPathComponent:fileName];
    NSString *finalPath = [cachesPath stringByAppendingPathComponent:@"alamolong.assetbundle"];
    
    //文件不存在就拷贝
    if(![[NSFileManager defaultManager] fileExistsAtPath:finalPath]){
        [[NSFileManager defaultManager] copyItemAtPath:wholeName toPath:finalPath error:NULL];
    }
}

+(void)delFiles{
    NSArray* libPaths  = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES);
    NSString* cachesPath = [libPaths objectAtIndex:0];
    NSString *finalPath = [cachesPath stringByAppendingPathComponent:@"mahayu.mp4"];
    NSLog(@"路径：%@",finalPath);
    if([[NSFileManager defaultManager] fileExistsAtPath:finalPath]){
        NSLog(@"删除马哈鱼");
        [[NSFileManager defaultManager] removeItemAtPath:finalPath error:nil];
    }
    NSString *finalPath1 = [cachesPath stringByAppendingPathComponent:@"alamolong.assetbundle"];
    NSLog(@"路径：%@",finalPath1);
    if([[NSFileManager defaultManager] fileExistsAtPath:finalPath1]){
        NSLog(@"删除阿拉莫龙");
        [[NSFileManager defaultManager] removeItemAtPath:finalPath1 error:nil];
    }
}

-(void)threadTest:(TaskInfo*)ti
{
    NSInteger threadCount;
    @synchronized (self) {
        threadCount = self.taskCount;
        NSLog(@"thread count is %d",threadCount);
    }
    dispatch_async(dispatch_get_main_queue(), ^{
        UnityAppController* uac = GetAppController();
        [uac showProgressBar];
    });
    int i;
    for(i=1;i<6;i++){
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW,i*NSEC_PER_SEC),dispatch_get_main_queue(),^{
            @synchronized (self) {
                if(threadCount == self.taskCount){
                    [self setProgress:i/5.0];
                }
            }
    });
    }
 dispatch_after(dispatch_time(DISPATCH_TIME_NOW,6*NSEC_PER_SEC),dispatch_get_main_queue(),^{
     @synchronized (self) {
         if(threadCount == self.taskCount){
             [self delayTest:ti];
         }
     }
     
 });
}

-(void)setProgress:(float)value{
    UnityAppController* uac = GetAppController();
    [uac setProgress:value];
}

-(void)delayTest:(TaskInfo*)ti
{
    NSLog(@"delay test");
    UnityAppController* uac = GetAppController();
    [uac hideProgressBar];
    
    char* path1 = (char*)malloc(strlen([ti.path UTF8String])+1);
    //必须分配空间
    strcpy(path1,[ti.path UTF8String]);
    
    char* func = (char*)malloc(strlen([ti.callFunc UTF8String])+1);
    //必须分配空间
    strcpy(func,[ti.callFunc UTF8String]);
    
    UnitySendMessage("ImageTarget", func, path1);
    NSLog(@"unitysendmessage!");
    
}

-(void)getInfo:(NSString*)targetId taskCount:(NSInteger)taskCount{
    NSString *urlStr = [NSString stringWithFormat:SELECT_RESOURCE_PACKAGE_URL ,targetId,targetKind_iOS];
    NSString *str = [urlStr stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
    NSString *reqStr = [NSString stringWithFormat:@"%@/%@",SERVER_IP,str];
    NSLog(@"请求url是:%@",reqStr);
    NSURL* url = [NSURL URLWithString:reqStr];
    NSMutableURLRequest *request = [NSMutableURLRequest requestWithURL:url cachePolicy:NSURLRequestUseProtocolCachePolicy timeoutInterval:20];
    [request setHTTPMethod:@"Get"];
    [request setValue:@"gzip" forHTTPHeaderField:@"Accept-Encoding"];
    
    NSURLSession *session = [NSURLSession sessionWithConfiguration:[NSURLSessionConfiguration defaultSessionConfiguration]];
    NSURLSessionDataTask *task = [session dataTaskWithRequest:request completionHandler:^(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error){
        if(error){
            NSLog(@"获取信息错误:%@",error.localizedDescription);
            UnityAppController* uac = GetAppController();
            //删除下载任务
            @synchronized(self){
                [uac delTaskCount:targetId];
            }
            NSString* msgStr = @"获取信息发生错误";
            UIAlertController *ac = [UIAlertController alertControllerWithTitle:@"错误提示" message:msgStr preferredStyle:UIAlertControllerStyleAlert];
            UIAlertAction *okAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil];
            [ac addAction:okAction];
            [uac.rootViewController presentViewController:ac animated:YES completion:nil ];
        }else{
            //记录返回数据，并进行下载
        NSString *content = [[NSString alloc]initWithData:data encoding:NSUTF8StringEncoding];
            NSLog(@"返回的数据是:%@",content);
            NSDictionary *dic = [DataLoadService cureBoringJsonWithArray:content];
            int success;
            success = [[dic objectForKey:@"isSuccess"]intValue];
            if (success == 1)
            {
                id object = [dic objectForKey:@"name"];
                if ([object isKindOfClass:[NSArray class]])
                {
                    NSArray *nameAry = [dic objectForKey:@"name"];
                    if (nameAry.count > 0 && [[nameAry objectAtIndex:0] isKindOfClass:[NSDictionary class]])
                    {
                        //记录数据
                        DBProcess* dbProcess = [DBProcess GetInstance];
                        Record* record = [[Record alloc] init];
                        
                        NSDictionary *modelDic = [nameAry objectAtIndex:0];
                        
                        record.targetId = targetId;
                        record.name = [modelDic valueForKey:@"unityTargetName"];
                        record.url = [modelDic valueForKey:@"unityTargetDownloadUrl"];
                        record.targetSize = [[modelDic valueForKey:@"unityTargetSize"] integerValue];
                        record.modifyDate = [modelDic valueForKey:@"modifyDate"];
                        record.status = NOTFOUND;
                        //record.printSelf;
                        [dbProcess insertRecord:record];
                        NSLog(@"链接是：%@",record.url);
                        
                        [self download:record.url taskCount:taskCount];
                    }
                }
            }
            
        }
    }];
    NSLog(@"获取url任务启动");
    [task resume];
}

-(void)download:(NSString*)urlStr taskCount:(NSInteger)taskCount
{
    UnityAppController* uac = GetAppController();
    DownloadControl *dlc = [[DownloadControl alloc] init];//[uac getDownloadControl];
    NSArray* array = [urlStr componentsSeparatedByString:@"/"];
    dlc.fileName = [array lastObject];
    NSURL* url = [NSURL URLWithString:urlStr];
    NSURLRequest *req = [[NSURLRequest alloc] initWithURL:url cachePolicy:NSURLRequestUseProtocolCachePolicy timeoutInterval:10];
    NSURLSession *session = [NSURLSession sessionWithConfiguration:[NSURLSessionConfiguration defaultSessionConfiguration] delegate:dlc delegateQueue:[[NSOperationQueue alloc]init]];
    NSURLSessionDownloadTask* downloadTask = [session downloadTaskWithRequest:req];
    dlc.taskCount = taskCount;
    @synchronized (self) {
        NSLog(@"任务的id号是：%u",dlc.taskCount);
        dispatch_async(dispatch_get_main_queue(), ^{
            [uac showProgressBar];
        });
       
    }
    [downloadTask resume];
    /*
    NSURLConnection* connection =[[NSURLConnection alloc]initWithRequest:req delegate:dlc];
    NSLog(@"connection start");
    [connection start];
    //while(dlc.flag);
     */
    
   
}





/*
-(bool)IsWXWork
{
    bool flag = [WXApi isWXAppInstalled];
    if(!flag)
    {
        UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"" message:@"没安装微信" delegate:self cancelButtonTitle:@"确定" otherButtonTitles:nil];
        [alert show];
        return flag;
    }else{
        flag = [WXApi isWXAppSupportApi];
        if(!flag)
        {
            UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"" message:@"微信不支持" delegate:self cancelButtonTitle:@"确定" otherButtonTitles:nil];
            [alert show];
        }
    }
    return flag;
}
 */
@end

#if defined(__cplusplus)
extern "C"{
#endif
    void targetFoundCallback(char* id){
        NSLog(@"targetFoundCallback");
        UnityAppController* uac = GetAppController();
        UnityIOS* unityIOS = [uac getUnityIOS];
        NSString* imageId = [NSString stringWithUTF8String:id];
        @synchronized (unityIOS){
            uac.targetId = imageId;
            [uac hideProgressBar];
        }
        NSArray* libPaths  = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES);
        NSString* cachesPath = [libPaths objectAtIndex:0];
        DBProcess* dbProcess = [DBProcess GetInstance];
        NSString *finalPath;
        NSString *head = @"file:///";
        NSNumber* taskcount;
        NSInteger countNumber;
        char* path1;
        char* func;
        Record* record = [dbProcess getRecord:imageId];
        switch((int)record.status){
            case NOTFOUND:
                //查看是否在下载 如果下载失败 必须重新重复此过程
                @synchronized (unityIOS){
                    taskcount = [uac getTaskCount:imageId];
                    if(taskcount==NULL){
                        countNumber = unityIOS.taskCount;
                        [uac addTaskCount:imageId taskcount:[NSNumber numberWithInteger:countNumber]];
                        unityIOS.taskCount ++;
                        [unityIOS getInfo:imageId taskCount:countNumber];
                    }
                    
                         
                }
                break;
            case DOWNLOAD_OVER:
                    finalPath = [cachesPath stringByAppendingPathComponent:record.name];
                NSLog(finalPath);
                    NSString *finalUrl = [head stringByAppendingString:finalPath];
                    NSString* funcStr;
                    if([record.name hasSuffix:@"mp4"]){
                        funcStr = @"videoFullScreenAuto";
                        if([funcStr containsString:@"FullScreen"]){
                            path1 = (char*)malloc(strlen([finalUrl UTF8String])+1);
                            strcpy(path1,[finalUrl UTF8String]);
                        }else{
                            path1 = (char*)malloc(strlen([finalPath UTF8String])+1);
                            strcpy(path1,[finalPath UTF8String]);
                        }
                    }else{
                        funcStr = @"model";
                        path1 = (char*)malloc(strlen([finalUrl UTF8String])+1);
                        strcpy(path1,[finalUrl UTF8String]);
                    }
                    func = (char*)malloc(strlen([funcStr UTF8String])+1);
                    //必须分配空间
                    strcpy(func,[funcStr UTF8String]);
                    NSLog(@"UnitySendMessage");
                    UnitySendMessage("ImageTarget", func, path1);
                break;
            
        }
        //获取caches目录
        //NSArray* libPaths  = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES);
        //NSString* cachesPath = [libPaths objectAtIndex:0];
        
        
      
        //TaskInfo* ti = [[TaskInfo alloc] init];
        /*******
        //bawanglong
        if([imageId compare:@"16d9ff337ede4def9393233a4d2d1c71"]  == NSOrderedSame){
            NSString *appPath = [[NSBundle mainBundle] bundlePath];
            //NSString *fileName = @"/Data/Raw/mahayu.mp4";
            //NSString *wholeName = [appPath stringByAppendingString:fileName];
            //NSLog(@"wholeName is %@",wholeName);
            //bool flag = [[NSFileManager defaultManager] fileExistsAtPath:wholeName];
            //NSArray* libPaths  = NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES);
            
            //NSString *docPath = [libPaths lastObject];
            //NSString *wholeName = @"mahayu.mp4";
            //获取library目录
            //NSArray* libPaths  = NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES);
            
            //NSString *docPath = [libPaths lastObject];
            //NSString *head = @"file:///";//全屏播放时用到（url格式）
            //NSString *wholeName = [head stringByAppendingString:[docPath stringByAppendingPathComponent:@"mahayu.mp4"]];
            //NSString *wholeName = [appPath stringByAppendingPathComponent:@"Data/Raw/mahayu.mp4"];
         
            ti.path = wholeName;
            ti.callFunc = @"videoTexture";
            NSThread* thread = [[NSThread alloc] initWithTarget:unityIOS selector:@selector(threadTest:) object:ti];
            [thread start];
        
            //判断内存是否有缓存
            NSArray* libPaths  = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES);
            NSString* cachesPath = [libPaths objectAtIndex:0];
            NSString *finalPath = [cachesPath stringByAppendingPathComponent:@"mahayu.mp4"];
            if([[NSFileManager defaultManager] fileExistsAtPath:finalPath]){
                char* path1 = (char*)malloc(strlen([finalPath UTF8String])+1);
                strcpy(path1,[finalPath UTF8String]);
                UnitySendMessage("ImageTarget", "videoTexture", path1);
            }else{
                //NSString* urlStr = @"http://192.168.0.10/mahayu.mp4";
                //NSLog(urlStr);
                //[unityIOS download:urlStr];
                [unityIOS getInfo:imageId];
            }
            
            
        }
        //alamolong
        else if([imageId compare:@"ae2e53a7d57c4eed9be9db29df7a6512"]  == NSOrderedSame){
         
            //NSString *appPath = [[NSBundle mainBundle] bundlePath];
            //NSString *fileName = @"Data/Raw/alamolong.assetbundle";
            NSArray* libPaths  = NSSearchPathForDirectoriesInDomains(NSLibraryDirectory, NSUserDomainMask, YES);
            NSString *docPath = [libPaths lastObject];
            NSString *wholeName = [docPath stringByAppendingPathComponent:@"alamolong.assetbundle"];
            NSString *head = @"file:///";
            NSString *bundlePath = [head stringByAppendingString:wholeName];
            NSLog(bundlePath);
            ti.path = bundlePath;
            ti.callFunc = @"model";
            //if([[NSFileManager defaultManager] fileExistsAtPath:bundlePath]){
            NSThread* thread = [[NSThread alloc] initWithTarget:unityIOS selector:@selector(threadTest:) object:ti];
            [thread start];
            NSLog(@"thread start");
            //}else{
                //NSLog(@"文件不存在");
            //}
        
            NSArray* libPaths  = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES);
            NSString* cachesPath = [libPaths objectAtIndex:0];
            NSString *finalPath = [cachesPath stringByAppendingPathComponent:@"alamolong.assetbundle"];
            if([[NSFileManager defaultManager] fileExistsAtPath:finalPath]){
                NSString *head = @"file:///";
                NSString *finalUrl = [head stringByAppendingString:finalPath];
                char* path1 = (char*)malloc(strlen([finalUrl UTF8String])+1);
                strcpy(path1,[finalUrl UTF8String]);
                UnitySendMessage("ImageTarget", "model", path1);
            }else{
                //@"http://192.168.0.10/konglong/alamolong.assetbundle";
                //@"http://iphone.vividworld.cn/extImage/download/assetbundle/alamolong.assetbundle";
                //NSString* urlStr =
                //[unityIOS download:urlStr];
                [unityIOS getInfo:imageId];
            }
            
        }***/
    }

#if defined(__cplusplus)
}
#endif


#if defined(__cplusplus)
extern "C"{
#endif
    void notifyPhotos(char* path){
        
    }
#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)
extern "C"{
#endif
    char* getPath(){
        return NULL;
    }
#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)
extern "C"{
#endif
    char* getMessageFromUnity3d(int orderId,char* msg){
        return NULL;
    }
#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)
extern "C"{
#endif
    void getUnityTargetShare(char* path){
        
        
    }
#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)
extern "C"{
#endif
    void unityInitialize(){
        NSLog(@"unityiInitialize____ios");
        
    }
#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)
extern "C"{
#endif
    void backIOS(){
        UnityAppController* uac = GetAppController();
        [uac bringMVFirst];
    }
#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)
extern "C"{
#endif
    void initErrorCallback(char* msg){
        NSLog(@"初始化错误");
        /*
          没办法显示
         */
    }
#if defined(__cplusplus)
}
#endif

#if defined(__cplusplus)
extern "C"{
#endif
    void updateErrorCallback(char* msg){
        NSLog(@"更新错误");
        UnityAppController* uac = GetAppController();
        NSString* msgStr = [NSString stringWithUTF8String:msg];
        UIAlertController *ac = [UIAlertController alertControllerWithTitle:@"错误提示" message:msgStr preferredStyle:UIAlertControllerStyleAlert];
        UIAlertAction *okAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil];
        [ac addAction:okAction];
        [uac.rootViewController presentViewController:ac animated:YES completion:nil ];
    }
#if defined(__cplusplus)
}
#endif










