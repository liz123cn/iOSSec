//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "LocationRetrieveDelegate.h"
#import "PBMessageObserverDelegate.h"

@class CContact, LocationRetriever, NSDate, NSString;

@interface BrandServiceContinueLocationReportLogic : MMObject <PBMessageObserverDelegate, LocationRetrieveDelegate>
{
    unsigned long m_eventID;
    LocationRetriever *m_locationRetriever;
    CContact *m_contact;
    NSDate *m_lastReportTime;
    BOOL m_hadReported;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)allowReportLocation;
- (void)cancelRetrieveLocationIfOnlyReportOnce;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(retain, nonatomic) NSDate *m_lastReportTime; // @synthesize m_lastReportTime;
@property(retain, nonatomic) LocationRetriever *m_locationRetriever; // @synthesize m_locationRetriever;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)reportLocationWithLocation:(id)arg1 ErrorCode:(int)arg2;
- (void)startReportLocationForContact:(id)arg1 HasSetLocation:(BOOL)arg2;
- (void)stopReportLocation;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

