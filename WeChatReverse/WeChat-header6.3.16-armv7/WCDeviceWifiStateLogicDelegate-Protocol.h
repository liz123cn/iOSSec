//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCDevice;

@protocol WCDeviceWifiStateLogicDelegate <NSObject>
- (void)onhandleWifiStateUpdateMsgEnd:(WCDevice *)arg1 Status:(unsigned long)arg2;

@optional
- (void)onWCDevideWifiStateSubscribeEnd:(WCDevice *)arg1 ForError:(int)arg2;
@end

