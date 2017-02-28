//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IRsaCertMgrExt.h"
#import "PBMessageObserverDelegate.h"

@class NSString;

@interface VPGetResourceCgi : MMObject <PBMessageObserverDelegate, IRsaCertMgrExt>
{
    unsigned long _curScene;
    id <VoicePrintGetResourceDelegate> _m_delegate;
}

- (void).cxx_destruct;
- (void)HandleReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)OnError:(int)arg1;
- (void)OnResult:(id)arg1 withScene:(unsigned long)arg2;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)dealloc;
- (void)getResourceRsaWithTicket:(id)arg1;
- (void)getResourceWithScence:(unsigned long)arg1;
- (id)init;
@property(nonatomic) __weak id <VoicePrintGetResourceDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

