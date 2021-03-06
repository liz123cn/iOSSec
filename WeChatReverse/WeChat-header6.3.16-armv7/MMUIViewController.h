//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "IUiUtilExt.h"
#import "MMUIViewControllerDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class MMDelegateProxy<UIGestureRecognizerDelegate>, MMLoadingView, MMTitleView, MMUINavigationBar, NSMutableArray, NSMutableDictionary, NSString, UIBarButtonItem, UIColor, UILabel, UINavigationController, UIResponder, UIView;

@interface MMUIViewController : UIViewController <IUiUtilExt, MMUIViewControllerDelegate, UIGestureRecognizerDelegate>
{
    BOOL m_isPopByClickingURL;
    MMLoadingView *m_loadingViewX;
    unsigned long m_uiVcType;
    BOOL m_bKeyboardShowForGesture;
    UILabel *m_newsTitleRecordLabel;
    NSMutableArray *m_fullScreenViews;
    BOOL _isSupportWXGesture;
    BOOL m_bAnimated;
    BOOL m_bIsBeingPoped;
    BOOL m_bInteractivePopEnabled;
    BOOL m_bDisableAdjustInsetAndOffset;
    float lastScreenWidth;
    UINavigationController *m_navigationController;
    MMTitleView *m_baseTitleView;
    NSMutableDictionary *m_dicDeepLink;
    NSMutableDictionary *m_dicContentInsetAutolayout;
    NSMutableDictionary *m_dicTopOffsetAutolayout;
    NSMutableArray *m_arrEndUserOpInfo;
    MMDelegateProxy<UIGestureRecognizerDelegate> *m_interactivePopGestureRecognizerDelegate;
    UIResponder *previousResponder;
    UIBarButtonItem *m_leftBarBtnItem;
    UIBarButtonItem *m_rightBarBtnItem;
    UIColor *m_titleColor;
    MMUINavigationBar *fakeNaviView;
    BOOL _m_bAnimating;
    BOOL _m_bStopPopWhenDeleteContact;
    UIView *bottomView;
    UIViewController *_presentingModalViewController;
    UIViewController *_presentedModalViewController;
}

- (void).cxx_destruct;
- (void)AddViewToFullScreenViewList:(id)arg1;
- (void)ReLayoutFullScreenViews;
- (void)RemoveFullScreenViewList;
- (void)addFakeNaviView;
- (void)adjustSubviewRects;
- (void)adjustTableViewInset:(id)arg1;
- (void)adjustTableViewRect;
- (void)adjustView;
- (void)adjustViewAndNavBarRect;
- (void)appendEndOpInfo:(id)arg1;
- (void)beginAppearanceTransition:(BOOL)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView;
- (void)dealloc;
- (void)didAppear;
- (void)didBeginEditing:(id)arg1;
- (void)didDisshow;
- (void)didEndEditing:(id)arg1;
- (void)didMoveToParentViewController:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)disMissSelf;
- (void)fixNavigationBar;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (float)getContentViewHeight;
- (float)getContentViewY;
- (float)getContentViewYforTranslucentNaviBar;
- (float)getLeftBarButtonWidth;
- (id)getNavigationLeftButton:(id)arg1;
- (id)getNavigationRightButton:(id)arg1;
- (float)getRightBarButtonWidth;
- (float)getSearchBarSearchingY;
- (id)getVCWithDeepLinkName:(id)arg1;
- (id)getViewController;
- (float)getVisibleHeight;
- (float)getVisibleHeightOri:(int)arg1;
- (void)handleUrl:(id)arg1 DisableFirstGetA8Key:(BOOL)arg2 extraInfo:(id)arg3;
- (id)init;
- (void)initDeepLinkConfig;
- (BOOL)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (void)internalAddFakeNaviView:(id)arg1;
- (BOOL)isPresentedIn;
- (BOOL)isPushedIn;
- (BOOL)isSubviewResponder:(id)arg1;
@property(nonatomic) BOOL isSupportWXGesture; // @synthesize isSupportWXGesture=_isSupportWXGesture;
- (BOOL)isSvrErrorTipForbidden;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
@property(retain, nonatomic) MMLoadingView *loadingViewX; // @synthesize loadingViewX=m_loadingViewX;
@property(retain, nonatomic) NSMutableArray *m_arrEndUserOpInfo; // @synthesize m_arrEndUserOpInfo;
@property(nonatomic) BOOL m_bAnimated; // @synthesize m_bAnimated;
@property(nonatomic) BOOL m_bAnimating; // @synthesize m_bAnimating=_m_bAnimating;
@property(nonatomic) BOOL m_bDisableAdjustInsetAndOffset; // @synthesize m_bDisableAdjustInsetAndOffset;
@property(nonatomic) BOOL m_bInteractivePopEnabled; // @synthesize m_bInteractivePopEnabled;
@property(nonatomic) BOOL m_bIsBeingPoped; // @synthesize m_bIsBeingPoped;
@property(nonatomic) BOOL m_bStopPopWhenDeleteContact; // @synthesize m_bStopPopWhenDeleteContact=_m_bStopPopWhenDeleteContact;
@property(retain, nonatomic) NSMutableArray *m_fullScreenViews; // @synthesize m_fullScreenViews;
@property(retain, nonatomic) UILabel *m_newsTitleRecordLabel; // @synthesize m_newsTitleRecordLabel;
@property(nonatomic) unsigned long m_uiVcType; // @synthesize m_uiVcType;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onMainWindowFrameChanged;
- (void)onTaskBarHiddenChanged:(BOOL)arg1 withAnimation:(int)arg2;
- (void)onTopBarFrameChanged;
- (void)onTopBarHiddenChanged:(int)arg1;
- (void)parseDeepLink:(id)arg1 animation:(BOOL)arg2;
- (void)postNotification;
- (int)preferredInterfaceOrientationForPresentation;
- (int)preferredStatusBarStyle;
- (BOOL)prefersStatusBarHidden;
@property(nonatomic) __weak UIViewController *presentedModalViewController; // @synthesize presentedModalViewController=_presentedModalViewController;
@property(nonatomic) __weak UIViewController *presentingModalViewController; // @synthesize presentingModalViewController=_presentingModalViewController;
@property(nonatomic) __weak UIResponder *previousResponder; // @synthesize previousResponder;
- (void)protectStatusBarFromBeingFuckedByForeGround:(SEL)arg1;
- (void)removeDuplicateBarButton;
- (void)removeFakeNaviView;
- (void)removeNavigationBarBkg;
- (void)reportEndOpInfo;
- (void)resetTableViewOffset:(id)arg1;
- (void)resetViewStatus;
- (void)resignSubviewResponder:(id)arg1;
- (void)restoreNavigationBarBkg;
- (void)safeSetEdgesForExtendedLayout:(unsigned int)arg1;
- (void)setAutolayoutContentInset:(struct UIEdgeInsets)arg1 forScrollView:(id)arg2;
- (void)setAutolayoutTopOffset:(float)arg1 forView:(id)arg2;
- (void)setBackBarButton;
- (void)setDeepLinkParam:(id)arg1;
- (void)setIsPopByClickingURL;
- (void)setOutLine:(BOOL)arg1;
- (void)setStatusBarHidden:(BOOL)arg1;
- (void)setSubView:(id)arg1 OutLine:(BOOL)arg2;
- (void)setTitle:(id)arg1;
- (void)setTitleColor:(id)arg1;
- (void)setTitleInterfaceOritation:(int)arg1;
- (void)setTitleOnly:(id)arg1;
- (void)setTitleView:(id)arg1;
- (void)setWCBizAuthTitle:(id)arg1;
- (BOOL)shouldAutorotate;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldEnableKeyboardInteractivePop;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldOtherPreventedAutorotateToInterfaceOrientation;
- (void)startBizLoading;
- (void)startForcedRotationToPortrait;
- (void)startLoadingBlocked;
- (void)startLoadingNonBlock;
- (void)stopBizLoading;
- (void)stopLoading;
- (unsigned int)supportedInterfaceOrientations;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)tagForActivePage;
- (BOOL)useBlackStatusbar;
- (BOOL)useCustomNavibar;
- (BOOL)useTransparentNavibar;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePresented:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewDidRotateToPortrait:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillDismiss:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewWillRotateToPortrait:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAppear;
- (void)willAppearanceTransition;
- (void)willDisappear;
- (void)willDismissAndShow;
- (void)willDisshow;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

