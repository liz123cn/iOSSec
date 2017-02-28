//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIPresentationController, UITraitCollection, UIViewController;

@protocol UIAdaptivePresentationControllerDelegate <NSObject>

@optional
- (int)adaptivePresentationStyleForPresentationController:(UIPresentationController *)arg1;
- (int)adaptivePresentationStyleForPresentationController:(UIPresentationController *)arg1 traitCollection:(UITraitCollection *)arg2;
- (UIViewController *)presentationController:(UIPresentationController *)arg1 viewControllerForAdaptivePresentationStyle:(int)arg2;
- (void)presentationController:(UIPresentationController *)arg1 willPresentWithAdaptiveStyle:(int)arg2 transitionCoordinator:(id <UIViewControllerTransitionCoordinator>)arg3;
@end

