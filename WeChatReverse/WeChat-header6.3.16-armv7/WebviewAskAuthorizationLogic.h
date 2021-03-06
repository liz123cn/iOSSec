//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSMutableArray, NSString, WebviewAuthorizationCache, WebviewAuthorizationInfo;

@interface WebviewAskAuthorizationLogic : MMObject <PBMessageObserverDelegate, UIAlertViewDelegate>
{
    WebviewAuthorizationCache *_authCache;
    NSMutableArray *_needCheckQueue;
    WebviewAuthorizationInfo *_willSetScopeInfo;
    NSMutableArray *_willSetScopeList;
    NSString *_alertTitle;
    BOOL _isQueueHandling;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)askAuthInfo:(id)arg1;
- (void)askSvrAuthInfo:(id)arg1;
- (void)askUserAuthInfo:(id)arg1;
- (void)checkScopeAuthInfo;
- (void)dealloc;
- (id)getScopeListStrFromArray:(id)arg1;
- (id)init;
- (void)onCheckScopeReq:(id)arg1 scopeResp:(id)arg2 authInfo:(id)arg3;
- (void)onSetScopeReq:(id)arg1 scopeResp:(id)arg2;
- (void)setScopeAuthInfo:(id)arg1 scopeInfoList:(id)arg2;
- (unsigned long)structCGI:(id)arg1 withType:(unsigned long)arg2 withUserData:(id)arg3;
- (void)updateScopeInfoList:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

