//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "LocationRetrieveDelegate.h"
#import "PBMessageObserverDelegate.h"

@class CLLocation, LocationRetriever, NSMutableArray, NSString, ShakeGetResponse, ShakeReportResponse;

@interface ShakePeopleLogicController : MMObject <PBMessageObserverDelegate, LocationRetrieveDelegate>
{
    unsigned long m_uiEventID;
    unsigned long m_uiTryCount;
    double m_dbLastReportTime;
    id <ShakeLogicProxyDelegate> m_delegate;
    LocationRetriever *m_locationRetrieve;
    BOOL m_isTriggeredShakeReport;
    NSMutableArray *m_eventIDsToListen;
    ShakeReportResponse *m_reportResponse;
    ShakeGetResponse *m_getResponse;
    BOOL m_isTaskStoped;
    CLLocation *m_location;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)SetShakeList:(id)arg1 andScene:(unsigned long)arg2;
- (void)addToEventIDsToListen:(int)arg1;
- (void)createShakeGetEvent;
- (void)createShakeReportEvent;
- (void)dealloc;
- (void)doShakeGet;
- (id)getMsgForState:(unsigned long)arg1;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isInEventIDsToListen:(int)arg1;
- (BOOL)isShakeStarted;
- (BOOL)isShowBannerView;
@property(retain, nonatomic) NSMutableArray *m_eventIDsToListen; // @synthesize m_eventIDsToListen;
@property(retain, nonatomic) ShakeGetResponse *m_getResponse; // @synthesize m_getResponse;
@property(nonatomic) BOOL m_isTaskStoped; // @synthesize m_isTaskStoped;
@property(nonatomic) BOOL m_isTriggeredShakeReport; // @synthesize m_isTriggeredShakeReport;
@property(retain, nonatomic) CLLocation *m_location; // @synthesize m_location;
@property(retain, nonatomic) LocationRetriever *m_locationRetrieve; // @synthesize m_locationRetrieve;
@property(retain, nonatomic) ShakeReportResponse *m_reportResponse; // @synthesize m_reportResponse;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)processGetResponse;
- (void)processReportResponse;
- (void)removeFromEventIDsToListen:(int)arg1;
- (void)shakeReport;
- (void)shakeReset;
- (void)shakeStop;
- (void)shakeTerminate;
- (void)updateShakeLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

