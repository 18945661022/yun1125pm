//
//  DataLoadService.h
//  loadUnity
//
//  Created by raul on 16/2/22.
//  Copyright © 2016年 raul. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "CDNetConnection.h"
//@class DataLoadService;
//
//@protocol DataLoadServiceDelegate <NSObject>
//
//-(void)DataLoadService:(DataLoadService *)DataLoadService returnData:(NSData *)retData;
//
//
//@end
@interface DataLoadService : NSObject//<CDConnectDelegate>
{
    //CDNetConnection *loadPackageInformationConnection;
    //CDNetConnection *loadPackageConnection;
    //CDNetConnection *uploadFileConnection;
}
//@property(nonatomic,strong)id<DataLoadServiceDelegate>delegate;
-(void)getData:(NSString *)api parameters:(NSDictionary *)parameters;
//-(void)getDataByGet:(NSString *)api;
-(void)getFileByGet:(NSString *)api;
+(NSDictionary *)cureBoringJsonWithArray:(NSString *)content;
@end
