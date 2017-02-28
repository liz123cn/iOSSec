//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMConfigMgrExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableDictionary, NSString;

@interface TemplateMsgRecvMgr : MMService <MMService, PBMessageObserverDelegate, MMConfigMgrExt>
{
    NSMutableDictionary *_dictTemplateMsgRecvState;
    NSMutableDictionary *_dictIdListOfUser;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)dealloc;
- (void)getRecvState:(id)arg1;
- (id)getRecvStateArrayByUsername:(id)arg1;
- (void)getRecvStateByUsername:(id)arg1;
- (id)init;
- (void)onGetRecvState:(id)arg1;
- (void)onSetRecvState:(id)arg1;
- (void)setRecvState:(id)arg1 toUser:(id)arg2;
- (void)setRecvState:(unsigned long)arg1 toUser:(id)arg2 withTemplateId:(id)arg3;
- (BOOL)shouldShowBlockButtonForMsg:(id)arg1;
- (BOOL)shouldShowEntryForUser:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

