//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSData, NSString;

@interface DBOplog : NSObject <WCDBCoding>
{
    unsigned long version;
    unsigned long oplogId;
    unsigned long cmdId;
    NSData *oplog;
    unsigned long oplogLen;
    long long m___rowID;
}

+ (id)dummyObject;
- (void).cxx_destruct;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(nonatomic) unsigned long cmdId; // @synthesize cmdId;
- (const WCDBCondition_e9b1f587 *)db_cmdId;
- (const WCDBCondition_5617ae99 *)db_oplog;
- (const WCDBCondition_e9b1f587 *)db_oplogId;
- (const WCDBCondition_e9b1f587 *)db_oplogLen;
- (const WCDBCondition_e9b1f587 *)db_version;
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
@property(retain, nonatomic) NSData *oplog; // @synthesize oplog;
@property(nonatomic) unsigned long oplogId; // @synthesize oplogId;
@property(nonatomic) unsigned long oplogLen; // @synthesize oplogLen;
@property(nonatomic) unsigned long version; // @synthesize version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

