//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface FavoritesCDNInfo : NSObject <WCDBCoding>
{
    unsigned long localItemId;
    NSString *localDataID;
    NSString *cdnUrl;
    unsigned long size;
    long status;
    NSString *cdnKey;
    NSString *md5;
    NSString *head256Md5;
    long isThumb;
    long dataType;
    NSString *streamId;
    NSString *dataFmt;
    unsigned long IntRes1;
    unsigned long IntRes2;
    NSString *StrRes1;
    NSString *StrRes2;
    long long m___rowID;
}

+ (id)dummyObject;
- (void).cxx_destruct;
@property(nonatomic) unsigned long IntRes1; // @synthesize IntRes1;
@property(nonatomic) unsigned long IntRes2; // @synthesize IntRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *cdnKey; // @synthesize cdnKey;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl;
@property(retain, nonatomic) NSString *dataFmt; // @synthesize dataFmt;
@property(nonatomic) long dataType; // @synthesize dataType;
- (const WCDBCondition_e9b1f587 *)db_IntRes1;
- (const WCDBCondition_e9b1f587 *)db_IntRes2;
- (const WCDBCondition_8be2a476 *)db_StrRes1;
- (const WCDBCondition_8be2a476 *)db_StrRes2;
- (const WCDBCondition_8be2a476 *)db_cdnKey;
- (const WCDBCondition_8be2a476 *)db_cdnUrl;
- (const WCDBCondition_8be2a476 *)db_dataFmt;
- (const WCDBCondition_750820ee *)db_dataType;
- (const WCDBCondition_8be2a476 *)db_head256Md5;
- (const WCDBCondition_750820ee *)db_isThumb;
- (const WCDBCondition_8be2a476 *)db_localDataID;
- (const WCDBCondition_e9b1f587 *)db_localItemId;
- (const WCDBCondition_8be2a476 *)db_md5;
- (const WCDBCondition_e9b1f587 *)db_size;
- (const WCDBCondition_750820ee *)db_status;
- (const WCDBCondition_8be2a476 *)db_streamId;
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
@property(retain, nonatomic) NSString *head256Md5; // @synthesize head256Md5;
- (id)init;
@property(nonatomic) long isThumb; // @synthesize isThumb;
@property(retain, nonatomic) NSString *localDataID; // @synthesize localDataID;
@property(nonatomic) unsigned long localItemId; // @synthesize localItemId;
@property(retain, nonatomic) NSString *md5; // @synthesize md5;
@property(nonatomic) unsigned long size; // @synthesize size;
@property(nonatomic) long status; // @synthesize status;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

