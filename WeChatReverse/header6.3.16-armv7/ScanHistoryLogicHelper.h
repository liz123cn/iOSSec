//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary;

@interface ScanHistoryLogicHelper : NSObject
{
    NSMutableDictionary *_dicItems;
    NSMutableArray *_arrSortedKeyByTime;
    NSMutableArray *_arrSortedItems;
}

+ (id)GetCachePath;
+ (BOOL)isExistScanHistory;
- (void).cxx_destruct;
- (void)LoadDataFromFile;
- (void)SaveDataToFile;
- (void)addItem:(id)arg1 withDataID:(id)arg2 andType:(unsigned int)arg3;
- (id)arrHistoryItems;
- (void)cleanAllData;
- (unsigned int)historyCount;
- (id)init;
- (id)itemCreateTime:(unsigned int)arg1;
- (void)removeItem:(unsigned int)arg1;

@end

