//
//  Record.m
//  Unity-iPhone
//
//  Created by Apple on 2018/1/16.
//

#import <Foundation/Foundation.h>
#import "Record.h"

@implementation Record

-(void)printSelf{
    NSLog(@"记录的结果是：");
    NSLog(_targetId);
    NSLog(_name);
    NSLog(_url);
    NSLog(_modifyDate);
    NSLog(@"%u",_targetSize);
    NSLog(@"%1d",_status);
}

@end
