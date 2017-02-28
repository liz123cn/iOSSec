//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "IMMFacebookMgrExt.h"
#import "WCAccountBackDeviceFirstViewControllerDelegate.h"
#import "WCAccountLoginFirstUserViewControllerDelegate.h"
#import "WCAccountLoginFirstViewControllerDelegate.h"
#import "WCAccountLoginLastUserViewControllerDelegate.h"
#import "WCAccountManualAuthControlLogicDelegate.h"

@class NSString, VoicePrintHandler, WCAccountManualAuthControlLogic;

@interface WCAccountLoginControlLogic : WCAccountBaseControlLogic <IMMFacebookMgrExt, WCAccountLoginFirstViewControllerDelegate, WCAccountLoginFirstUserViewControllerDelegate, WCAccountLoginLastUserViewControllerDelegate, WCAccountManualAuthControlLogicDelegate, WCAccountBackDeviceFirstViewControllerDelegate>
{
    BOOL m_bFromLogout;
    BOOL m_bNeverAutoStop;
    unsigned long m_uiPwdErrCount;
    WCAccountBaseControlLogic *m_subFBLogic;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    VoicePrintHandler *m_VPHandler;
}

- (void).cxx_destruct;
- (void)OnLoginVerifyOverLimit;
- (void)OnLoginVerifySucessWithRandomAuthKey:(id)arg1 andTicket:(id)arg2;
- (void)checkStopLogic;
- (id)getArchive;
- (void)loginAccount:(BOOL)arg1;
- (void)onFacebookConnect;
- (void)onFirstUserBack;
- (void)onFirstUserLoginUserName:(id)arg1 Pwd:(id)arg2;
- (void)onFirstUserProblem:(id)arg1;
- (void)onFirstViewLogin;
- (void)onFirstViewRegester;
- (void)onGoToSecurityCenter:(unsigned long)arg1;
- (void)onIpadOneKeyLoginByQQ;
- (void)onLastUserChangeAccount:(id)arg1;
- (void)onLastUserChangeAccountWithView:(id)arg1;
- (void)onLastUserGoToHelpCenter:(id)arg1;
- (void)onLastUserGoToSecurityCenter:(id)arg1;
- (void)onLastUserLoginByQRCode;
- (void)onLastUserLoginFromePhone:(id)arg1;
- (void)onLastUserLoginUserName:(id)arg1 Pwd:(id)arg2;
- (void)onLastUserProblem:(id)arg1;
- (void)onLastUserRegister;
- (void)onLastUserVoicePrintLogin:(id)arg1;
- (void)onLoginByPhone;
- (void)onLoginByPhoneFromQQ;
- (void)onLoginByQQ;
- (void)onLoginByQRCode;
- (void)onLoginByQRCodeWithOneClickDisconnect;
- (BOOL)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned int)arg1 response:(id)arg2;
- (void)onUseBothDevice;
- (void)onUseIPadOnly;
- (void)onWCBaseLogicDidStop:(unsigned long)arg1;
- (void)pause;
- (BOOL)recoverFromArchive:(id)arg1;
- (void)resetPwdByPhone;
- (void)resetPwdByQQ;
- (id)setRootviewController:(Class)arg1 withData:(id)arg2;
- (id)setRootviewController:(Class)arg1 withData:(id)arg2 shouldHideNavBar:(BOOL)arg3;
- (void)startIPadLoginLogic;
- (void)startIPhoneLoginLogic;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

