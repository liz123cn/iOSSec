//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCoding.h"

@class NSArray, NSDictionary;

@protocol WCDBCoding <PBCoding>
+ (id)dummyObject;
@property(nonatomic) long long __rowID;
- (const map_55ceb464 *)getValueNameIndexMap;
- (NSArray *)getValueTable;

@optional
+ (NSDictionary *)getWCDBTableHelperDictionary;
- (const map_18e36f99 *)getFileValueTagIndexMap;
- (NSArray *)getFileValueTypeTable;
- (const map_18e36f99 *)getPackedValueTagIndexMap;
- (NSArray *)getPackedValueTypeTable;
- (const struct WCDBIndexHelper *)getWCDBIndexArray;
- (unsigned long)getWCDBIndexArrayCount;
- (const basic_string_7d00a7a9 *)getWCDBPrimaryColumnName;
@end

