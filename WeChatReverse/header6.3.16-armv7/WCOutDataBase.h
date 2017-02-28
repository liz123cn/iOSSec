//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class WCDataBase, WCDataBaseTable;

@interface WCOutDataBase : MMObject
{
    WCDataBase *_dbBase;
    WCDataBaseTable *_recentCallTable;
}

- (void).cxx_destruct;
- (id)arrayForLastCallItem;
- (id)compositeForLastCallItemsAndCountryCodeUseCountDic;
- (BOOL)deleteAllRecentCall;
- (BOOL)deleteRecentCallById:(int)arg1;
- (BOOL)deleteRecentCallByPhoneNum:(id)arg1 withCountryCode:(id)arg2;
- (id)dicFromCountryCodeToCount;
- (id)dicFromPhoneNumToLastCallTime;
- (unsigned long)getRecentCallCount;
- (id)init;
- (int)insertCall:(id)arg1;
- (id)selectRecentCallForPhoneNum:(id)arg1 withCountryCode:(id)arg2 limit:(unsigned long)arg3;
- (BOOL)updateRecentCall:(id)arg1;

@end
