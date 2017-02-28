//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "CBCentralManagerDelegate.h"
#import "MMService.h"

@class CBCentralManager, NSString;

@interface WCBeaconUtilsMgr : MMService <MMService, CBCentralManagerDelegate>
{
    CBCentralManager *_manager;
}

- (void).cxx_destruct;
- (void)centralManagerDidUpdateState:(id)arg1;
- (void)dealloc;
- (id)gatedLaunchOptionFilePath;
- (id)getGatedLaunchConfig;
- (int)getGatedLaunchType;
- (id)init;
- (BOOL)isDeviceAndOSVersionOKForIBeacon;
- (BOOL)isDeviceBLEPoweredOff;
- (BOOL)isDeviceBLEPoweredOn;
- (BOOL)isInShakeViewController;
- (BOOL)isRegionOKForIBeacon;
- (BOOL)isTabMoreThan4;
- (BOOL)isUserInGradationRegion;
- (long)loadGatedLaunchOptionsFromFile;
- (void)makeZbAppear;
@property(retain, nonatomic) CBCentralManager *manager; // @synthesize manager=_manager;
- (BOOL)saveGatedLaunchOptions:(long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

