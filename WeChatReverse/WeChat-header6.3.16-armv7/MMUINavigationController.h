//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UINavigationController.h"

@class UIViewController;

@interface MMUINavigationController : UINavigationController
{
    UIViewController *_popingViewController;
}

- (void).cxx_destruct;
- (id)DispatchPopViewControllerAnimated:(BOOL)arg1;
- (void)layoutViewsForTaskBar;
- (id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (id)popViewControllerAnimated:(BOOL)arg1;
- (void)setNavigationBarHidden:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

