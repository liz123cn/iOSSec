//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GetHardDeviceHelpUrlResp, NSArray, NSError, NSMutableArray, NSString, SearchBLEHardDeviceResp, SearchHardDeviceResponse, SearchWiFiHardDeviceResp, WCDevice;

@protocol WCDeviceNetworkLogicMgrDelegate <NSObject>

@optional
- (void)onBatchSearchWCDeviceResponse:(NSArray *)arg1 Scene:(int)arg2 ErrorCode:(int)arg3;
- (void)onGetSportDeviceListResponse:(NSMutableArray *)arg1 ErrorCode:(int)arg2;
- (void)onSearchWCDeviceResponse:(SearchHardDeviceResponse *)arg1;
- (void)onSendAirKissHelpUrlReq:(GetHardDeviceHelpUrlResp *)arg1 device:(WCDevice *)arg2;
- (void)onSendSearchBLEHardDevice:(SearchBLEHardDeviceResp *)arg1 device:(WCDevice *)arg2;
- (void)onSendSearchWifiHardDevice:(SearchWiFiHardDeviceResp *)arg1 extData:(NSString *)arg2;
- (void)onSendWCDeviceBindResponse:(WCDevice *)arg1 Ticket:(NSString *)arg2 Error:(NSError *)arg3;
- (void)onSendWCDeviceUnbindResponse:(NSString *)arg1 deviceId:(NSString *)arg2 bAllUnbind:(BOOL)arg3 Error:(NSError *)arg4;
- (void)onSendWCDevicesGetOperTicketResponse:(NSArray *)arg1 reqTicketList:(NSArray *)arg2 ErrorCode:(int)arg3;
- (void)onUpdateMyDeviceAttrResponse:(WCDevice *)arg1 Error:(int)arg2;
- (void)onUploadDeviceStepReponse:(WCDevice *)arg1 stepCount:(unsigned long)arg2 HKStepCount:(unsigned long)arg3 M7StepCount:(unsigned long)arg4 sourceWhiteList:(NSArray *)arg5 ErrorCode:(int)arg6;
- (void)onWCDeviceGetBoundDevicesResponse:(NSMutableArray *)arg1;
@end

