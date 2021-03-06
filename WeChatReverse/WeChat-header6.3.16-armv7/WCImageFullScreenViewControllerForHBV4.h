//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IVOIPUILogicMgrExt.h"
#import "MMExposeViewControllerDelegate.h"
#import "SessionSelectControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WCImageFullScreenViewContainerDelegateForHBV4.h"
#import "scrollViewDelegate.h"

@class MMAnimationTipView, MMScrollView, MMUIWindow, NSArray, NSMutableArray, NSString, UIPageControl, UIView;

@interface WCImageFullScreenViewControllerForHBV4 : MMUIViewController <UIScrollViewDelegate, scrollViewDelegate, WCImageFullScreenViewContainerDelegateForHBV4, IVOIPUILogicMgrExt, SessionSelectControllerDelegate, MMExposeViewControllerDelegate, UIAlertViewDelegate>
{
    UIView *m_fakeScreenView;
    struct CGRect m_originImageRectInScreen;
    BOOL m_isAnimating;
    MMScrollView *m_scrollView;
    UIPageControl *m_pageCtrl;
    UIView *m_blackMask;
    NSArray *m_arrMediaDataWrap;
    NSArray *m_arrMediaData;
    NSMutableArray *m_arrImage;
    unsigned long m_iCurIndex;
    BOOL m_hasScroll;
    int m_lastDeviceOrientation;
    BOOL m_isAnimationShowing;
    BOOL m_isRotating;
    BOOL m_forbidPreloadImg;
    MMUIWindow *m_fullScreenWindow;
    NSString *m_visibleTitle;
    MMAnimationTipView *_tipView;
    id <WCImageFullScreenViewControllerDelegateV4> m_delegate;
}

- (void).cxx_destruct;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)animationHideStop;
- (void)animationHideWithRotate;
- (void)animationShowWithHint:(id)arg1;
- (void)animationShowWithMediaDataArray:(id)arg1 mediaDataWrapArray:(id)arg2 originView:(id)arg3 index:(unsigned long)arg4;
- (void)animationShowWithMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned long)arg3;
- (void)cancelCaptureFakeWindow;
- (void)captureFakeScreen;
- (void)captureFakeWindow;
- (void)captureScreen;
- (void)clearStatus;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)downloadImage;
- (id)getBarButton:(id)arg1;
- (id)getDataItem;
- (id)getVisibleViewController;
- (void)hiddenBarButton:(id)arg1;
- (BOOL)isContainerVisible:(id)arg1;
@property(nonatomic) __weak id <WCImageFullScreenViewControllerDelegateV4> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned long m_iCurIndex; // @synthesize m_iCurIndex;
- (void)onAnimateFadeOut;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationHideStop;
- (void)onContainerAnimationShowStart;
- (void)onContainerAnimationShowStop;
- (void)onDetailViewReturn;
- (void)onExposeCancel;
- (void)onExposeComplete;
- (void)onExposeWithDataItem:(id)arg1;
- (id)onGetViewController;
- (void)onGreetingTipBtnClicked;
- (void)onLongPressedWithMediaItem:(id)arg1;
- (void)onPushViewController:(id)arg1 animated:(BOOL)arg2;
- (void)onTopBarFrameChanged;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)resetScrollView;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)shouldHideContainerOnRotate;
- (BOOL)shouldRotateToInterfaceOrientation:(int)arg1;
- (void)showBarButton:(id)arg1;
- (void)showErrorTip:(id)arg1;
- (void)showNavigationBar;
- (void)showTipView:(id)arg1;
- (void)startImageLoadingBlocked;
- (void)stopImageLoading;
- (unsigned int)supportedInterfaceOrientations;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;
- (BOOL)useTransparentNavibar;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)windowNeed2Hide;
- (void)windowNeed2Show;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

