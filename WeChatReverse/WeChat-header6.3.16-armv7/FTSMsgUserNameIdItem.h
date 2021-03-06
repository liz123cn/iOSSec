//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString;

@interface FTSMsgUserNameIdItem : NSObject <WCDBCoding>
{
    unsigned long userNameId;
    unsigned long validFlag;
    NSString *userName;
    unsigned long tableId;
    unsigned long preCursorMesId;
    unsigned long nextCursorMesId;
    long long m___rowID;
}

+ (id)dummyObject;
- (void).cxx_destruct;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
- (const WCDBCondition_e9b1f587 *)db_nextCursorMesId;
- (const WCDBCondition_e9b1f587 *)db_preCursorMesId;
- (const WCDBCondition_e9b1f587 *)db_tableId;
- (const WCDBCondition_8be2a476 *)db_userName;
- (const WCDBCondition_e9b1f587 *)db_userNameId;
- (const WCDBCondition_e9b1f587 *)db_validFlag;
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
@property(nonatomic) unsigned long nextCursorMesId; // @synthesize nextCursorMesId;
@property(nonatomic) unsigned long preCursorMesId; // @synthesize preCursorMesId;
@property(nonatomic) unsigned long tableId; // @synthesize tableId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;
@property(nonatomic) unsigned long userNameId; // @synthesize userNameId;
@property(nonatomic) unsigned long validFlag; // @synthesize validFlag;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

