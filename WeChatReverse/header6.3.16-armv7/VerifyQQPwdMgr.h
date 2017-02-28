//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ICheckQQExt.h"
#import "MMService.h"
#import "PasswordLogicDelegate.h"

@class NSString, PasswordLogic;

@interface VerifyQQPwdMgr : MMService <MMService, PasswordLogicDelegate, ICheckQQExt>
{
    unsigned long long m_lastCanOldWTBufTime;
    PasswordLogic *m_pswLogic;
}

- (void).cxx_destruct;
- (void)OnCheckQQ;
- (void)dealloc;
- (id)init;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (BOOL)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)onServiceTerminate;
- (void)passwordLogicCancel:(id)arg1;
- (void)passwordLogicPause:(id)arg1;
- (void)passwordLogicStart:(id)arg1;
- (void)regExt;
- (void)unknownFail:(id)arg1;
- (void)unregExt;
- (void)verifyPasswordFail:(id)arg1;
- (void)verifyPasswordOK:(id)arg1 logic:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
