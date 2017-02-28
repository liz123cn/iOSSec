//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "LocationRetrieveDelegate.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class CLLocation, LocationRetriever, MMTimer, NSString, RadarSearchSetting;

@interface RadarSearchMgr : MMService <MMService, LocationRetrieveDelegate, PBMessageObserverDelegate>
{
    BOOL _isStartReport;
    LocationRetriever *_locationRetrieve;
    MMTimer *_sendReportTimer;
    NSString *_ticket;
    RadarSearchSetting *_setting;
    CLLocation *_location;
}

- (void).cxx_destruct;
- (void)HandleRadarSearchResp:(id)arg1 Event:(unsigned long)arg2;
- (void)HandleVerifyUserResp:(id)arg1 Event:(unsigned long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)addFriend:(id)arg1;
- (void)dealloc;
- (id)getLocation;
- (id)getSettingPath;
- (id)init;
- (void)loadRadarSearchSetting;
@property(retain, nonatomic) CLLocation *location; // @synthesize location=_location;
- (void)onAddContactFail:(id)arg1;
- (void)onAddContactSuccessed:(id)arg1;
- (void)onRetrieveHeadingError:(int)arg1;
- (void)onRetrieveHeadingOK:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onServiceInit;
- (void)onVerifyOkFail:(id)arg1;
- (void)onVerifyOkSuccessed:(id)arg1;
- (void)reSendRadarReportRequest;
- (void)removeRadarReportRequest;
- (void)saveSetting;
- (void)sendRadarReportRequest:(BOOL)arg1;
@property(retain, nonatomic) RadarSearchSetting *setting; // @synthesize setting=_setting;
- (void)startRadarReport;
- (void)startResendRadarReportLogic;
- (void)startRetrieveLocation;
- (void)stopRadarReport;
- (void)stopResendRadarReportLogic;
- (void)stopRetrieveLocation;
- (void)verifyUsr:(id)arg1 withTicket:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

