//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, WCBGUserInfo, WCServerConfig;

@protocol WCDataProviderDelegate <NSObject>

@optional
- (BOOL)hasExistAdInLocal:(NSString *)arg1;
- (void)onDataUpdated:(NSString *)arg1 andData:(NSArray *)arg2 andAdData:(NSArray *)arg3 withChangedTime:(unsigned long)arg4;
- (void)onDataUpdated:(NSArray *)arg1 maxItemID:(unsigned long long)arg2 minItemID:(unsigned long long)arg3 withChangedTime:(unsigned long)arg4;
- (void)onDataUpdated:(NSArray *)arg1 withChangedTime:(unsigned long)arg2;
- (void)onNoMoreDataWithRet:(int)arg1;
- (void)onReturnBGUserInfo:(WCBGUserInfo *)arg1;
- (void)onReturnIsAllData:(NSArray *)arg1 andAdData:(NSArray *)arg2;
- (void)onReturnServerConfig:(WCServerConfig *)arg1;
- (void)onReturnShowFlag:(unsigned long)arg1;
- (void)onTotalCountChanged:(int)arg1;
@end

