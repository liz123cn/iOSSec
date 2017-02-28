//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCDBCoding.h"

@class MMResDownloadUrlInfo, NSString;

@interface MMResDownloadInfo : MMObject <WCDBCoding>
{
    unsigned long resType;
    unsigned long networkType;
    unsigned long scene;
    unsigned long expiredTime;
    unsigned long subType;
    NSString *appId;
    NSString *domain;
    NSString *baseDir;
    unsigned long retryTime;
    unsigned long reportId;
    NSString *sampleId;
    NSString *packageId;
    MMResDownloadUrlInfo *resUrlInfo;
    unsigned long eid;
    long long m___rowID;
}

+ (id)dummyObject;
- (void).cxx_destruct;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) NSString *baseDir; // @synthesize baseDir;
- (const WCDBCondition_8be2a476 *)db_appId;
- (const WCDBCondition_8be2a476 *)db_baseDir;
- (const WCDBCondition_8be2a476 *)db_domain;
- (const WCDBCondition_e9b1f587 *)db_eid;
- (const WCDBCondition_e9b1f587 *)db_expiredTime;
- (const WCDBCondition_e9b1f587 *)db_networkType;
- (const WCDBCondition_8be2a476 *)db_packageId;
- (const WCDBCondition_e9b1f587 *)db_reportId;
- (const WCDBCondition_e9b1f587 *)db_resType;
- (const WCDBCondition_b270c30c *)db_resUrlInfo;
- (const WCDBCondition_e9b1f587 *)db_retryTime;
- (const WCDBCondition_8be2a476 *)db_sampleId;
- (const WCDBCondition_e9b1f587 *)db_scene;
- (const WCDBCondition_e9b1f587 *)db_subType;
- (void)dealloc;
@property(retain, nonatomic) NSString *domain; // @synthesize domain;
@property(nonatomic) unsigned long eid; // @synthesize eid;
@property(nonatomic) unsigned long expiredTime; // @synthesize expiredTime;
- (const map_18e36f99 *)getFileValueTagIndexMap;
- (id)getFileValueTypeTable;
- (const map_18e36f99 *)getPackedValueTagIndexMap;
- (id)getPackedValueTypeTable;
- (const map_55ceb464 *)getValueNameIndexMap;
- (id)getValueTable;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned long networkType; // @synthesize networkType;
@property(retain, nonatomic) NSString *packageId; // @synthesize packageId;
@property(nonatomic) unsigned long reportId; // @synthesize reportId;
@property(nonatomic) unsigned long resType; // @synthesize resType;
@property(retain, nonatomic) MMResDownloadUrlInfo *resUrlInfo; // @synthesize resUrlInfo;
@property(nonatomic) unsigned long retryTime; // @synthesize retryTime;
@property(retain, nonatomic) NSString *sampleId; // @synthesize sampleId;
@property(nonatomic) unsigned long scene; // @synthesize scene;
@property(nonatomic) unsigned long subType; // @synthesize subType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

