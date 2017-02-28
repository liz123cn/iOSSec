//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITabBarController.h"

@class NSMutableArray, UITapGestureRecognizer;

@interface MMTabBarController : UITabBarController
{
    unsigned int _viewControllersCount;
    NSMutableArray *_tabBarBtns;
    NSMutableArray *_badgeViews;
    UITapGestureRecognizer *_doubleTapGesture;
    BOOL _hasDoubleTapGesture;
    float _lastScreenWidth;
}

- (void).cxx_destruct;
- (void)addDoubleTapGesture;
- (void)bringBadgeViewsToFront;
- (id)currentViewController;
- (id)getBadgeViewForIndex:(int)arg1;
- (int)getBadgeViewRightMarginPortrait;
- (id)getBadgeViews;
- (id)getTabBarBtnForIndex:(int)arg1;
- (id)getTabBarBtnViews;
- (id)getViewControllerAtIndex:(unsigned long)arg1;
- (void)handleDoubleTapGesture:(id)arg1;
- (void)hideTabBar;
- (void)hideTabBarForIndex:(int)arg1;
- (void)hideTabBarWithNoViewHeightUpdateForIndex:(int)arg1;
- (id)init;
- (void)makeSureFrame;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)reLayoutTabbarToOrientation:(int)arg1;
- (void)relayoutBadgeViewForIpadIOS8;
- (void)removeDoubleTapGesture;
- (void)setAllTabBarItemEnabled:(BOOL)arg1;
- (void)setSelectedIndex:(unsigned int)arg1;
- (void)setSelectedViewController:(id)arg1;
- (void)setTabBarBadgeImage:(id)arg1 forIndex:(unsigned int)arg2;
- (void)setTabBarBadgeString:(id)arg1 forIndex:(int)arg2;
- (void)setTabBarBadgeValue:(int)arg1 forIndex:(int)arg2;
- (void)setViewControllers:(id)arg1;
- (void)setViewControllers:(id)arg1 animated:(BOOL)arg2;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)showTabBar;
- (void)showTabBarForIndex:(int)arg1;
- (void)showTabBarWithNoViewHeightUpdateForIndex:(int)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

// Remaining properties
@property(nonatomic) __weak id <MMTabBarControllerDelegate> delegate;

@end

