//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCCardData, WCCardListViewController;

@protocol WCCardListViewControllerDelegate <NSObject>
- (void)onWCCardListViewControllerCancel:(WCCardListViewController *)arg1;
- (void)onWCCardListViewControllerDidSelected:(WCCardData *)arg1 listViewController:(WCCardListViewController *)arg2;
@end

