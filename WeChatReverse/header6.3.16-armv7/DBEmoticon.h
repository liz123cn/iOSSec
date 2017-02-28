//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface DBEmoticon : NSObject <WCDBCoding>
{
    NSString *md5;
    NSString *message;
    unsigned long type;
    unsigned long createTime;
    unsigned long length;
    unsigned long status;
    NSString *catalog;
    unsigned long catalogId;
    NSString *draft;
    unsigned long lastUsedTime;
    unsigned long extFlag;
    unsigned long indexInPack;
    NSString *extInfo;
    NSString *packageId;
    NSString *ConStrRes3;
    long long m___rowID;
}

+ (id)dummyObject;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *catalog; // @synthesize catalog;
@property(nonatomic) unsigned long catalogId; // @synthesize catalogId;
@property(nonatomic) unsigned long createTime; // @synthesize createTime;
- (const WCDBCondition_8be2a476 *)db_ConStrRes3;
- (const WCDBCondition_8be2a476 *)db_catalog;
- (const WCDBCondition_e9b1f587 *)db_catalogId;
- (const WCDBCondition_e9b1f587 *)db_createTime;
- (const WCDBCondition_8be2a476 *)db_draft;
- (const WCDBCondition_e9b1f587 *)db_extFlag;
- (const WCDBCondition_8be2a476 *)db_extInfo;
- (const WCDBCondition_e9b1f587 *)db_indexInPack;
- (const WCDBCondition_e9b1f587 *)db_lastUsedTime;
- (const WCDBCondition_e9b1f587 *)db_length;
- (const WCDBCondition_8be2a476 *)db_md5;
- (const WCDBCondition_8be2a476 *)db_message;
- (const WCDBCondition_8be2a476 *)db_packageId;
- (const WCDBCondition_e9b1f587 *)db_status;
- (const WCDBCondition_e9b1f587 *)db_type;
@property(retain, nonatomic) NSString *draft; // @synthesize draft;
@property(nonatomic) unsigned long extFlag; // @synthesize extFlag;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo;
- (const map_18e36f99 *)getFileValueTagIndexMap;
- (id)getFileValueTypeTable;
- (const map_18e36f99 *)getPackedValueTagIndexMap;
- (id)getPackedValueTypeTable;
- (const map_55ceb464 *)getValueNameIndexMap;
- (id)getValueTable;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (const struct WCDBIndexHelper *)getWCDBIndexArray;
- (unsigned long)getWCDBIndexArrayCount;
- (const basic_string_7d00a7a9 *)getWCDBPrimaryColumnName;
@property(nonatomic) unsigned long indexInPack; // @synthesize indexInPack;
@property(nonatomic) unsigned long lastUsedTime; // @synthesize lastUsedTime;
@property(nonatomic) unsigned long length; // @synthesize length;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(retain, nonatomic) NSString *message; // @synthesize message;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId;
@property(nonatomic) unsigned long status; // @synthesize status;
@property(nonatomic) unsigned long type; // @synthesize type;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

