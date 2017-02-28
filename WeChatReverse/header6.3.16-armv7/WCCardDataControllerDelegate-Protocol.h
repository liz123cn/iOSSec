//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMTableView, MMUIViewController, WCCardData;

@protocol WCCardDataControllerDelegate <NSObject>
- (MMTableView *)getMyCardTableView;
- (MMUIViewController *)getViewController;
- (float)getViewHeight;
- (BOOL)hasEnterCardListBefore;
- (BOOL)hasUnreadMessage;
- (BOOL)isFromAddEntrance;
- (void)onCardPackageViewSelectCardItem:(WCCardData *)arg1;
- (void)onLoadMoreMyCardData;
- (void)scrollToShareCard;
- (void)showLoadingView;
- (void)showTableView;
- (void)stopLoadMoreAnimation;
@end

