//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "UIScrollViewDelegate.h"

@class MMUIButton, MMUISearchBar, NSMutableArray, NSString, StoreEmotionSearchJSLogic, UIColor, UIImageView, UIScreenEdgePanGestureRecognizer, UIView, UIWebView;

@interface EmotionStoreSearchContainerView : MMUIView <UIScrollViewDelegate>
{
    NSMutableArray *m_logicStack;
    MMUISearchBar *m_originSearchBar;
    UIImageView *m_searchBarWrap;
    MMUIButton *m_backButton;
    MMUISearchBar *m_fakeSearchBar;
    UIScreenEdgePanGestureRecognizer *m_panGesture;
    BOOL m_hasMoving;
    float m_moveStartOffset;
    float m_moveCurOffset;
    UIWebView *m_frontestView;
    UIWebView *m_bottomView;
    UIView *m_bottomViewShadow;
    UIColor *_webViewBGColor;
}

- (void).cxx_destruct;
- (void)addSearchJSLogic:(id)arg1;
- (void)cancelMoveFrontestView;
- (void)cancelSearch;
- (void)configFakeSearchBarWithBackButton;
- (void)dealloc;
- (void)enableButton:(id)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)hideKeyboard;
- (id)initWithUISearchBar:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
@property(readonly, nonatomic) StoreEmotionSearchJSLogic *lastSearchJSLogic;
- (void)moveFrontestViewToRight;
- (void)onBackBtnClick;
- (void)removeLastSearchJSLogic;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(retain, nonatomic) UIColor *webViewBGColor; // @synthesize webViewBGColor=_webViewBGColor;
- (void)showFakeSearchBarAnimate;
- (void)showFakeSearchBarWithBackButton;
- (void)updateFrontestViewPosition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

