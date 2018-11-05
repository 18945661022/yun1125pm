//
//  DBProcess.m
//  Unity-iPhone
//
//  Created by Apple on 2018/1/16.
//

#import <Foundation/Foundation.h>
#import "DBProcess.h"
#include "define.h"

@implementation DBProcess

+(DBProcess*)GetInstance
{
    static DBProcess* dbProcess = nil;
    if(dbProcess==nil){
        dbProcess = [[DBProcess alloc] init];
    }
    return dbProcess;
}

static sqlite3* db = nil;
-(sqlite3*)openDB
{
    if(db != nil){
        return db;
    }
    NSString* dbPath = [[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) lastObject] stringByAppendingPathComponent:@"Record.sqlite" ];
    NSLog(@"数据库名字是%@",dbPath);
    int result = sqlite3_open(dbPath.UTF8String, &db);
    if(result == SQLITE_OK){
        NSLog(@"打开数据库成功");
    }else{
        NSLog(@"打开数据库失败");
    }
    return db;
}

-(void)closeDB
{
    int result = sqlite3_close(db);
    if(result == SQLITE_OK){
        db = nil;
        NSLog(@"关闭数据库成功");
    }else{
        NSLog(@"关闭数据库失败");
    }
}

-(void)createTable
{
    db = [self openDB];
    NSString* sql = @"create table IF NOT EXISTS record(pk integer primary key autoincrement,id text not NULL,name text,url  text,date text,size integer,status integer not NULL)";
    int result = sqlite3_exec(db, sql.UTF8String, NULL, NULL, NULL);
    if (result == SQLITE_OK){
        NSLog(@"创建表成功");
    }else{
        NSLog(@"创建表失败");
    }
    [self closeDB];
}

-(void)insertRecord:(Record*)record
{
    db = [self openDB];
    NSString* sql = [NSString stringWithFormat:@"insert into  record(id,name,url,date,size,status)  values('%@','%@','%@','%@','%d','%1d')",record.targetId,record.name,record.url,record.modifyDate,record.targetSize,record.status];
    int result = sqlite3_exec(db, sql.UTF8String, NULL, NULL, NULL);
    if (result == SQLITE_OK){
        NSLog(@"插入数据成功");
    }else{
        NSLog(@"插入数据失败");
    }
    [self closeDB];
}

-(void)updateRecord:(Record*)record
{
    db = [self openDB];
    NSString* sql = [NSString stringWithFormat:@"update  record  set name = '%@',url = '%@',date = '%@',size = '%d',status = '%1d' where id = '%@'",record.name,record.url,record.modifyDate,record.targetSize,record.status,record.targetId];
    int result = sqlite3_exec(db, sql.UTF8String, NULL, NULL, NULL);
    if (result == SQLITE_OK){
        NSLog(@"修改数据成功");
    }else{
        NSLog(@"修改数据失败");
    }
    [self closeDB];
}

-(void)updateStatus:(NSString*)targetId status:(int)status
{
    db = [self openDB];
    NSString* sql = [NSString stringWithFormat:@"update  record  set status = '%1d' where id = '%@'",status,targetId];
    int result = sqlite3_exec(db, sql.UTF8String, NULL, NULL, NULL);
    if (result == SQLITE_OK){
        NSLog(@"修改状态成功");
    }else{
        NSLog(@"修改状态失败");
    }
    [self closeDB];
}

-(Record*)getRecord:(NSString*)targetId
{
    Record* record = [[Record alloc] init];
    record.status = NOTFOUND;
    db = [self openDB];
    NSString* sql =@"select * from record where id = ?";
    //[NSString stringWithFormat:@"select * from record where id = %@",targetId];
    //跟随指针
    sqlite3_stmt* stmt = nil;
    int result = sqlite3_prepare_v2(db, sql.UTF8String, -1, &stmt, NULL);
    if(result == SQLITE_OK){
        sqlite3_bind_text(stmt, 1, targetId.UTF8String, -1, NULL);
        while(sqlite3_step(stmt) == SQLITE_ROW){
            NSLog(@"找到数据");
            record.targetId = [NSString stringWithUTF8String:sqlite3_column_text(stmt, 1)];
            record.name = [NSString stringWithUTF8String:sqlite3_column_text(stmt, 2)];
            record.url = [NSString stringWithUTF8String:sqlite3_column_text(stmt, 3)];
            record.modifyDate = [NSString stringWithUTF8String:sqlite3_column_text(stmt, 4)];
            record.targetSize = sqlite3_column_int(stmt, 5);
            record.status = sqlite3_column_int(stmt, 6);
            NSLog(@"找到数据，状态是%1d",record.status);
        }
    }
    sqlite3_finalize(stmt);
    [self closeDB];
    return record;
}

-(void)clearRecord
{
    db = [self openDB];
    NSString* sql = @"delete from record";
    int result = sqlite3_exec(db, sql.UTF8String, NULL, NULL, NULL);
    if (result == SQLITE_OK){
        NSLog(@"清空表成功");
    }else{
        NSLog(@"清空表失败");
    }
    [self closeDB];
}

@end
