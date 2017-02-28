//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface WCDBMaster : NSObject <WCDBCoding>
{
    NSString *type;
    NSString *name;
    NSString *tbl_name;
    int rootpage;
    NSString *sql;
    long long m___rowID;
}

+ (id)dummyObject;
- (void).cxx_destruct;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
- (const WCDBCondition_8be2a476 *)db_name;
- (const WCDBCondition_750820ee *)db_rootpage;
- (const WCDBCondition_8be2a476 *)db_sql;
- (const WCDBCondition_8be2a476 *)db_tbl_name;
- (const WCDBCondition_8be2a476 *)db_type;
- (const map_18e36f99 *)getFileValueTagIndexMap;
- (id)getFileValueTypeTable;
- (const map_18e36f99 *)getPackedValueTagIndexMap;
- (id)getPackedValueTypeTable;
- (const map_55ceb464 *)getValueNameIndexMap;
- (id)getValueTable;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) int rootpage; // @synthesize rootpage;
@property(retain, nonatomic) NSString *sql; // @synthesize sql;
@property(retain, nonatomic) NSString *tbl_name; // @synthesize tbl_name;
@property(retain, nonatomic) NSString *type; // @synthesize type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

