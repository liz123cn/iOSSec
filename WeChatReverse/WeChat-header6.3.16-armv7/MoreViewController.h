//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTabBarBaseViewController.h"

#import "CSettingExt.h"
#import "EmoticonRecommendMgrExt.h"
#import "IHeadImageExt.h"
#import "ISettingExtChange.h"
#import "IWCCardPkgExt.h"
#import "MMAnimationTipViewDelegate.h"
#import "MMKernelExt.h"
#import "MMPatternLockLogicDelegate.h"
#import "MMPatternLockMgrExt.h"
#import "MessageObserverDelegate.h"
#import "MyFavoritesViewControllerDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCMallLogicMgrExt.h"
#import "WCPayLogicMgrExt.h"

@class MMAnimationTipView, MMTableViewInfo, MMTimer, MyFavoritesViewController, NSString, WCBizLoadingView;

@interface MoreViewController : MMTabBarBaseViewController <MMPatternLockMgrExt, MyFavoritesViewControllerDelegate, MMAnimationTipViewDelegate, ISettingExtChange, MessageObserverDelegate, IHeadImageExt, CSettingExt, WCPayLogicMgrExt, EmoticonRecommendMgrExt, MMKernelExt, WCMallLogicMgrExt, IWCCardPkgExt, WCActionSheetDelegate, MMPatternLockLogicDelegate>
{
    vector_bc4292e6 m_vecMesssageIdToListen;
    MMTableViewInfo *m_tableViewInfo;
    MyFavoritesViewController *m_favViewController;
    MMTimer *m_favCacheTimer;
    BOOL _bIsShareCardListShowSvrRedDot;
    BOOL _bIsEnterShareCardListFromOuterJump;
    unsigned long _patternLockLogicTag;
    WCBizLoadingView *_loadingView;
    MMAnimationTipView *_resultToastView;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)MessageReturn:(unsigned long)arg1 MessageInfo:(id)arg2 Event:(unsigned long)arg3;
- (void)OnEmoticonRecommendNewStateChanged:(BOOL)arg1;
- (void)OnStatusChangedOrderListCountChanged:(unsigned long)arg1;
- (void)OnWCMallActivityChanged;
- (void)OnWCMallShowStatusInMoreViewChanged;
- (void)ReloadWallet;
- (void)addFunctionSection;
- (void)addProfileSection;
- (void)addSettingSection;
- (void)addStoreSection;
@property(nonatomic) BOOL bIsEnterShareCardListFromOuterJump; // @synthesize bIsEnterShareCardListFromOuterJump=_bIsEnterShareCardListFromOuterJump;
@property(nonatomic) BOOL bIsShareCardListShowSvrRedDot; // @synthesize bIsShareCardListShowSvrRedDot=_bIsShareCardListShowSvrRedDot;
- (void)cardDeeplink;
- (void)checkDBAutoRecover;
- (void)checkReload;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)fadeShowEnd;
- (id)getEnteranceViewContoller;
- (id)getSettingHeadImage;
- (unsigned long)getTotalCount;
- (id)getVCWithDeepLinkName:(id)arg1;
- (id)init;
- (void)initDeepLinkConfig;
- (void)initLoadingView;
- (void)initMessageIdToListen;
- (void)initView;
- (BOOL)isNeedShowWCPay;
- (BOOL)isNeedShowWCPayInTabNew;
@property(retain, nonatomic) WCBizLoadingView *loadingView; // @synthesize loadingView=_loadingView;
- (void)makeProfileCell:(id)arg1;
- (void)makeWCCardView:(id)arg1;
- (void)makeWCCell:(id)arg1;
- (void)makeWCPayView:(id)arg1;
- (void)onCloseFavTimeOut;
- (void)onFavoritesClose;
- (void)onGetUpdateInfoOk;
- (void)onHeadImageChange:(id)arg1;
- (void)onPatternLockLogicOperateCancel;
- (void)onPatternLockLogicOperateSuccess;
- (void)onPatternLockSvrCheckStatusBack:(unsigned int)arg1;
- (void)onPatternLockSvrCheckStatusFail;
- (void)onSettingChanged:(int)arg1;
- (void)onSettingExtChanged:(int)arg1;
- (void)onShowMyQrCode;
- (void)onWCCardLayoutRedDotChanged;
- (void)onWCCardMessageUnreadCountChanged:(id)arg1;
- (void)onWCCardTips;
- (void)openWCPayView;
@property(nonatomic) unsigned long patternLockLogicTag; // @synthesize patternLockLogicTag=_patternLockLogicTag;
- (void)pluginsChanged:(id)arg1;
- (void)reloadMoreView;
@property(retain, nonatomic) MMAnimationTipView *resultToastView; // @synthesize resultToastView=_resultToastView;
- (void)showAppleWatchView;
- (void)showChangeLanguage;
- (void)showEmoticonStoreView;
- (void)showFavoriteView;
- (void)showHtml5PayView;
- (void)showKitchen;
- (void)showMyQRCodeInProfileView;
- (void)showMyWCView;
- (void)showPrivateSetting;
- (void)showProfileView;
- (void)showSettingView;
- (void)showShareCardView;
- (void)showShareCardViewInternal;
- (void)showToastTipsViewWithText:(id)arg1 isSuccess:(BOOL)arg2;
- (void)showWCCardView;
- (void)showWCPayView;
- (void)startLoading;
- (void)stopLoading;
- (void)updateHead:(id)arg1;
- (void)updateTabBarBadge;
- (void)updateViewWhenSelectTab:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)willAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
