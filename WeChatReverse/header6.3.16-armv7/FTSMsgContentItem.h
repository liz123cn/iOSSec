//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface FTSMsgContentItem : NSObject <WCDBCoding>
{
    unsigned long userNameId;
    unsigned long msgLocalId;
    unsigned long createTime;
    NSString *msg;
    unsigned long reservedInt;
    NSString *reservedText;
    long long m___rowID;
}

+ (id)dummyObject;
+ (id)getWCDBTableHelperDictionary;
- (void).cxx_destruct;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
@property(nonatomic) unsigned long createTime; // @synthesize createTime;
- (const WCDBCondition_e9b1f587 *)db_createTime;
- (const WCDBCondition_8be2a476 *)db_msg;
- (const WCDBCondition_e9b1f587 *)db_msgLocalId;
- (const WCDBCondition_e9b1f587 *)db_reservedInt;
- (const WCDBCondition_8be2a476 *)db_reservedText;
- (const WCDBCondition_e9b1f587 *)db_userNameId;
- (const map_18e36f99 *)getFileValueTagIndexMap;
- (id)getFileValueTypeTable;
- (const map_18e36f99 *)getPackedValueTagIndexMap;
- (id)getPackedValueTypeTable;
- (const map_55ceb464 *)getValueNameIndexMap;
- (id)getValueTable;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(retain, nonatomic) NSString *msg; // @synthesize msg;
@property(nonatomic) unsigned long msgLocalId; // @synthesize msgLocalId;
@property(nonatomic) unsigned long reservedInt; // @synthesize reservedInt;
@property(retain, nonatomic) NSString *reservedText; // @synthesize reservedText;
@property(nonatomic) unsigned long userNameId; // @synthesize userNameId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
