//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, WCListViewController;

@protocol WCListViewDelegate <NSObject>
- (void)onDataChanged:(NSArray *)arg1;
- (void)refreshFooterEnd:(unsigned long)arg1;
- (void)refreshHeaderEnd:(unsigned long)arg1;
- (void)reloadBackGround;
@property(nonatomic) WCListViewController *viewController;
- (void)shouldReloadData:(NSArray *)arg1;

@optional
- (void)didReceiveMemoryWarning;
- (void)onNoMoreDataWithRet:(int)arg1;
@end

