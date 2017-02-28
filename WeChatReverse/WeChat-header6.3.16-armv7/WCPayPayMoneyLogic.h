//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IWCPayControlLogicExt.h"
#import "WCBaseControlMgrExt.h"
#import "WCPayAutoDeductSettingViewControllerDelegate.h"
#import "WCPayAvaliablePayCardListViewDelegate.h"
#import "WCPayBalanceFetchMoneyViewControllerDelegate.h"
#import "WCPayBalanceSaveMoneyViewControllerDelegate.h"
#import "WCPayBindedCardListViewControllerDelegate.h"
#import "WCPayCouponsListViewDelegate.h"
#import "WCPayFillCardInfoViewControllerDelegate.h"
#import "WCPayFillCardNumberViewControllerDelegate.h"
#import "WCPayOrderDetailViewControllerDelegate.h"
#import "WCPayOrderPayConfirmViewDelegate.h"
#import "WCPayOverseasCarTipDelegate.h"
#import "WCPayPaidOrderDetailViewControllerDelegate.h"
#import "WCPayPayPwdViewControllerDelegate.h"
#import "WCPayResetBalanceTelephoneViewControllerDelegate.h"
#import "WCPayResetBindedCardInfoViewControllerDelegate.h"
#import "WCPayResetPhoneViewViewControllerDelegate.h"
#import "WCPaySpecifySelectePayCardListViewDelegate.h"
#import "WCPayTranferMoneyPaidSuccessViewControllerDelegate.h"
#import "WCPayVerifyPayCardViewControllerDelegate.h"

@class ABTestItem, NSString, UIView, WCPayAddPayCardLogic, WCPayOverseasCardTipView;

@interface WCPayPayMoneyLogic : WCPayControlLogic <WCPayFillCardInfoViewControllerDelegate, WCPayFillCardNumberViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, WCPayOrderDetailViewControllerDelegate, WCPayPaidOrderDetailViewControllerDelegate, WCPayResetPhoneViewViewControllerDelegate, WCPayResetBindedCardInfoViewControllerDelegate, WCPayBindedCardListViewControllerDelegate, WCPayResetBalanceTelephoneViewControllerDelegate, WCPayOrderPayConfirmViewDelegate, WCPayOverseasCarTipDelegate, WCPayBalanceSaveMoneyViewControllerDelegate, WCPayBalanceFetchMoneyViewControllerDelegate, WCPayAvaliablePayCardListViewDelegate, WCPayTranferMoneyPaidSuccessViewControllerDelegate, WCPayCouponsListViewDelegate, WCPaySpecifySelectePayCardListViewDelegate, WCBaseControlMgrExt, IWCPayControlLogicExt, WCPayAutoDeductSettingViewControllerDelegate>
{
    id <WCPayPayMoneyLogicDelegate> m_payMoneyLogicDelegate;
    WCPayOverseasCardTipView *m_overseasCardTipView;
    WCPayAddPayCardLogic *m_oWCPayAddPayCardLogic;
    BOOL m_bUsingTouchIDAuth;
    BOOL m_bResetBalanceTeling;
    ABTestItem *_payABTestItem;
    BOOL m_bRetryPWD;
    UIView *oSubView;
    BOOL m_bNeedPreShowOrderDetailToGetPayCardList;
    BOOL m_bNeedForceDissmissSuccessViewNotAnimation;
    BOOL m_bPresentSuccessViewController;
    BOOL m_bNotShowSuccessViewController;
    Class m_oStartedClass;
}

- (void).cxx_destruct;
- (void)FillCardInfoCancel;
- (void)FillCardInfoNext:(id)arg1;
- (void)FillCardInfoReadAgreement;
- (void)FillCardNumberCancel:(BOOL)arg1;
- (void)FillCardNumberConfirmWithImage:(id)arg1 cardNumber:(id)arg2 data:(id)arg3;
- (void)FillCardNumberNext:(id)arg1;
- (void)FillCardNumberShowedAllFavorInfo;
- (id)GetWCPaySetWCPayPasswordStruct:(id)arg1;
- (BOOL)NeedShowServiceAppInfo;
- (void)OnAlertGiveUpBind;
- (void)OnAlertResetPhoneNumber;
- (void)OnAuthenticationPay:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)OnAuthenticationPayVerifyBind:(id)arg1;
- (void)OnAuthenticationPayVerifySMS:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)OnAuthenticationResetBalanceTelPay:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)OnAuthenticationResetBalanceTelPayVerifySMS:(id)arg1 PayStatus:(id)arg2 Error:(id)arg3;
- (void)OnAutoDeductSettingCancel;
- (void)OnBindedCardListBack;
- (void)OnBindedCardListNewCardClicked;
- (void)OnBindedCardListNext:(id)arg1;
- (void)OnCVVAndValidError:(id)arg1;
- (void)OnCVVError:(id)arg1;
- (void)OnContinueResetBalanceTel;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)OnFooterButtonClick:(id)arg1;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetBindingCardBin:(id)arg1 AvailableBank:(id)arg2 Error:(id)arg3;
- (void)OnGetOrderDetailInfo:(id)arg1 BindQueryInfo:(id)arg2 Error:(id)arg3;
- (void)OnGetOrderDetailInfoAfterPaidError:(id)arg1 Error:(id)arg2;
- (void)OnHandleSafariJumpedLogic;
- (void)OnHandleSpecialPayError:(id)arg1 ErrorType:(unsigned long)arg2;
- (void)OnHandleVerifiedSMSString:(id)arg1;
- (void)OnNewCardToPay;
- (void)OnOrderPayChangeConpons;
- (void)OnPayMoneyPayRetry;
- (void)OnPayPasswordError:(id)arg1 ErrorCount:(int)arg2 LockTotalCount:(unsigned long)arg3;
- (void)OnPhoneNumberError:(id)arg1;
- (void)OnQueryOrderWhenPaidError:(id)arg1;
- (void)OnResetBindedCardInfoCancel;
- (void)OnResetBindedCardInfoNext:(id)arg1;
- (void)OnResetNewTelToResetBalanceTel;
- (void)OnResetPhoneCancel;
- (void)OnResetPhoneNext:(id)arg1;
- (void)OnRetryPayMoneyFromPwdError;
- (void)OnSelectOtherCardToPay;
- (void)OnSetWCPayPasswordInPay:(id)arg1 Error:(id)arg2;
- (void)OnValidError:(id)arg1;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)OnWCPayAvaliablePayCardListViewAddPayCard;
- (void)OnWCPayAvaliablePayCardListViewBack;
- (void)OnWCPayAvaliablePayCardListViewCancel;
- (void)OnWCPayAvaliablePayCardListViewNext:(id)arg1;
- (void)OnWCPayCouponsListViewBack;
- (void)OnWCPayCouponsListViewNext:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerRightActionBack:(id)arg1;
- (void)OnWCPayPaidOrderDetailViewControllerShowOpenTouchIDConfirmViewIfNeed;
- (void)OnWCPaySpecifySelectePayCardListViewBack;
- (void)OnWCPaySpecifySelectePayCardListViewBackAddCard;
- (void)OnWCPaySpecifySelectePayCardListViewNext:(id)arg1;
- (void)OrderDetailAdd:(id)arg1;
- (void)OrderDetailAddOrderCard:(id)arg1;
- (void)OrderDetailBack;
- (void)OrderDetailClickCoupousInfo;
- (void)OrderDetailPay:(id)arg1;
- (void)PayPwdBack;
- (void)PayPwdRightActionBack;
- (void)QueryOrderDetailAfterPaidError;
- (void)RepeatInputPayPwd:(id)arg1;
- (void)SetPayPwdNext:(id)arg1;
- (void)VerifyPayCardAgain:(id)arg1;
- (void)VerifyPayCardBack;
- (void)VerifyPayCardModifyPhone:(id)arg1;
- (void)VerifyPayCardNext:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)WCPayBalanceFetchMoneyViewControllerBack:(BOOL)arg1;
- (void)WCPayBalanceSaveMoneyViewControllerBack:(BOOL)arg1;
- (void)WCPayResetBalanceTelephoneViewControllerBack;
- (void)WCPayResetBalanceTelephoneViewControllerNext:(id)arg1;
- (void)WCPayTranferMoneyPaidSuccessViewControllerBack:(BOOL)arg1;
- (void)WCPayTranferMoneyPaidSuccessViewControllerViewDidAppear;
- (BOOL)checkBankAvailable:(id)arg1;
- (BOOL)checkHandlePrepayErrorPath;
- (void)dealloc;
- (void)disabelTouchIDAuthForCurrentOrder;
- (void)doAuthenticationPayWithPwd:(id)arg1 isTouchIDAuth:(BOOL)arg2;
- (id)favDesc:(id)arg1;
- (int)getABTestType;
- (id)getTouchIDReasonFromData:(id)arg1;
- (id)getTransactionId;
- (id)getVerifyBindStruct;
- (id)getWCPayAuthenticationPay:(id)arg1;
- (id)getWCPayAuthenticationPayVerifySMSStruct:(id)arg1;
- (id)getWCPayAuthenticationResetBalanceTelPay:(id)arg1;
- (id)getWCPayAuthenticationResetBalanceTelPayVerifySMSStruct:(id)arg1;
- (void)gotoRootViewControllerIfNotInDetailView:(BOOL)arg1;
- (id)init;
- (id)initWithData:(id)arg1;
- (BOOL)isLogicJumpedToSafari;
@property(nonatomic) BOOL m_bNeedForceDissmissSuccessViewNotAnimation; // @synthesize m_bNeedForceDissmissSuccessViewNotAnimation;
@property(nonatomic) BOOL m_bNeedPreShowOrderDetailToGetPayCardList; // @synthesize m_bNeedPreShowOrderDetailToGetPayCardList;
@property(nonatomic) BOOL m_bNotShowSuccessViewController; // @synthesize m_bNotShowSuccessViewController;
@property(nonatomic) BOOL m_bPresentSuccessViewController; // @synthesize m_bPresentSuccessViewController;
@property(retain, nonatomic) Class m_oStartedClass; // @synthesize m_oStartedClass;
@property(nonatomic) __weak id <WCPayPayMoneyLogicDelegate> m_payMoneyLogicDelegate; // @synthesize m_payMoneyLogicDelegate;
- (void)mergeBalanceMoneyContorlOrderDetail:(id)arg1;
- (void)mergeOrderDetail:(id)arg1;
- (void)mergePaymentOrderDetail:(id)arg1;
- (BOOL)needShowOverseasCardProtocalView;
- (void)onActionSheetCancelTouchId;
- (void)onActionSheetChangingOtherCards;
- (void)onActionSheetEndPay;
- (void)onActionSheetUsingPwdAuth;
- (void)onAgree:(BOOL)arg1;
- (void)onAlertResetCVV;
- (void)onAlertResetCVVAndValidDate;
- (void)onAlertResetValidDate;
- (void)onDisagree;
- (void)onErrorAlertViewDismiss:(id)arg1;
- (void)onOpenTouchIDAuth;
- (void)onOrderPayChangeCard;
- (void)onOrderPayConfirmViewCancel;
- (void)onOrderPayConfirmViewGotoPasswordAuth;
- (void)onOrderPayConfirmViewGotoTouchIDAuth;
- (void)onOrderPayConfirmViewPay:(id)arg1;
- (void)onOrderPayConfirmViewPerformTouchID;
- (void)onPushWebView:(id)arg1;
- (void)onTouhcAuthConfirmAlertCancel:(id)arg1;
- (void)onTouhcAuthConfirmAlertOK:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned long)arg1;
- (void)orderDetailPay:(id)arg1 checkTouchID:(BOOL)arg2;
- (void)performTouchID;
- (void)preShowOrderPaySuccess;
- (void)showConfirmTouchIDOrConfirmViewWithData:(id)arg1;
- (void)showGiveUpBindAlert;
- (void)showOpenTouchIDConfirmIfNeed;
- (void)showOrderPaySuccess;
- (void)showResetBindedCardInfoWithCVV:(BOOL)arg1 ValidDate:(BOOL)arg2;
- (void)showSafariWithData:(id)arg1;
- (void)showTouchIDAuthView:(id)arg1;
- (void)startBindCardToPay:(id)arg1;
- (void)startBindCardToSafariPay:(id)arg1;
- (void)startBindCardToVerifiedUser:(id)arg1;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
