//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayPayPwdViewControllerDelegate.h"

@class NSString;

@interface WCPayModifyPayPwdLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate>
{
}

- (void)BackToRootView;
- (void)OnAlertGiveUpLogic;
- (void)OnModifyWCPayPassword:(id)arg1 NewWCPayPassword:(id)arg2 Error:(id)arg3;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)SetPayPwdNext:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)showGiveUpLogicAlert;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

