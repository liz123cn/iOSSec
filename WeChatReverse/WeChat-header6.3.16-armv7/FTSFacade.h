//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "FTSDBDelegate.h"
#import "MMDBRRepairerExt.h"
#import "MMKernelExt.h"
#import "MMService.h"

@class AsyncTaskQueueEngine, FTSContactMgr, FTSDB, FTSFavMgr, FTSMemorySearchMgr, FTSMessageMgr, FTSTopHitMgr, FTSWebSearchMgr, NSMutableSet, NSRecursiveLock, NSString, WSMusicMgr;

@interface FTSFacade : MMService <FTSDBDelegate, MMDBRRepairerExt, MMService, MMKernelExt>
{
    FTSDB *_ftsDB;
    AsyncTaskQueueEngine *_asyncTaskQueueEngine;
    BOOL _hasStartAsyncQueue;
    BOOL _isPositioning;
    BOOL _bHasActiveSearch;
    NSRecursiveLock *_lock;
    FTSContactMgr *_ftsContactMgr;
    FTSMessageMgr *_ftsMessageMgr;
    FTSFavMgr *_ftsFavMgr;
    FTSMemorySearchMgr *_ftsMemorySearchMgr;
    FTSWebSearchMgr *_ftsWebSearchMgr;
    WSMusicMgr *_musicMgr;
    NSMutableSet *_resultHittedKeywordSet;
    NSMutableSet *_resultHittedKeywordSetForSubSearch;
    NSMutableSet *_imageCacheUrlSet;
    FTSTopHitMgr *_ftsTopHitMgr;
}

- (void).cxx_destruct;
- (void)addImageCacheKey:(id)arg1;
- (void)addMainSearchFTSLog:(id)arg1;
- (void)addSubSearchFTSLog:(id)arg1;
- (void)cancelSearchForHomePage;
- (void)cleanFTSDB;
- (void)clearCacheHitKeyword;
- (void)clearCacheHitKeywordForSubSearch;
- (void)clearImageCache;
- (void)dealloc;
- (void)doInitWorker;
- (void)enableForegroundTask;
- (void)forbidForegroundTask;
@property(retain, nonatomic) FTSContactMgr *ftsContactMgr; // @synthesize ftsContactMgr=_ftsContactMgr;
@property(retain, nonatomic) FTSFavMgr *ftsFavMgr; // @synthesize ftsFavMgr=_ftsFavMgr;
@property(retain, nonatomic) FTSMemorySearchMgr *ftsMemorySearchMgr; // @synthesize ftsMemorySearchMgr=_ftsMemorySearchMgr;
@property(retain, nonatomic) FTSMessageMgr *ftsMessageMgr; // @synthesize ftsMessageMgr=_ftsMessageMgr;
@property(retain, nonatomic) FTSTopHitMgr *ftsTopHitMgr; // @synthesize ftsTopHitMgr=_ftsTopHitMgr;
@property(retain, nonatomic) FTSWebSearchMgr *ftsWebSearchMgr; // @synthesize ftsWebSearchMgr=_ftsWebSearchMgr;
- (BOOL)hasSearchResultToLogForHomePage;
- (id)init;
- (void)logAddAddressFriend:(int)arg1;
- (void)logBeginSearch:(int)arg1;
- (void)logClickContact:(id)arg1 searchScene:(int)arg2 row:(unsigned int)arg3 clickSubType:(int)arg4 bizRow:(unsigned int)arg5;
- (void)logGroupHitPos:(unsigned long)arg1 totalCount:(unsigned long)arg2;
- (void)logGroupHitPos:(unsigned long)arg1 totalCount:(unsigned long)arg2 isInMainPage:(BOOL)arg3 isClickMore:(BOOL)arg4;
- (void)logGuidePageClick:(unsigned long long)arg1;
- (void)logHitResult:(id)arg1;
- (void)logHitResultForSubSearch:(id)arg1 searchType:(int)arg2;
- (void)logInviteAddressFriend:(int)arg1;
- (void)logNewHitResult:(id)arg1 hasWebSearchCellShow:(BOOL)arg2 clickType:(unsigned long)arg3 cellStyle:(unsigned long)arg4;
- (void)logResultActionItem:(id)arg1 actionType:(unsigned int)arg2 searchType:(unsigned int)arg3;
@property(retain, nonatomic) WSMusicMgr *musicMgr; // @synthesize musicMgr=_musicMgr;
- (void)onAuthOK;
- (void)onBeginSearch;
- (void)onEnterBackground;
- (void)onPreHandleRecoverDB;
- (void)onRecoverFTSDB;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (BOOL)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)onServiceTerminate;
- (void)onViewPop;
- (void)reloadDatabase;
- (void)removeImageCacheKey:(id)arg1;
- (void)resetSearchStatus;
- (void)startSearchForHomePage:(id)arg1;
- (void)stopRetrievingLocation;
- (void)tryLogResultNoAction;
- (void)tryLogResultNoActionForSubSearch:(id)arg1 hasResult:(BOOL)arg2 searchType:(int)arg3;
- (void)updateLocation;
- (void)updateNewestHomePageSearchText:(id)arg1;
- (void)waitAllTask;
- (void)willRepairDB:(unsigned int)arg1 needCatch:(char *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

