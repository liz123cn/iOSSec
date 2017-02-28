//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMSessionInfo, NSString;

@protocol mainFrameLogicControllerDelegate <NSObject>

@optional
- (void)cancelSelectedCell;
- (void)changeNetworkStatus:(unsigned long)arg1;
- (void)deleteSessionCell:(unsigned long)arg1 withUser:(NSString *)arg2;
- (BOOL)isStatusBarHidden;
- (void)percentIniting:(NSString *)arg1;
- (void)popToMainFrameAnimated:(BOOL)arg1;
- (void)reloadSessions;
- (void)selectCellForName:(NSString *)arg1;
- (void)startLoadingForSessionRebuild;
- (void)stopIniting:(unsigned long)arg1;
- (void)stopLoadingForSessionRebuild;
- (void)updateAllItemTimeLabel;
- (void)updateSession:(MMSessionInfo *)arg1;
- (void)updateStatusBar;
- (void)updateUnReadCount;
@end
