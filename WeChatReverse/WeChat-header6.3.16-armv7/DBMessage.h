//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface DBMessage : NSObject <WCDBCoding>
{
    unsigned long version;
    unsigned long msgLocalId;
    unsigned long createTime;
    NSString *message;
    unsigned long status;
    unsigned long imageStatus;
    unsigned long type;
    unsigned long des;
    long long msgServerId;
    long long m___rowID;
}

+ (id)dummyObject;
- (void).cxx_destruct;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(nonatomic) unsigned long createTime; // @synthesize createTime;
- (const WCDBCondition_e9b1f587 *)db_createTime;
- (const WCDBCondition_e9b1f587 *)db_des;
- (const WCDBCondition_e9b1f587 *)db_imageStatus;
- (const WCDBCondition_8be2a476 *)db_message;
- (const WCDBCondition_e9b1f587 *)db_msgLocalId;
- (const WCDBCondition_24a5b6f7 *)db_msgServerId;
- (const WCDBCondition_e9b1f587 *)db_status;
- (const WCDBCondition_e9b1f587 *)db_type;
- (const WCDBCondition_e9b1f587 *)db_version;
@property(nonatomic) unsigned long des; // @synthesize des;
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
@property(nonatomic) unsigned long imageStatus; // @synthesize imageStatus;
@property(retain, nonatomic) NSString *message; // @synthesize message;
@property(nonatomic) unsigned long msgLocalId; // @synthesize msgLocalId;
@property(nonatomic) long long msgServerId; // @synthesize msgServerId;
@property(nonatomic) unsigned long status; // @synthesize status;
@property(nonatomic) unsigned long type; // @synthesize type;
@property(nonatomic) unsigned long version; // @synthesize version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
