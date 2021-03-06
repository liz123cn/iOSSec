//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableArray, NSString;

@interface ShakeTvHistoryMgr : MMService <MMService, PBMessageObserverDelegate>
{
    BOOL _hadLoadCache;
    NSMutableArray *_shakeTvList;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)addTvItem:(id)arg1;
- (void)clearAllHistory;
- (void)dealloc;
- (void)deleteTvItem:(id)arg1;
- (void)deleteTvItem:(id)arg1 needSaveCache:(BOOL)arg2;
- (id)getHistoryTvItemList;
- (void)handleOpTvHist:(id)arg1;
- (void)handleShakeTvTempSession:(id)arg1 deeplinkUrl:(id)arg2 currVC:(id)arg3 statScene:(unsigned long)arg4 openLinkScene:(int)arg5;
- (void)notifyDeleteTvItem:(id)arg1;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)opShakeTvHistory:(unsigned long)arg1 brandUserName:(id)arg2;
- (id)pathForCache;
- (void)saveHistory;
- (void)tryLoadCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

