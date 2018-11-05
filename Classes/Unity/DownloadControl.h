//
//  DownloadControl.h
//  Unity-iPhone
//
//  Created by Apple on 2018/1/9.
//

#ifndef DownloadControl_h
#define DownloadControl_h
@interface DownloadControl : NSObject<NSURLSessionDownloadDelegate>

@property(atomic,copy)NSString* fileName;
@property(atomic,assign)NSInteger taskCount;

@end

#endif /* DownloadControl_h */
