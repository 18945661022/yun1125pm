//
//  DataLoadService.m
//  loadUnity
//
//  Created by raul on 16/2/22.
//  Copyright © 2016年 raul. All rights reserved.
//

#import "DataLoadService.h"

@implementation DataLoadService
#pragma mark - Basic Function
-(NSString *)paramWithDict:(NSDictionary *)dic{
    if (!dic) {
        return @"";
    }else{
        
        NSMutableString *mul = [NSMutableString string];
        NSArray *keys = [dic allKeys];
        
        for (int i=0; i<[keys count]; i++) {
            NSString *key = [keys objectAtIndex:i];
            NSString *value = [dic objectForKey:key];
            if (i!=0) {
                [mul appendString:@"&"];
            }
            [mul appendFormat:@"%@=%@",key,value];
        }
        
        return mul;
    }
}

-(void)getData:(NSString *)api parameters:(NSDictionary *)parameters{

//    NSString *pLast = [self paramWithDict:parameters];
//    
//    
//    NSString *urlStr = [api stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
//    
//    loadPackageInformationConnection = [[CDNetConnection alloc]init];
//    loadPackageInformationConnection.delegate=self;
//    [loadPackageInformationConnection sendAsynchronousRequestByDataDelegate:urlStr postBody:[pLast dataUsingEncoding:NSUTF8StringEncoding]];
    
    
}
//-(void)getDataByGet:(NSString *)api
//{
//    NSString *urlStr = [api stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
//    loadPackageInformationConnection = [[CDNetConnection alloc]init];
//    loadPackageInformationConnection.delegate=self;
//    [loadPackageInformationConnection sendAsynchronousRequestByDataDelegate:urlStr];
//}

-(void)getFileByGet:(NSString *)api{
    

//    NSString *urlStr = [api stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
//    
//    loadPackageConnection = [[CDNetConnection alloc]init];
//    loadPackageConnection.delegate=self;
//    [loadPackageConnection sendAsynchronousRequestByDataDelegate:urlStr];

}
//#pragma mark - 上传方法
//-(void)uploadFile:(NSString *)api Data:(NSData *)uploadData parameters:(NSDictionary *)parameters
//{
//    NSString *urlStr = [api stringByAddingPercentEscapesUsingEncoding:NSUTF8StringEncoding];
//    uploadFileConnection = [[CDNetConnection alloc]init];
//    uploadFileConnection.delegate = self;
//    [uploadFileConnection uploadFileByDelegate:urlStr Data:uploadData parameters:parameters];
//
//}

//-(void)connection:(CDNetConnection *)connection loadingFinishWithReciveData:(NSData *)retData
//{
//    if (self.delegate && [self.delegate respondsToSelector:@selector(DataLoadService:returnData:)]) {
//        [(id)self.delegate DataLoadService:self returnData:retData];
//    }
//    
//
//
//}

//-(void)loadingFail:(NSString *)retStr
//{
////    UIAlertView * alert = [[UIAlertView alloc]initWithTitle:@"error" message:@"" delegate:nil cancelButtonTitle:@"OK" otherButtonTitles: nil];
////    [alert show];
//    if (self.delegate && [self.delegate respondsToSelector:@selector(DataLoadService:returnData:)]) {
//        [(id)self.delegate DataLoadService:self returnData:nil];
//    }
//}


#pragma mark - json调整
+(NSDictionary *)cureBoringJsonWithArray:(NSString *)content
{
    NSError *error = nil;
    NSDictionary *dict = nil;
    
    NSString *subStr = [self JSONString:content];
    
    NSMutableString *mut = [NSMutableString stringWithString:subStr];
    
    for(int i =0; i < [mut length]; i++)
    {
        NSString *temp = nil;
        temp = [mut substringWithRange:NSMakeRange(i, 1)];
        if ([temp isEqualToString:@"["]) {
            if (i - 1 > 0) {
                NSString *sub = [mut substringWithRange:NSMakeRange(i - 1, 1)];
                if ([sub isEqualToString:@"\""]) {
                    mut = (NSMutableString *)[mut stringByReplacingCharactersInRange:NSMakeRange(i - 1, 1) withString:@""];
                }
            }
            //NSLog(@"-第%d个字是:%@", i, temp);
        }
    }
    
    for(int i =0; i < [mut length]; i++)
    {
        NSString *temp = nil;
        temp = [mut substringWithRange:NSMakeRange(i, 1)];
        if ([temp isEqualToString:@"]"]) {
            if (i + 1 < mut.length) {
                NSString *sub = [mut substringWithRange:NSMakeRange(i + 1, 1)];
                if ([sub isEqualToString:@"\""]) {
                    mut = (NSMutableString *)[mut stringByReplacingCharactersInRange:NSMakeRange(i + 1, 1) withString:@""];
                }
            }
            //NSLog(@"+第%d个字是:%@", i, temp);
        }
    }
    
    for(int i =0; i < [mut length]; i++)
    {
        NSString *temp = nil;
        temp = [mut substringWithRange:NSMakeRange(i, 1)];
        if ([temp isEqualToString:@"{"]) {
            if (i - 1 > 0) {
                NSString *sub = [mut substringWithRange:NSMakeRange(i - 1, 1)];
                if ([sub isEqualToString:@"\""]) {
                    mut = (NSMutableString *)[mut stringByReplacingCharactersInRange:NSMakeRange(i - 1, 1) withString:@""];
                }
            }
            //NSLog(@"-第%d个字是:%@", i, temp);
        }
    }
    
    for(int i =0; i < [mut length]; i++)
    {
        NSString *temp = nil;
        temp = [mut substringWithRange:NSMakeRange(i, 1)];
        if ([temp isEqualToString:@"}"]) {
            if (i + 1 < mut.length) {
                NSString *sub = [mut substringWithRange:NSMakeRange(i + 1, 1)];
                if ([sub isEqualToString:@"\""]) {
                    mut = (NSMutableString *)[mut stringByReplacingCharactersInRange:NSMakeRange(i + 1, 1) withString:@""];
                }
            }
            //NSLog(@"+第%d个字是:%@", i, temp);
        }
    }
    NSData *data1 = [mut dataUsingEncoding:NSUTF8StringEncoding];
    //NSLog(@"%@",data1);
    
    dict = (NSDictionary *)[NSJSONSerialization JSONObjectWithData:data1 options:NSJSONReadingAllowFragments error:&error];
    return dict;
}

+(NSString *)JSONString:(NSString *)aString {
    NSMutableString *s = [NSMutableString stringWithString:aString];
    //[s replaceOccurrencesOfString:@"\"" withString:@"\\\"" options:NSCaseInsensitiveSearch range:NSMakeRange(0, [s length])];
    //[s replaceOccurrencesOfString:@"/" withString:@"\\/" options:NSCaseInsensitiveSearch range:NSMakeRange(0, [s length])];
    [s replaceOccurrencesOfString:@"\\\"" withString:@"\"" options:NSCaseInsensitiveSearch range:NSMakeRange(0, [s length])];
    //    [s replaceOccurrencesOfString:@"\n" withString:@"\\n" options:NSCaseInsensitiveSearch range:NSMakeRange(0, [s length])];
    //    [s replaceOccurrencesOfString:@"\b" withString:@"\\b" options:NSCaseInsensitiveSearch range:NSMakeRange(0, [s length])];
    //    [s replaceOccurrencesOfString:@"\f" withString:@"\\f" options:NSCaseInsensitiveSearch range:NSMakeRange(0, [s length])];
    //    [s replaceOccurrencesOfString:@"\r" withString:@"\\r" options:NSCaseInsensitiveSearch range:NSMakeRange(0, [s length])];
    //    [s replaceOccurrencesOfString:@"\t" withString:@"\\t" options:NSCaseInsensitiveSearch range:NSMakeRange(0, [s length])];
    return [NSString stringWithString:s];
}



@end
