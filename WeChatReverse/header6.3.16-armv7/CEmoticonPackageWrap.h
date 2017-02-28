//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface CEmoticonPackageWrap : NSObject <WCDBCoding>
{
    NSString *m_packageId;
    NSString *m_packageName;
    unsigned long m_payStatus;
    unsigned long m_downloadStatus;
    unsigned long m_installTime;
    unsigned long m_removeTime;
    NSString *m_iconUrl;
    NSString *m_panelUrl;
    unsigned long ConIntRes1;
    unsigned long ConIntRes2;
    unsigned long ConIntRes3;
    NSString *ConStrRes1;
    NSString *ConStrRes2;
    NSString *ConStrRes3;
    long long m___rowID;
}

+ (id)dummyObject;
+ (id)packageItemFromSummary:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) unsigned long ConIntRes1; // @synthesize ConIntRes1;
@property(nonatomic) unsigned long ConIntRes2; // @synthesize ConIntRes2;
@property(nonatomic) unsigned long ConIntRes3; // @synthesize ConIntRes3;
@property(retain, nonatomic) NSString *ConStrRes1; // @synthesize ConStrRes1;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
- (const WCDBCondition_e9b1f587 *)db_ConIntRes1;
- (const WCDBCondition_e9b1f587 *)db_ConIntRes2;
- (const WCDBCondition_e9b1f587 *)db_ConIntRes3;
- (const WCDBCondition_8be2a476 *)db_ConStrRes1;
- (const WCDBCondition_8be2a476 *)db_ConStrRes2;
- (const WCDBCondition_8be2a476 *)db_ConStrRes3;
- (const WCDBCondition_e9b1f587 *)db_m_downloadStatus;
- (const WCDBCondition_8be2a476 *)db_m_iconUrl;
- (const WCDBCondition_e9b1f587 *)db_m_installTime;
- (const WCDBCondition_8be2a476 *)db_m_packageId;
- (const WCDBCondition_8be2a476 *)db_m_packageName;
- (const WCDBCondition_8be2a476 *)db_m_panelUrl;
- (const WCDBCondition_e9b1f587 *)db_m_payStatus;
- (const WCDBCondition_e9b1f587 *)db_m_removeTime;
@property(readonly, copy) NSString *description;
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
- (id)init;
- (BOOL)isTusiji;
@property(nonatomic) unsigned long m_downloadStatus; // @synthesize m_downloadStatus;
@property(retain, nonatomic) NSString *m_iconUrl; // @synthesize m_iconUrl;
@property(nonatomic) unsigned long m_installTime; // @synthesize m_installTime;
@property(retain, nonatomic) NSString *m_packageId; // @synthesize m_packageId;
@property(retain, nonatomic) NSString *m_packageName; // @synthesize m_packageName;
@property(retain, nonatomic) NSString *m_panelUrl; // @synthesize m_panelUrl;
@property(nonatomic) unsigned long m_payStatus; // @synthesize m_payStatus;
@property(nonatomic) unsigned long m_removeTime; // @synthesize m_removeTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

