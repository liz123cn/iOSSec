//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseControlLogic.h"

#import "IRsaCertMgrExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "MMUIViewControllerDelegate.h"
#import "MMWebViewDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "WCAccountGraphicVerifyControlLogicDelegate.h"
#import "WCAccountManualAuthControlLogicDelegate.h"
#import "WCAccountSafeDeviceControlLogicDelegate.h"

@class CountDownTipViewController, MMUIWindow, NSString, WCAccountControlData, WCAccountGraphicVerifyControlLogic, WCAccountManualAuthControlLogic, WCAccountSafeDeviceControlLogic;

@interface WCAccountAutoLoginControlLogic : WCBaseControlLogic <WCAccountGraphicVerifyControlLogicDelegate, WCAccountSafeDeviceControlLogicDelegate, MMWebViewDelegate, MMTipsViewControllerDelegate, PBMessageObserverDelegate, IRsaCertMgrExt, WCAccountManualAuthControlLogicDelegate, MMUIViewControllerDelegate>
{
    WCAccountControlData *m_data;
    MMUIWindow *m_window;
    WCAccountSafeDeviceControlLogic *m_safeDeviceLogic;
    WCAccountGraphicVerifyControlLogic *m_graphicVerifyLogic;
    WCAccountManualAuthControlLogic *m_manualAuthLogic;
    id <WCAccountAutoLoginControlLogicDelegate> m_delegate;
    unsigned long m_idc_redirect_count;
    unsigned long m_ecdh_error_count;
    unsigned long m_cert_error_count;
    BOOL m_bSessionKeyNeedECDHDecrypt;
    BOOL m_bStopCloseAcct;
    CountDownTipViewController *m_tipView;
    unsigned long long m_ui64BeginTime;
    BOOL m_bHasKickout;
}

- (void).cxx_destruct;
- (void)HandleMessageReturn:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)OnRsaCertCGIAgain;
- (void)OnRsaCertFail;
- (void)closeFirstView;
- (void)closeMainFrame;
- (void)dealloc;
- (id)genAutoAuthRequest;
- (id)genAutoAuthRequest:(BOOL)arg1;
- (id)getViewController;
- (void)handleAuthResponse:(id)arg1;
- (id)init;
- (void)kickOut;
- (void)onAlertErrorAction:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(int)arg2;
- (void)onErrorAction:(id)arg1;
- (void)onGraphicVerifyControlLogicCancel;
- (id)onGraphicVerifyControlLogicGetAuthRequest:(BOOL)arg1;
- (void)onGraphicVerifyControlLogicReturn:(id)arg1;
- (BOOL)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned int)arg1 response:(id)arg2;
- (void)onSafeDeviceControlLogicCancel;
- (void)onSafeDeviceControlLogicReturnOK;
- (void)onStopCloseAcct;
- (void)openFirstView;
- (void)setDelegate:(id)arg1;
- (void)showTipView;
- (void)showTipWithTitle:(id)arg1 message:(id)arg2 btnTitle:(id)arg3 countDown:(unsigned long)arg4 errorInfo:(id)arg5;
- (BOOL)startAutoAuth:(id)arg1;
- (void)startLogic;
- (void)stopLogic:(unsigned int)arg1;
- (void)stopLogicLoginRetry;
- (void)stopLogicWithKickOut;
- (void)webViewReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

