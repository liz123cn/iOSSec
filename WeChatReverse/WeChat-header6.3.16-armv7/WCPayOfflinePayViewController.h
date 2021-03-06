//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"
#import "IdleTimerUtilExt.h"
#import "MMKernelExt.h"
#import "MMPatternLockLogicDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCMallAcrivityLoopPageScrollViewDataSourceDelegate.h"
#import "WCPayLogicMgrExt.h"
#import "WCPayNoticeBannerDelegate.h"
#import "WCPayOfflinePayCodeViewDelegate.h"
#import "WCPayPickerViewDelegate.h"

@class MMUIView, MMWebImageView, NSArray, NSDictionary, NSObject<OS_dispatch_queue>, NSString, RichTextView, UIAttachmentBehavior, UIButton, UIDynamicAnimator, WCPayOfflinePayCodeView, WCPayOfflineUpdatedTipsView, WCPayPickerView;

@interface WCPayOfflinePayViewController : WCPayBaseViewController <WCPayOfflinePayCodeViewDelegate, UIGestureRecognizerDelegate, MMKernelExt, MMPatternLockLogicDelegate, IdleTimerUtilExt, WCPayNoticeBannerDelegate, WCActionSheetDelegate, ILinkEventExt, UIAlertViewDelegate, WCMallAcrivityLoopPageScrollViewDataSourceDelegate, WCPayPickerViewDelegate, WCPayLogicMgrExt>
{
    id <WCPayOfflinePayViewControllerDelegate> m_delegate;
    BOOL m_bFreezeAlertShowed;
    BOOL m_bErrorAlertShowed;
    BOOL m_bReadAgreement;
    UIButton *footerButton;
    RichTextView *m_cardInfoLabel;
    WCPayOfflinePayCodeView *m_PayOfflinePayCodeView;
    int m_enCurrentOfflinePayCodeDisplayScene;
    float _oldBrightness;
    NSArray *_choices;
    WCPayPickerView *m_pickerView;
    WCPayOfflineUpdatedTipsView *_tipsView;
    WCPayOfflinePayCodeView *tempCodeView;
    MMWebImageView *_bankIcon;
    NSString *_cacheCode;
    NSObject<OS_dispatch_queue> *_cacheQueue;
    BOOL _isRefreshing;
    BOOL _triggeredGetToken;
    UIAttachmentBehavior *_attachment;
    MMUIView *_cardInfoView;
    NSDictionary *m_dicBanners;
    float bannerHeight;
    BOOL _isViewDidAppear;
    BOOL _isPatternLockShowing;
    int _entryScene;
    UIDynamicAnimator *_animator;
    unsigned long _patternLockLogicTag;
}

- (void).cxx_destruct;
- (void)OnGetBarCodeFromQRCodeResponse:(id)arg1 Error:(id)arg2;
- (void)OnOfflinePayTokenInfoUpdated:(BOOL)arg1;
- (void)OnQueryOfflinePayLimit:(id)arg1 fromCache:(BOOL)arg2 Error:(id)arg3;
- (void)OnShouldChangeCard:(id)arg1;
- (void)OnShouldChangePayCardError:(id)arg1 ErrorType:(unsigned long)arg2;
- (void)OnWCPayBaseRequestNoKnownError:(id)arg1 TenPayCmdType:(int)arg2;
- (void)Operate;
- (void)UpdateBarCodeImage;
- (void)UpdateQRCodeImage;
- (void)WCPayPickerViewDidChooseRow:(int)arg1 atSession:(int)arg2;
- (void)WCPayPickerViewDidChooseRowTitle:(id)arg1 atSessionTitle:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)adjustSubviewRects;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (float)angleOfView:(id)arg1;
@property(retain, nonatomic) UIDynamicAnimator *animator; // @synthesize animator=_animator;
- (id)bankLogoUrlStrFromType:(id)arg1;
- (void)banner:(id)arg1 clickWithUrl:(id)arg2;
- (void)changeCodeScene;
- (void)checkEndAndResetForDynamicWithPanGesture:(id)arg1;
- (void)clearOfflinePayAndPopWithoutAlert;
- (id)createPayCodeView;
- (id)currentCardInfoShouldUse;
- (void)dealloc;
@property(nonatomic) int entryScene; // @synthesize entryScene=_entryScene;
- (void)exitFullScreenIfNeedAnimation:(BOOL)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (id)getCodeWithBindSerial:(id)arg1;
- (id)getCreateOfflinePayView;
- (id)getEnteranceViewContoller;
- (id)getNoticeBanner;
- (id)getQRCodeView;
- (void)handlePan:(id)arg1;
- (void)handlePanEnd:(id)arg1;
- (void)handlePanRollback:(id)arg1;
- (void)handlePanRollbackWithDynamic:(id)arg1;
- (void)handlePanWithDynamic:(id)arg1;
- (void)increaseBrightnessIfNeed;
- (id)init;
@property(nonatomic) BOOL isPatternLockShowing; // @synthesize isPatternLockShowing=_isPatternLockShowing;
@property(nonatomic) BOOL isViewDidAppear; // @synthesize isViewDidAppear=_isViewDidAppear;
- (void)motionEnded:(int)arg1 withEvent:(id)arg2;
- (void)onApplicationWillEnterForeground:(id)arg1;
- (void)onChooseCardIndex:(int)arg1;
- (void)onChooseCardText:(id)arg1;
- (void)onClickedReadSupportBanks;
- (void)onCloseOfflinePay;
- (void)onIdleTimerUtilVoipQuit;
- (void)onKickQuit;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onMoreAction:(id)arg1;
- (void)onOffPayPauseAlertViewBtnClick:(id)arg1;
- (void)onPatternLockLogicNeedDismiss;
- (void)onPatternLockLogicOperateCancel;
- (void)onPatternLockLogicOperateSuccess;
- (void)onReadAgreement:(id)arg1;
- (void)onSettingAction:(id)arg1;
- (void)openFeaturePassword;
- (id)panGestureForCodeView;
@property(nonatomic) unsigned long patternLockLogicTag; // @synthesize patternLockLogicTag=_patternLockLogicTag;
- (void)preLoadTokensIfNeed;
- (BOOL)preViewControllerIsKindOf:(Class)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadNavigationBar;
- (void)reloadTableView;
- (void)setDelegate:(id)arg1;
- (void)setupCardInfoLabel;
- (void)setupTempCodeViewBelowCodeView;
- (void)setupWCPayLogo;
- (BOOL)showErrorAlertIfNeed;
- (float)topMarginOfTipView;
- (void)updateCodeImage;
- (void)updateCodeImageAndStartAutomaticUpdate;
- (void)updateCodeInNewWay;
- (void)updateCodeInNewWayWithAnimation;
- (void)updateCodeInNewWayWithTips:(BOOL)arg1;
- (BOOL)useTransparentNavibar;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)wcPayOfflinePayCodeViewAutoRefreshCountingFinished:(id)arg1;
- (BOOL)wcPayOfflinePayCodeViewCouldStartSuccessAnimation:(id)arg1;
- (void)wcPayOfflinePayCodeViewDidCompletedSuccessAnimation:(id)arg1;
- (void)wcPayOfflinePayCodeViewExitFullScreenAnimationFinished:(id)arg1;
- (void)willAppear;
- (void)willDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

