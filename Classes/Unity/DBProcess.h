//
//  DBProcess.h
//  Unity-iPhone
//
//  Created by Apple on 2018/1/16.
//

#import <Foundation/Foundation.h>
#import <sqlite3.h>
#import "Record.h"

@interface DBProcess  : NSObject
+(DBProcess*)GetInstance;

-(sqlite3*)openDB;
-(void)closeDB;
-(void)createTable;
-(void)insertRecord:(Record*)record;
-(void)updateRecord:(Record*)record;
-(void)updateStatus:(NSString*)targetId status:(int)status;
-(Record*)getRecord:(NSString*)targetId;
-(void)clearRecord;
@end
