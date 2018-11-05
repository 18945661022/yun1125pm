//
//  DownloadControl.m
//  Unity-iPhone
//
//  Created by Apple on 2018/1/9.
//

#import <Foundation/Foundation.h>
#import "DownloadControl.h"
#import "UnityIOS.h"
#import "UnityAppController.h"
#import "DBProcess.h"
#include "define.h"

@implementation DownloadControl

//计算进度
-(void)URLSession:(NSURLSession *)session downloadTask:(NSURLSessionDownloadTask *)downloadTask didWriteData:(int64_t)bytesWritten totalBytesWritten:(int64_t)totalBytesWritten totalBytesExpectedToWrite:(int64_t)totalBytesExpectedToWrite{
    //NSLog(@"数据总量：%d",totalBytesExpectedToWrite);
    UnityAppController* uac = GetAppController();
    UnityIOS* unityIOS = [uac getUnityIOS];
    float value = (float)totalBytesWritten/(float)totalBytesExpectedToWrite;
    @synchronized(unityIOS){
        NSString* targetId = [uac getId:[NSNumber numberWithInteger:_taskCount]];
        //保存的id是否和当前id一致
        if([targetId isEqualToString:uac.targetId] ){
            dispatch_async(dispatch_get_main_queue(), ^{
                [uac setProgress:value];
            });
        }
    }
}

//拷贝文件
-(void)URLSession:(NSURLSession *)session downloadTask:(NSURLSessionDownloadTask *)downloadTask didFinishDownloadingToURL:(NSURL *)location{
    NSArray* libPaths  = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES);
    NSString* cachesPath = [libPaths objectAtIndex:0];
    NSString *finalPath = [cachesPath stringByAppendingPathComponent:_fileName];
    if(![[NSFileManager defaultManager] fileExistsAtPath:finalPath]){
        NSLog(@"保存到文件：%@",finalPath);
        [[NSFileManager defaultManager] moveItemAtURL:location toURL:[NSURL fileURLWithPath:finalPath] error:nil];
    }
}

//最终下载结果
-(void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task didCompleteWithError:(NSError *)error{
    UnityAppController* uac = GetAppController();
    UnityIOS* unityIOS = [uac getUnityIOS];
    DBProcess* dbProcess = [DBProcess GetInstance];
    dispatch_async(dispatch_get_main_queue(), ^{
        [uac hideProgressBar];});
    if(error){
        NSLog(@"错误是：%@",error.localizedDescription);
        //删掉下载任务
        @synchronized(unityIOS){
            NSString* targetId = [uac getId:[NSNumber numberWithInteger:_taskCount]];
            if(targetId){
                [uac delTaskCount:targetId];
            }
        }
        NSString* msgStr = @"下载发生错误";
        UIAlertController *ac = [UIAlertController alertControllerWithTitle:@"错误提示" message:msgStr preferredStyle:UIAlertControllerStyleAlert];
        UIAlertAction *okAction = [UIAlertAction actionWithTitle:@"确定" style:UIAlertActionStyleDefault handler:nil];
        [ac addAction:okAction];
        [uac.rootViewController presentViewController:ac animated:YES completion:nil ];
    }else{
        NSLog(@"没有错误 保存数据库");
        @synchronized(unityIOS){
            NSString* targetId = [uac getId:[NSNumber numberWithInteger:_taskCount]];
            [dbProcess updateStatus:targetId status:DOWNLOAD_OVER];
            //删掉下载任务
            //如果是当前目标，就加载
            if([targetId isEqualToString:uac.targetId] ){
               
                    NSArray* libPaths  = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES);
                    NSString* cachesPath = [libPaths objectAtIndex:0];
                    NSString *head = @"file:///";
                    NSString *finalPath = [cachesPath stringByAppendingPathComponent:_fileName];
                    NSString *finalUrl = [head stringByAppendingString:finalPath];
                    //必须分配空间
                    char* path1;
                    NSString* funcStr;
                    if([_fileName hasSuffix:@"mp4"]){
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
                    char* func = (char*)malloc(strlen([funcStr UTF8String])+1);
                    //必须分配空间
                    strcpy(func,[funcStr UTF8String]);
                    NSLog(@"UnitySendMessage");
                    dispatch_async(dispatch_get_main_queue(), ^{
                    UnitySendMessage("ImageTarget", func, path1);});
            }
        }
    }
}

/****
-(void)URLSession:(NSURLSession *)session dataTask:(NSURLSessionDataTask *)dataTask didReceiveResponse:(NSURLResponse *)response completionHandler:(void (^)(NSURLSessionResponseDisposition))completionHandler{
    NSLog(@"响应任务的id号是：%u",dataTask.taskIdentifier);
    NSHTTPURLResponse *resp = (NSHTTPURLResponse*)response;
    NSLog(@"状态是：%d",[resp statusCode]);
    _fileLen = resp.expectedContentLength;
    NSLog(@"文件长度是:%lu",(unsigned long)_fileLen);
    completionHandler(NSURLSessionResponseAllow);
    UnityAppController* uac = GetAppController();
    UnityIOS* unityIOS = [uac getUnityIOS];
    @synchronized(unityIOS){
        if(dataTask.taskIdentifier == unityIOS.taskCount){
            dispatch_async(dispatch_get_main_queue(), ^{
                [uac showProgressBar];
            });
        }
    }
}

-(void)URLSession:(NSURLSession *)session dataTask:(NSURLSessionDataTask *)dataTask didReceiveData:(NSData *)data{
    NSLog(@"下载任务的id号是：%u",dataTask.taskIdentifier);
    UnityAppController* uac = GetAppController();
    UnityIOS* unityIOS = [uac getUnityIOS];
    //NSLog(@"data长度%lu",data.length);
    [self.fileData appendData:data];
    if(_fileLen != 0 && _fileData.length<=_fileLen){
        float value = (float)_fileData.length/(float)_fileLen;
        @synchronized(unityIOS){
            if(dataTask.taskIdentifier == unityIOS.taskCount){
                dispatch_async(dispatch_get_main_queue(), ^{
                    [uac setProgress:value];
                });
            }
        }
    }
}

-(void)URLSession:(NSURLSession *)session task:(NSURLSessionTask *)task didCompleteWithError:(NSError *)error{
    NSLog(@"完成任务的id号是：%u",task.taskIdentifier);
    NSLog(@"错误：%@",error.localizedDescription);
    NSArray* libPaths  = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES);
    NSString* cachesPath = [libPaths objectAtIndex:0];
    NSString* finalPath = [cachesPath stringByAppendingPathComponent:_fileName];
    if(![[NSFileManager defaultManager] fileExistsAtPath:finalPath]){
        [_fileData writeToFile:finalPath atomically:YES];
    }
    //清空_fileData
    [_fileData resetBytesInRange:NSMakeRange(0,[_fileData length])];
    [_fileData setLength:0];
    UnityAppController* uac = GetAppController();
    UnityIOS* unityIOS = [uac getUnityIOS];
    @synchronized(unityIOS){
        if(task.taskIdentifier == unityIOS.taskCount){
            dispatch_async(dispatch_get_main_queue(), ^{
                [uac hideProgressBar];
                
                char* path1 = (char*)malloc(strlen([finalPath UTF8String])+1);
                //必须分配空间
                strcpy(path1,[finalPath UTF8String]);
                
                NSString* funcStr;
                if([_fileName hasSuffix:@"mp4"]){
                    funcStr = @"videoTexture";
                }else{
                    funcStr = @"model";
                }
                char* func = (char*)malloc(strlen([funcStr UTF8String])+1);
                //必须分配空间
                strcpy(func,[funcStr UTF8String]);
                NSLog(@"UnitySendMessage");
                UnitySendMessage("ImageTarget", func, path1);});
        }
    }
}
 ***/

/*
-(void)connection:(NSURLConnection*)connection didReceiveResponse:(nonnull NSURLResponse *)response{
    NSHTTPURLResponse *resp = (NSHTTPURLResponse*)response;
    _fileLen = resp.expectedContentLength;
    NSLog(@"文件长度是:%lu",(unsigned long)_fileLen);
}

-(void)connection:(NSURLConnection*)connection didReceiveData:(nonnull NSData *)data{
    UnityAppController* uac = GetAppController();
    UnityIOS* unityIOS = [uac getUnityIOS];
    //NSLog(@"data长度%lu",data.length);
    [self.fileData appendData:data];
    if(_fileLen != 0 && _fileData.length<=_fileLen){
        float value = (float)_fileData.length/(float)_fileLen;
        //NSLog(@"总长度:%f",value);
       // @synchronized(unityIOS){
            //if(_count == unityIOS.taskCount){
                //dispatch_async(dispatch_get_main_queue(), ^{[unityIOS setProgress:value];});
            //}
        //}
    }
}

-(void)connectionDidFinishLoading:(NSURLConnection*)connection{
    //NSLog(@"下载完成");
    ///NSArray* libPaths  = NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES);
    //NSString* cachesPath = [libPaths objectAtIndex:0];
    //NSString *finalPath = [cachesPath stringByAppendingPathComponent:_fileName];
    //NSLog(@"判断文件是否存在:%@",finalPath);
    
    //不存在的话创建文件
    if(![[NSFileManager defaultManager] fileExistsAtPath:finalPath]){
        NSLog(@"文件不存在，保存文件:");
        NSLog(finalPath);
        [_fileData writeToFile:finalPath atomically:YES];
        //清空_fileData
        [_fileData resetBytesInRange:NSMakeRange(0,[_fileData length])];
        [_fileData setLength:0];
        UnityAppController* uac = GetAppController();
        UnityIOS* unityIOS = [uac getUnityIOS];
        @synchronized(unityIOS){
            if(_count == unityIOS.taskCount){
                dispatch_async(dispatch_get_main_queue(), ^{
                    [uac hideProgressBar];
                    
                    char* path1 = (char*)malloc(strlen([finalPath UTF8String])+1);
                    //必须分配空间
                    strcpy(path1,[finalPath UTF8String]);
                    
                    NSString* funcStr;
                    if([_fileName hasSuffix:@"mp4"]){
                        funcStr = @"videoTextureAuto";
                    }else{
                        funcStr = @"model";
                    }
                    char* func = (char*)malloc(strlen([funcStr UTF8String])+1);
                    //必须分配空间
                    strcpy(func,[funcStr UTF8String]);
                    NSLog(@"UnitySendMessage");
                    UnitySendMessage("ImageTarget", func, path1);});
            }
        }
    }
 
    //NSLog(@" _flag = false");
    //_flag = false;
}

-(void)connection:(NSURLConnection*)connection didFailWithError:(nonnull NSError *)error{
    NSLog(@"下载错误：%@",error.localizedDescription);
    _flag = false;
}

//上传的方法
-(void)connection:(NSURLConnection*)connection didSendBodyData:(NSInteger)bytesWritten totalBytesWritten:(NSInteger)totalBytesWritten totalBytesExpectedToWrite:(NSInteger)totalBytesExpectedToWrite{
    
}
*/
    @end

    
