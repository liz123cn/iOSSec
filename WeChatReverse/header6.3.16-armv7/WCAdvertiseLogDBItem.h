//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface WCAdvertiseLogDBItem : MMObject <WCDBCoding>
{
    unsigned long m_uiLocalId;
    unsigned long m_uiCreateTime;
    unsigned long m_uiLogId;
    NSString *m_nsLogExt;
    long long m___rowID;
}

+ (id)dummyObject;
- (void).cxx_destruct;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
- (const WCDBCondition_8be2a476 *)db_m_nsLogExt;
- (const WCDBCondition_e9b1f587 *)db_m_uiCreateTime;
- (const WCDBCondition_e9b1f587 *)db_m_uiLocalId;
- (const WCDBCondition_e9b1f587 *)db_m_uiLogId;
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
@property(retain, nonatomic) NSString *m_nsLogExt; // @synthesize m_nsLogExt;
@property(nonatomic) unsigned long m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) unsigned long m_uiLocalId; // @synthesize m_uiLocalId;
@property(nonatomic) unsigned long m_uiLogId; // @synthesize m_uiLogId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

