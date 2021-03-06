//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IBeaconSearchExt.h"
#import "LocationRetrieveDelegate.h"
#import "WCBeaconGuideModeExt.h"

@class CLLocation, LocationRetriever, NSString;

@interface ShakeBeaconLogicController : MMObject <LocationRetrieveDelegate, IBeaconSearchExt, WCBeaconGuideModeExt>
{
    id <ShakeLogicProxyDelegate> m_delegate;
    LocationRetriever *_locationRetriever;
    CLLocation *_location;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)getMsgForState:(unsigned long)arg1;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isShowBannerView;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) LocationRetriever *locationRetriever; // @synthesize locationRetriever=_locationRetriever;
- (void)onDidFetchedContent:(id)arg1;
- (void)onDidFetchedNoContentWithError:(unsigned int)arg1;
- (void)onGetBeaconError:(int)arg1;
- (void)onGetBeaconResponse:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)shakeReport;
- (void)shakeReset;
- (void)shakeStop;
- (void)shakeTerminate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

