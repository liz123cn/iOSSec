//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IWCLanDeviceMgrExt.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableDictionary, NSMutableSet, NSString, WCLanDeviceMgr;

@interface WCLanDeviceBaseKissLogic : NSObject <IWCLanDeviceMgrExt, PBMessageObserverDelegate>
{
    NSMutableSet *m_deviceMd5Set;
    NSMutableDictionary *m_lanDeviceDict;
    NSMutableDictionary *m_reqEventMap;
    WCLanDeviceMgr *m_lanMgr;
    id <WCLanDeviceKissLogicDelegate> _delegate;
    unsigned int _deviceScene;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)cancelTaskWithDevice:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <WCLanDeviceKissLogicDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned int deviceScene; // @synthesize deviceScene=_deviceScene;
- (id)devicesApplyScene;
- (id)devicesApplySceneAndSupportInternetKissOnly;
- (void)disconnect;
- (BOOL)filterSearchLanDevice:(id)arg1;
- (void)forwardData:(id)arg1 toDevice:(id)arg2 isThrouSever:(BOOL)arg3;
- (id)init;
- (id)initWithDelegate:(id)arg1 deviceScene:(unsigned int)arg2;
- (id)lanDeviceWithDeviceMD5:(id)arg1;
- (void)onReceiveWCLanDeviceProfile:(id)arg1;
- (unsigned long)popEventIdRelatedWithDevice:(id)arg1;
- (void)sendRequest:(id)arg1 Retry:(unsigned long)arg2 Device:(id)arg3;
- (void)startScan;
- (void)stopScan;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

