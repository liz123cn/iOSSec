//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@interface WCDeviceNetworkLogicMgr : MMObject <PBMessageObserverDelegate>
{
    id <WCDeviceNetworkLogicMgrDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)batchSearchWCDeviceByMac:(id)arg1 Filter:(id)arg2 Secene:(int)arg3;
- (void)dealloc;
@property(nonatomic) __weak id <WCDeviceNetworkLogicMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleBatchSearchHardDeviceResponse:(id)arg1;
- (void)handleGetHardDeviceHelpUrlResponse:(id)arg1;
- (void)handleGetHardDeviceOperTicketResponse:(id)arg1;
- (void)handleGetSportDeviceListResponse:(id)arg1;
- (void)handleSearchBLEHardDeviceResponse:(id)arg1;
- (void)handleSearchWifiHardDeviceResponse:(id)arg1;
- (void)handleUpdateMyDeviceAttrResponse:(id)arg1;
- (void)handleUploadDeviceStepResponse:(id)arg1;
- (void)handleWCDeviceBindResponse:(id)arg1;
- (void)handleWCDeviceGetBoundDevicesResponse:(id)arg1;
- (void)handleWCDeviceSearchResponse:(id)arg1;
- (void)handleWCDeviceUnbindResponse:(id)arg1;
- (void)onBatchSearchHardDeviceResponse:(id)arg1 Request:(id)arg2;
- (void)onSearchDeviceResponse:(id)arg1 Request:(id)arg2;
- (void)onSendWCDeviceGetBoundDevicesResponse:(id)arg1 Request:(id)arg2;
- (void)onSendWCDeviceUnbindResponse:(id)arg1 Request:(id)arg2 HardDevice:(id)arg3 UserData:(id)arg4;
- (void)searchWCDeviceForQRCode:(id)arg1;
- (void)sendAirKissHelpUrlReq:(id)arg1;
- (void)sendDeviceStepReq:(id)arg1 stepObject:(id)arg2;
- (void)sendGetSportDeviceListReq;
- (void)sendRequest:(id)arg1 Retry:(unsigned long)arg2;
- (void)sendSearchBLEHardDevice:(id)arg1;
- (void)sendSearchWifiHardDeviceReq:(id)arg1;
- (void)sendUpdateMyDeviceAttrRequest:(id)arg1 alias:(id)arg2 isMain:(unsigned long)arg3;
- (void)sendUploadDeviceStepReq:(id)arg1 stepCount:(unsigned long)arg2 fromTime:(unsigned long)arg3 toTime:(unsigned long)arg4 hkSourceList:(id)arg5;
- (void)sendWCDeviceBindRequest:(id)arg1 Ticket:(id)arg2 SubscribeFlag:(unsigned int)arg3;
- (void)sendWCDeviceGetBoundDevicesRequest;
- (void)sendWCDeviceUnbindRequest:(id)arg1;
- (void)sendWCDeviceUnbindSingleDeviceRequest:(id)arg1 deviceId:(id)arg2;
- (void)sendWCDevicesGetOperTicketRequest:(id)arg1 Filter:(id)arg2;

@end

