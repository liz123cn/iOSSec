//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FTSResultView.h"

#import "IFTSMemorySearchMgrExt.h"

@class NSString;

@interface FTSGameDetailView : FTSResultView <IFTSMemorySearchMgrExt>
{
}

- (void)dealloc;
- (void)delaySearch:(id)arg1 slowMode:(BOOL)arg2;
- (void)delaySearchImp:(id)arg1;
- (id)getSearchArray:(id)arg1;
- (void)handleTextChanged:(id)arg1 immediately:(BOOL)arg2;
- (BOOL)hasSearchDone:(id)arg1;
- (void)hideKeyboard;
- (id)init;
- (void)onFTSMemorySearchResultChangedForGameDetailPage:(BOOL)arg1;
- (void)pop;
- (void)selectWCGameItem:(id)arg1;
- (void)showWCGameWebViewWithUrl:(id)arg1 title:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

