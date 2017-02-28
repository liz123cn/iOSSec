//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayCreditPayAnswerQuestionViewControllerDelegate.h"
#import "WCPayCreditPayIncreaseLimitSucViewControllerDelegate.h"
#import "WCPayPayPwdViewControllerDelegate.h"

@class NSString;

@interface WCPayCreditPayIncreaseLimitLogic : WCPayControlLogic <WCPayCreditPayAnswerQuestionViewControllerDelegate, WCPayCreditPayIncreaseLimitSucViewControllerDelegate, WCPayPayPwdViewControllerDelegate>
{
    BOOL m_bNeedQueryCreditInfo;
}

- (void)OnCommitWXCreditAnswer:(id)arg1 Error:(id)arg2;
- (void)OnPayPasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned long)arg3;
- (void)OnQueryWXCreditCardInfo:(id)arg1 Error:(id)arg2;
- (void)OnQueryWXCreditQuestion:(id)arg1 Error:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)WCPayCreditPayAnswerQuestionViewControllerBack;
- (void)WCPayCreditPayAnswerQuestionViewControllerNext:(id)arg1;
- (void)WCPayCreditPayIncreaseLimitSucViewControllerBack;
- (id)initWithData:(id)arg1;
@property(nonatomic) BOOL m_bNeedQueryCreditInfo; // @synthesize m_bNeedQueryCreditInfo;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

