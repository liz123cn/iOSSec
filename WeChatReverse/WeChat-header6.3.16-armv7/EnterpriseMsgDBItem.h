//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface EnterpriseMsgDBItem : MMObject <WCDBCoding>
{
    unsigned long m_uiMesLocalId;
    unsigned long m_uiCreateTime;
    unsigned long m_uiDesc;
    unsigned long m_uiStatus;
    unsigned long m_uiImgStatus;
    NSString *m_nsMessage;
    unsigned long m_uiType;
    NSString *m_nsMsgSource;
    NSString *m_nsFromUsr;
    NSString *m_nsToUsr;
    NSString *m_nsBizChatId;
    NSString *m_nsRealChatUsr;
    NSString *m_nsPattern;
    unsigned long long m_ui64MesSvrId;
    long long m___rowID;
}

+ (id)dummyObject;
- (void).cxx_destruct;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
- (int)compareMessageAscending:(id)arg1;
- (const WCDBCondition_8be2a476 *)db_m_nsBizChatId;
- (const WCDBCondition_8be2a476 *)db_m_nsFromUsr;
- (const WCDBCondition_8be2a476 *)db_m_nsMessage;
- (const WCDBCondition_8be2a476 *)db_m_nsMsgSource;
- (const WCDBCondition_8be2a476 *)db_m_nsPattern;
- (const WCDBCondition_8be2a476 *)db_m_nsRealChatUsr;
- (const WCDBCondition_8be2a476 *)db_m_nsToUsr;
- (const WCDBCondition_a9076411 *)db_m_ui64MesSvrId;
- (const WCDBCondition_e9b1f587 *)db_m_uiCreateTime;
- (const WCDBCondition_e9b1f587 *)db_m_uiDesc;
- (const WCDBCondition_e9b1f587 *)db_m_uiImgStatus;
- (const WCDBCondition_e9b1f587 *)db_m_uiMesLocalId;
- (const WCDBCondition_e9b1f587 *)db_m_uiStatus;
- (const WCDBCondition_e9b1f587 *)db_m_uiType;
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
@property(retain, nonatomic) NSString *m_nsBizChatId; // @synthesize m_nsBizChatId;
@property(retain, nonatomic) NSString *m_nsFromUsr; // @synthesize m_nsFromUsr;
@property(retain, nonatomic) NSString *m_nsMessage; // @synthesize m_nsMessage;
@property(retain, nonatomic) NSString *m_nsMsgSource; // @synthesize m_nsMsgSource;
@property(retain, nonatomic) NSString *m_nsPattern; // @synthesize m_nsPattern;
@property(retain, nonatomic) NSString *m_nsRealChatUsr; // @synthesize m_nsRealChatUsr;
@property(retain, nonatomic) NSString *m_nsToUsr; // @synthesize m_nsToUsr;
@property(nonatomic) unsigned long long m_ui64MesSvrId; // @synthesize m_ui64MesSvrId;
@property(nonatomic) unsigned long m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) unsigned long m_uiDesc; // @synthesize m_uiDesc;
@property(nonatomic) unsigned long m_uiImgStatus; // @synthesize m_uiImgStatus;
@property(nonatomic) unsigned long m_uiMesLocalId; // @synthesize m_uiMesLocalId;
@property(nonatomic) unsigned long m_uiStatus; // @synthesize m_uiStatus;
@property(nonatomic) unsigned long m_uiType; // @synthesize m_uiType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

