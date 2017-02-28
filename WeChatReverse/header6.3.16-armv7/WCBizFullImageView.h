//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "SessionSelectControllerDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCBizMultiImageBrowseViewContainerDelegate.h"
#import "scrollViewDelegate.h"

@class MMScrollView, NSMutableArray, NSString, UIPageControl, UIView, WCBizMultiImageBrowseData;

@interface WCBizFullImageView : MMUIWindow <UIScrollViewDelegate, scrollViewDelegate, WCBizMultiImageBrowseViewContainerDelegate, SessionSelectControllerDelegate, WCActionSheetDelegate>
{
    UIView *m_fakeScreenView;
    struct CGRect m_originImageRectInScreen;
    BOOL m_isAnimating;
    MMScrollView *m_scrollView;
    UIPageControl *m_pageCtrl;
    UIView *m_blackMask;
    WCBizMultiImageBrowseData *m_oImageBrowseData;
    NSMutableArray *m_arrImage;
    unsigned long m_iCurIndex;
    BOOL m_hasScroll;
    int m_lastDeviceOrientation;
    id <WCBizFullImageViewDelegate> m_delegate;
}

+ (void)freeWCBizFullScreenView;
+ (id)getWCBizFullScreenView;
- (void).cxx_destruct;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)animationHideStop;
- (void)animationHideWithRotate;
- (void)animationShowWithWCBizImageBrowse:(id)arg1 originView:(id)arg2;
- (void)captureScreen;
- (void)clearStatus;
- (void)dealloc;
- (void)didDeviceRotate;
- (void)downloadImage;
- (id)getVisibleViewController;
- (id)init;
@property(nonatomic) __weak id <WCBizFullImageViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned long m_iCurIndex; // @synthesize m_iCurIndex;
- (void)onContainerAnimationHideStart;
- (void)onContainerAnimationHideStop;
- (void)onContainerAnimationShowStart;
- (void)onContainerAnimationShowStop;
- (void)onLongPressedWithWCBizImageBrowseItem:(id)arg1;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)resetScrollView;
- (void)rotateToDeviceOrientation:(BOOL)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)shouldHideContainerOnRotate;
- (void)touchesEnded_ScrollView:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

