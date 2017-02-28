//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IWCDeviceBrandMgrExt.h"
#import "IWCLanDeviceMgrExt.h"

@class NSMutableDictionary, NSMutableSet, NSString, WCDevice, WCDeviceBrandMgr, WCLanDeviceMgr;

@interface WCDeviceSearchLogic : NSObject <IWCDeviceBrandMgrExt, IWCLanDeviceMgrExt>
{
    WCDeviceBrandMgr *m_manager;
    WCLanDeviceMgr *m_LanManager;
    WCDevice *m_fliterDevice;
    NSMutableSet *m_macSet;
    NSMutableDictionary *m_bleDeviceMap;
    id <WCDeviceSearchLogicDelegate> _delegate;
    unsigned int _deviceSearchType;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <WCDeviceSearchLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int deviceSearchType; // @synthesize deviceSearchType=_deviceSearchType;
- (BOOL)fliterDevice:(id)arg1;
- (id)init;
- (id)initWithFliterDevice:(id)arg1;
- (BOOL)isBLEDeviceBoundWithDid:(long long)arg1;
- (BOOL)isDeviceBoundWithDeviceType:(id)arg1 deviceID:(id)arg2;
- (void)onBLEHardDeviceSearch:(id)arg1 modContact:(id)arg2 respData:(id)arg3 errorCode:(int)arg4;
- (void)onReceiveWCLanDeviceDisc:(id)arg1;
- (void)onWCDeviceFound:(long long)arg1 canHandled:(char *)arg2;
- (void)onWifiHardDeviceSearch:(id)arg1 respData:(id)arg2 ExtData:(id)arg3;
- (void)startScan;
- (void)stopScan;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

