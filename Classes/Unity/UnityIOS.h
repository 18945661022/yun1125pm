//
//  UnityIOS.h
//  Unity-iPhone
//
//  Created by Apple on 2017/11/9.
//

#import <Foundation/Foundation.h>
#import "TaskInfo.h"

#ifndef UnityIOS_h
#define UnityIOS_h



@interface UnityIOS : NSObject

+(NSString*)getFileName;
+(void)copyFiles;
+(void)delFiles;

-(void)setProgress:(float)value;
-(void)threadTest:(TaskInfo*)ti;
-(void)delayTest:(TaskInfo*)ti;
-(void)getInfo:(NSString*)targetId taskCount:(NSInteger)taskCount;
-(void)download:(NSString*)urlStr taskCount:(NSInteger)taskCount;
//-(bool) IsWXWork;

@property (nonatomic,assign)NSInteger taskCount;

@end

#endif /* UnityIOS_h */
