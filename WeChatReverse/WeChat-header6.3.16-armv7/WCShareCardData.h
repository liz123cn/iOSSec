//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCCardDataSource.h"
#import "WCDBCoding.h"

@class NSString, WCCardDataCardInfo, WCCardDataCardTPInfo;

@interface WCShareCardData : MMObject <WCDBCoding, WCCardDataSource>
{
    BOOL bNearby;
    NSString *announceMent;
    unsigned long localCardId;
    NSString *cardId;
    NSString *cardTpId;
    NSString *appId;
    unsigned long stateFlag;
    unsigned long updateTime;
    unsigned long localUpdateTime;
    unsigned long shareTime;
    NSString *shareUserName;
    unsigned long expireTime;
    NSString *markUserName;
    NSString *shareCardTPInfoForDB;
    NSString *shareCardInfoForDB;
    NSString *shareCardShareInfoForDB;
    NSString *shareCardLogoName;
    NSString *shareCardTitle;
    NSString *shareCardFromUser;
    NSString *shareCardContent;
    unsigned long IntRes1;
    unsigned long IntRes2;
    unsigned long IntRes3;
    NSString *StrRes1;
    NSString *StrRes2;
    NSString *StrRes3;
    WCCardDataCardInfo *shareCardInfo;
    WCCardDataCardTPInfo *shareCardTPInfo;
    unsigned long long updateSeq;
    unsigned long long localUpdateSeq;
    long long m___rowID;
}

+ (id)dummyObject;
- (void).cxx_destruct;
- (BOOL)HasBeConsumed;
@property(nonatomic) unsigned long IntRes1; // @synthesize IntRes1;
@property(nonatomic) unsigned long IntRes2; // @synthesize IntRes2;
@property(nonatomic) unsigned long IntRes3; // @synthesize IntRes3;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(retain, nonatomic) NSString *StrRes3; // @synthesize StrRes3;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *announceMent; // @synthesize announceMent;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(nonatomic) BOOL bNearby; // @synthesize bNearby;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(retain, nonatomic) NSString *cardTpId; // @synthesize cardTpId;
- (int)compareShareTime:(id)arg1;
- (const WCDBCondition_e9b1f587 *)db_IntRes1;
- (const WCDBCondition_e9b1f587 *)db_IntRes2;
- (const WCDBCondition_e9b1f587 *)db_IntRes3;
- (const WCDBCondition_8be2a476 *)db_StrRes1;
- (const WCDBCondition_8be2a476 *)db_StrRes2;
- (const WCDBCondition_8be2a476 *)db_StrRes3;
- (const WCDBCondition_8be2a476 *)db_appId;
- (const WCDBCondition_8be2a476 *)db_cardId;
- (const WCDBCondition_8be2a476 *)db_cardTpId;
- (const WCDBCondition_e9b1f587 *)db_expireTime;
- (const WCDBCondition_e9b1f587 *)db_localCardId;
- (const WCDBCondition_a9076411 *)db_localUpdateSeq;
- (const WCDBCondition_e9b1f587 *)db_localUpdateTime;
- (const WCDBCondition_8be2a476 *)db_markUserName;
- (const WCDBCondition_8be2a476 *)db_shareCardContent;
- (const WCDBCondition_8be2a476 *)db_shareCardFromUser;
- (const WCDBCondition_8be2a476 *)db_shareCardInfoForDB;
- (const WCDBCondition_8be2a476 *)db_shareCardLogoName;
- (const WCDBCondition_8be2a476 *)db_shareCardShareInfoForDB;
- (const WCDBCondition_8be2a476 *)db_shareCardTPInfoForDB;
- (const WCDBCondition_8be2a476 *)db_shareCardTitle;
- (const WCDBCondition_e9b1f587 *)db_shareTime;
- (const WCDBCondition_8be2a476 *)db_shareUserName;
- (const WCDBCondition_e9b1f587 *)db_stateFlag;
- (const WCDBCondition_a9076411 *)db_updateSeq;
- (const WCDBCondition_e9b1f587 *)db_updateTime;
@property(nonatomic) unsigned long expireTime; // @synthesize expireTime;
- (id)getCardId;
- (id)getCardInfo;
- (id)getCardTpId;
- (id)getCardTpInfo;
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
@property(nonatomic) unsigned long localCardId; // @synthesize localCardId;
@property(nonatomic) unsigned long long localUpdateSeq; // @synthesize localUpdateSeq;
@property(nonatomic) unsigned long localUpdateTime; // @synthesize localUpdateTime;
@property(retain, nonatomic) NSString *markUserName; // @synthesize markUserName;
- (void)parseFromJSONDic:(id)arg1;
- (void)parseFromJSONStr:(id)arg1;
@property(retain, nonatomic) NSString *shareCardContent; // @synthesize shareCardContent;
@property(retain, nonatomic) NSString *shareCardFromUser; // @synthesize shareCardFromUser;
@property(retain, nonatomic) WCCardDataCardInfo *shareCardInfo; // @synthesize shareCardInfo;
@property(retain, nonatomic) NSString *shareCardInfoForDB; // @synthesize shareCardInfoForDB;
@property(retain, nonatomic) NSString *shareCardLogoName; // @synthesize shareCardLogoName;
@property(retain, nonatomic) NSString *shareCardShareInfoForDB; // @synthesize shareCardShareInfoForDB;
@property(retain, nonatomic) WCCardDataCardTPInfo *shareCardTPInfo; // @synthesize shareCardTPInfo;
@property(retain, nonatomic) NSString *shareCardTPInfoForDB; // @synthesize shareCardTPInfoForDB;
@property(retain, nonatomic) NSString *shareCardTitle; // @synthesize shareCardTitle;
@property(nonatomic) unsigned long shareTime; // @synthesize shareTime;
@property(retain, nonatomic) NSString *shareUserName; // @synthesize shareUserName;
@property(nonatomic) unsigned long stateFlag; // @synthesize stateFlag;
@property(nonatomic) unsigned long long updateSeq; // @synthesize updateSeq;
@property(nonatomic) unsigned long updateTime; // @synthesize updateTime;
- (void)setupDataBeforeWriteDB;
- (void)setupDataFromDB;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

