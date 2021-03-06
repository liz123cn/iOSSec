//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying.h"
#import "WCDBCoding.h"

@class NSString;

@interface WCOutRecentCallItem : MMObject <WCDBCoding, NSCopying>
{
    unsigned long localID;
    NSString *countryCode;
    NSString *phoneNum;
    unsigned long createTime;
    unsigned long startTime;
    unsigned long endTime;
    unsigned long statusCode;
    NSString *nickName;
    NSString *phoneTag;
    long long m___rowID;
}

+ (id)dummyObject;
- (void).cxx_destruct;
- (void)CopyValueToCopy:(id)arg1;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *countryCode; // @synthesize countryCode;
@property(nonatomic) unsigned long createTime; // @synthesize createTime;
- (const WCDBCondition_8be2a476 *)db_countryCode;
- (const WCDBCondition_e9b1f587 *)db_createTime;
- (const WCDBCondition_e9b1f587 *)db_endTime;
- (const WCDBCondition_e9b1f587 *)db_localID;
- (const WCDBCondition_8be2a476 *)db_phoneNum;
- (const WCDBCondition_e9b1f587 *)db_startTime;
- (const WCDBCondition_e9b1f587 *)db_statusCode;
- (void)dealloc;
@property(nonatomic) unsigned long endTime; // @synthesize endTime;
@property(readonly, nonatomic) NSString *fullPhoneNum;
@property(readonly, nonatomic) NSString *fullPhoneNumInLog;
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
@property(nonatomic) unsigned long localID; // @synthesize localID;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(retain, nonatomic) NSString *phoneNum; // @synthesize phoneNum;
@property(retain, nonatomic) NSString *phoneTag; // @synthesize phoneTag;
@property(nonatomic) unsigned long startTime; // @synthesize startTime;
@property(nonatomic) unsigned long statusCode; // @synthesize statusCode;
@property(readonly, nonatomic) NSString *statusWording;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

