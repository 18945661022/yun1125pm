//
//  define.h
//  Unity-iPhone
//
//  Created by liu junchi on 16/2/29.
//
//

#ifndef define_h
#define define_h

typedef enum
{
    targetKind_Android = 1,
    targetKind_iOS = 2,
    
} targetKind ;

typedef enum
{
    assetTypeModel = 2,
    assetTypeVideo = 3,
    
} assetType;

#define NOTFOUND 0
#define DOWNLOAD_OVER 1


#define SERVER_IP @"http://iphone.vividworld.cn"

#define SHAREINFO_URL   @"CommController?svcCont={\"name\":\"[\\\"iosuploadPath\\\",\\\"iosshowPath\\\",\\\"ioswapurl\\\"]\"}&methodName=selectSysParaList&version=V1"

#define SELECT_RESOURCE_PACKAGE_URL @"CommController?svcCont={\"name\":\"{\\\"unityTargetCode\\\":\\\"%@\\\",\\\"unityTargetKind\\\":%d}\"}&methodName=selectResourcePackageInfor&version=V2"

#define BOUNDARY        @"----------cH2gL6ei4Ef1KM7cH2KM7ae0ei4gL6"

#define GET_VERSION_URL   @"CommController?svcCont={\"name\":2}&methodName=selectVersionUpgradeList&version=V2"

#define SAVE_ASSETBOUNDLE_FOLDER @"downloadAsset"
#define kFilename @"asset2.sql"

/////////////////////////////////////
//
//  以下信息根据实际项目进行改写
//
///////////////

/////微信分享注册信息
#define WX_APPID        @"wx614e5b811530bdc7"
#define WX_APPSECRET    @"d4624c36b6795d1d99dcf0547af5443d"

//////友盟分享注册信息
#define UM_APPKEY       @"56ca75a567e58eb0f40026a5"

//////默认分享用语
#define kShareToUMDefaultMessage @"增强现实，超越视觉－－尽在《%@》"

///////设置appdelegate 类名称
#define kAppDelegateName AppDelegate

/////包含Appdelegate 头文件，文件名按照实际修改
//#import "AppDelegate.h"

/////////////////////////////////////
//
//
///////////////

//bigimage存储路径
#define SAVE_BIGIMG_PATH @"BigImage"
////服务器地址
//#define SEVER_BIGIMG_IP @"http://test.vividworld.cn:45667/"
//bigImg表名
#define bigImgFilename @"bigImg.sql"

#endif /* define_h */
