//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSString;

@interface POILocationDisplayMgr : MMService <PBMessageObserverDelegate, MMService>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)dealloc;
- (int)getPOIDisplayNameWithLocation:(id)arg1 Scene:(int)arg2 SrcDisplayName:(id)arg3 extraInfo:(id)arg4;
- (void)handleGetPOICityResponse:(id)arg1;
- (void)logGoogleAddressResult:(id)arg1 ForLocation:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

