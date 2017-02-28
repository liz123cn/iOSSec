//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseControlLogic.h"

#import "IDCHostMgrExt.h"
#import "PBMessageObserverDelegate.h"
#import "WCAccountBindPhoneSetPrivateViewControllerDelegate.h"
#import "WCAccountFillPhoneViewControllerDelegate.h"
#import "WCAccountPhoneVerifyViewControllerDelegate.h"
#import "WCAccountVoiceVerifyViewControllerDelegate.h"

@class NSString, WCAccountControlData;

@interface WCAccountBindPhoneControlLogic : WCBaseControlLogic <WCAccountFillPhoneViewControllerDelegate, WCAccountVoiceVerifyViewControllerDelegate, WCAccountPhoneVerifyViewControllerDelegate, WCAccountBindPhoneSetPrivateViewControllerDelegate, PBMessageObserverDelegate, IDCHostMgrExt>
{
    BOOL m_bAgreementMobileCanBeFound;
    BOOL m_bAgreementPushFriendToMe;
    BOOL m_bChange;
    NSString *m_nsOldPhone;
    WCAccountControlData *m_data;
    id <WCAccountBindPhoneControlLogicDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)BindMobileAgain:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)bindPhoneReturn:(id)arg1;
- (void)cancelAllEvent;
- (BOOL)checkVerifyCode:(id)arg1;
- (void)dealloc;
- (id)getFullPhoneNum;
- (BOOL)getVerifyCodeReady;
- (BOOL)getVoideVerifyCodeReady:(id)arg1;
- (id)initWithData:(id)arg1;
- (BOOL)isFromChange;
- (void)onAlertCancel;
- (void)onFillPhoneBack;
- (void)onFillPhoneBindAgreeMobileCanBeFound:(BOOL)arg1;
- (void)onFillPhoneNext:(id)arg1 phoneNumber:(id)arg2;
- (void)onFillPhonePushFriendToMe:(BOOL)arg1;
- (void)onFillPhoneSetPrivate;
- (void)onFillPhoneSetPrivateDone;
- (BOOL)onHandleError:(id)arg1;
- (void)onPhoneVerifyAgain;
- (void)onPhoneVerifyBack;
- (void)onPhoneVerifyNext:(id)arg1;
- (void)onPhoneVerifyVoice;
- (void)onSyncAddressBook;
- (void)onVoiceVerifyBack;
- (void)onVoiceVerifyGetVerifyCode:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setScene:(unsigned long)arg1;
- (void)startChangelogic:(id)arg1;
- (void)startLogic;
- (void)startlogic:(id)arg1;
- (void)startlogicFromServerControl;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

