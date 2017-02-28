//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface DBQQContact : NSObject <WCDBCoding>
{
    NSString *userName;
    unsigned long uin;
    unsigned long type;
    unsigned long sex;
    unsigned long age;
    unsigned long imageKey;
    unsigned long extKey;
    unsigned long imageKeyLast;
    unsigned long extKeyLast;
    unsigned long createTime;
    unsigned long ConIntRes1;
    unsigned long ConIntRes2;
    unsigned long ConIntRes3;
    NSString *nickName;
    NSString *email;
    NSString *mobile;
    NSString *address;
    NSString *sign;
    NSString *birthday;
    NSString *fullPinYin;
    NSString *shortPinYin;
    NSString *image;
    NSString *remark;
    NSString *remarkPinYinShort;
    NSString *remarkPinYinFull;
    NSString *ConStrRes1;
    NSString *ConStrRes2;
    NSString *ConStrRes3;
    long long m___rowID;
}

+ (id)dummyObject;
- (void).cxx_destruct;
@property(nonatomic) unsigned long ConIntRes1; // @synthesize ConIntRes1;
@property(nonatomic) unsigned long ConIntRes2; // @synthesize ConIntRes2;
@property(nonatomic) unsigned long ConIntRes3; // @synthesize ConIntRes3;
@property(retain, nonatomic) NSString *ConStrRes1; // @synthesize ConStrRes1;
@property(retain, nonatomic) NSString *ConStrRes2; // @synthesize ConStrRes2;
@property(retain, nonatomic) NSString *ConStrRes3; // @synthesize ConStrRes3;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(retain, nonatomic) NSString *address; // @synthesize address;
@property(nonatomic) unsigned long age; // @synthesize age;
@property(retain, nonatomic) NSString *birthday; // @synthesize birthday;
@property(nonatomic) unsigned long createTime; // @synthesize createTime;
- (const WCDBCondition_e9b1f587 *)db_ConIntRes1;
- (const WCDBCondition_e9b1f587 *)db_ConIntRes2;
- (const WCDBCondition_e9b1f587 *)db_ConIntRes3;
- (const WCDBCondition_8be2a476 *)db_ConStrRes1;
- (const WCDBCondition_8be2a476 *)db_ConStrRes2;
- (const WCDBCondition_8be2a476 *)db_ConStrRes3;
- (const WCDBCondition_8be2a476 *)db_address;
- (const WCDBCondition_e9b1f587 *)db_age;
- (const WCDBCondition_8be2a476 *)db_birthday;
- (const WCDBCondition_e9b1f587 *)db_createTime;
- (const WCDBCondition_8be2a476 *)db_email;
- (const WCDBCondition_e9b1f587 *)db_extKey;
- (const WCDBCondition_e9b1f587 *)db_extKeyLast;
- (const WCDBCondition_8be2a476 *)db_fullPinYin;
- (const WCDBCondition_8be2a476 *)db_image;
- (const WCDBCondition_e9b1f587 *)db_imageKey;
- (const WCDBCondition_e9b1f587 *)db_imageKeyLast;
- (const WCDBCondition_8be2a476 *)db_mobile;
- (const WCDBCondition_8be2a476 *)db_nickName;
- (const WCDBCondition_8be2a476 *)db_remark;
- (const WCDBCondition_8be2a476 *)db_remarkPinYinFull;
- (const WCDBCondition_8be2a476 *)db_remarkPinYinShort;
- (const WCDBCondition_e9b1f587 *)db_sex;
- (const WCDBCondition_8be2a476 *)db_shortPinYin;
- (const WCDBCondition_8be2a476 *)db_sign;
- (const WCDBCondition_e9b1f587 *)db_type;
- (const WCDBCondition_e9b1f587 *)db_uin;
- (const WCDBCondition_8be2a476 *)db_userName;
@property(retain, nonatomic) NSString *email; // @synthesize email;
@property(nonatomic) unsigned long extKey; // @synthesize extKey;
@property(nonatomic) unsigned long extKeyLast; // @synthesize extKeyLast;
@property(retain, nonatomic) NSString *fullPinYin; // @synthesize fullPinYin;
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
@property(retain, nonatomic) NSString *image; // @synthesize image;
@property(nonatomic) unsigned long imageKey; // @synthesize imageKey;
@property(nonatomic) unsigned long imageKeyLast; // @synthesize imageKeyLast;
@property(retain, nonatomic) NSString *mobile; // @synthesize mobile;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(retain, nonatomic) NSString *remark; // @synthesize remark;
@property(retain, nonatomic) NSString *remarkPinYinFull; // @synthesize remarkPinYinFull;
@property(retain, nonatomic) NSString *remarkPinYinShort; // @synthesize remarkPinYinShort;
@property(nonatomic) unsigned long sex; // @synthesize sex;
@property(retain, nonatomic) NSString *shortPinYin; // @synthesize shortPinYin;
@property(retain, nonatomic) NSString *sign; // @synthesize sign;
@property(nonatomic) unsigned long type; // @synthesize type;
@property(nonatomic) unsigned long uin; // @synthesize uin;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

