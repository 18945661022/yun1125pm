//
//  Record.h
//  Unity-iPhone
//
//  Created by Apple on 2018/1/16.
//

#ifndef Record_h
#define Record_h
@interface Record : NSObject
@property (nonatomic,copy)NSString* targetId;
@property (nonatomic,copy)NSString* name;
@property (nonatomic,copy)NSString* url;
@property (nonatomic,copy)NSString* modifyDate;
@property (nonatomic,assign)NSInteger targetSize;
@property (nonatomic,assign)NSInteger status;

-(void)printSelf;
@end

#endif /* Record_h */
