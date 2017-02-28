//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCDBCoding.h"

@class NSData, NSMutableArray, NSString;

@interface MMResInfo : MMObject <WCDBCoding>
{
    BOOL isEncrypt;
    BOOL isCompress;
    BOOL isTemp;
    unsigned long resInfoId;
    NSString *resUrlMd5;
    NSString *resMd5;
    NSString *appId;
    NSString *domain;
    NSString *version;
    NSString *localSubPath;
    unsigned long createTime;
    unsigned long expireTime;
    unsigned long accessTime;
    unsigned long crc32;
    unsigned long resType;
    unsigned long resSubType;
    unsigned long fileId;
    unsigned long supportVersion;
    unsigned long eid;
    NSString *sampleId;
    unsigned long reportId;
    NSData *signatureData;
    NSMutableArray *arrSignatureDataInfo;
    NSString *resOriginalMd5;
    long long size;
    long long offset;
    long long chunkLength;
    long long m___rowID;
}

+ (id)dummyObject;
- (void).cxx_destruct;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(nonatomic) unsigned long accessTime; // @synthesize accessTime;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) NSMutableArray *arrSignatureDataInfo; // @synthesize arrSignatureDataInfo;
@property(nonatomic) long long chunkLength; // @synthesize chunkLength;
- (int)compareAccessTimeByResInfo:(id)arg1;
@property(nonatomic) unsigned long crc32; // @synthesize crc32;
@property(nonatomic) unsigned long createTime; // @synthesize createTime;
- (const WCDBCondition_e9b1f587 *)db_accessTime;
- (const WCDBCondition_8be2a476 *)db_appId;
- (const WCDBCondition_a9076411 *)db_chunkLength;
- (const WCDBCondition_e9b1f587 *)db_crc32;
- (const WCDBCondition_e9b1f587 *)db_createTime;
- (const WCDBCondition_8be2a476 *)db_domain;
- (const WCDBCondition_e9b1f587 *)db_eid;
- (const WCDBCondition_e9b1f587 *)db_expireTime;
- (const WCDBCondition_e9b1f587 *)db_fileId;
- (const WCDBCondition_e01389bb *)db_isCompress;
- (const WCDBCondition_e01389bb *)db_isEncrypt;
- (const WCDBCondition_e01389bb *)db_isTemp;
- (const WCDBCondition_8be2a476 *)db_localSubPath;
- (const WCDBCondition_a9076411 *)db_offset;
- (const WCDBCondition_e9b1f587 *)db_reportId;
- (const WCDBCondition_e9b1f587 *)db_resInfoId;
- (const WCDBCondition_8be2a476 *)db_resMd5;
- (const WCDBCondition_8be2a476 *)db_resOriginalMd5;
- (const WCDBCondition_e9b1f587 *)db_resSubType;
- (const WCDBCondition_e9b1f587 *)db_resType;
- (const WCDBCondition_8be2a476 *)db_resUrlMd5;
- (const WCDBCondition_8be2a476 *)db_sampleId;
- (const WCDBCondition_5617ae99 *)db_signatureData;
- (const WCDBCondition_a9076411 *)db_size;
- (const WCDBCondition_e9b1f587 *)db_supportVersion;
- (const WCDBCondition_8be2a476 *)db_version;
- (void)dealloc;
@property(retain, nonatomic) NSString *domain; // @synthesize domain;
@property(nonatomic) unsigned long eid; // @synthesize eid;
@property(nonatomic) unsigned long expireTime; // @synthesize expireTime;
@property(nonatomic) unsigned long fileId; // @synthesize fileId;
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
@property(nonatomic) BOOL isCompress; // @synthesize isCompress;
@property(nonatomic) BOOL isEncrypt; // @synthesize isEncrypt;
@property(nonatomic) BOOL isTemp; // @synthesize isTemp;
@property(retain, nonatomic) NSString *localSubPath; // @synthesize localSubPath;
@property(nonatomic) long long offset; // @synthesize offset;
@property(nonatomic) unsigned long reportId; // @synthesize reportId;
@property(nonatomic) unsigned long resInfoId; // @synthesize resInfoId;
@property(retain, nonatomic) NSString *resMd5; // @synthesize resMd5;
@property(retain, nonatomic) NSString *resOriginalMd5; // @synthesize resOriginalMd5;
@property(nonatomic) unsigned long resSubType; // @synthesize resSubType;
@property(nonatomic) unsigned long resType; // @synthesize resType;
@property(retain, nonatomic) NSString *resUrlMd5; // @synthesize resUrlMd5;
@property(retain, nonatomic) NSString *sampleId; // @synthesize sampleId;
@property(retain, nonatomic) NSData *signatureData; // @synthesize signatureData;
@property(nonatomic) long long size; // @synthesize size;
@property(nonatomic) unsigned long supportVersion; // @synthesize supportVersion;
@property(retain, nonatomic) NSString *version; // @synthesize version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

