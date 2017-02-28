//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString;

@interface WXCCNetworkStatus : MMService <MMService>
{
    unsigned long m_uiLastStatus;
    id <WXCNetworkStatusDelegate> m_delNetworkStatus;
}

+ (id)descriptionForNetType:(int)arg1;
+ (id)getCarrierName;
+ (BOOL)isSimCardSupport3GPlus;
- (void)ChangeReach;
- (void)PingReach;
- (void)Start:(id)arg1;
- (void)Stop;
- (void)dealloc;
- (int)getNetworkType;
- (id)init;
- (BOOL)isOnWWan;
- (BOOL)isOnWifi;
- (BOOL)isReachable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

