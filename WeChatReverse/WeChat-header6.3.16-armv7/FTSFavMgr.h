//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IAsyncTaskProtocol.h"
#import "IFavoritesExt.h"

@class AsyncTaskQueueEngine, FTSDB, FTSFavDB, FTSFavIndexState, NSArray, NSMutableArray, NSRecursiveLock, NSString;

@interface FTSFavMgr : NSObject <IAsyncTaskProtocol, IFavoritesExt>
{
    FTSFavDB *_ftsFavDB;
    AsyncTaskQueueEngine *_asyncTaskQueueEngine;
    FTSDB *_ftsDB;
    NSRecursiveLock *_lock;
    BOOL _hasInitTask;
    BOOL _hasForegroundTask;
    BOOL _hasBackgroundTask;
    NSMutableArray *_arrHomePageLastQueryKeywords;
    NSString *_lastHomePageQueryText;
    NSString *_newestHomePageQueryText;
    BOOL _hasSearchDoneForHomePage;
    NSMutableArray *_arrSearchItemForHomePage;
    NSMutableArray *_arrDetailPageLastQueryKeywords;
    NSString *_lastDetailPageQueryText;
    NSString *_newestDetailPageQueryText;
    BOOL _hasSearchDoneForDetailPage;
    NSMutableArray *_arrSearchItemForDetailPage;
    FTSFavIndexState *_favIndexState;
    BOOL _hasValidateFavIndex;
}

- (void).cxx_destruct;
- (void)OnDelAllFavItem;
- (void)OnDelFavoritesItem:(unsigned long)arg1;
- (void)OnModFavoritesItem:(id)arg1;
@property(retain, nonatomic) NSArray *arrDetailPageLastQueryKeywords; // @synthesize arrDetailPageLastQueryKeywords=_arrDetailPageLastQueryKeywords;
@property(retain, nonatomic) NSArray *arrHomePageLastQueryKeywords; // @synthesize arrHomePageLastQueryKeywords=_arrHomePageLastQueryKeywords;
- (void)asyncSearchTextForDetailPage:(id)arg1;
- (void)asyncSearchTextForHomePage:(id)arg1;
- (void)cancelSearchForDetailPage;
- (void)cancelSearchForHomePage;
- (void)dealloc;
- (void)excuteBackgroundTask;
- (void)excuteForegroundTask;
- (void)excuteInitTask;
- (unsigned int)getSearchItemCountForHomePage:(id)arg1;
- (id)getSearchItemForDetailPage:(id)arg1 index:(unsigned int)arg2;
- (id)getSearchItemForHomePage:(id)arg1 index:(unsigned int)arg2;
- (id)getSearchItemsForDetailPage:(id)arg1;
- (BOOL)hasBackgroundTask;
- (BOOL)hasForegroundTask;
- (BOOL)hasInitTask;
- (BOOL)hasSearchDoneForDetailPage:(id)arg1;
- (BOOL)hasSearchDoneForHomePage:(id)arg1;
- (BOOL)hasSearchResultForHomePage:(id)arg1;
- (id)init;
- (void)initDB:(id)arg1 lock:(id)arg2 asyncTaskQueueEngine:(id)arg3;
@property(retain, nonatomic) NSString *lastDetailPageQueryText; // @synthesize lastDetailPageQueryText=_lastDetailPageQueryText;
@property(retain, nonatomic) NSString *lastHomePageQueryText; // @synthesize lastHomePageQueryText=_lastHomePageQueryText;
@property(retain, nonatomic) NSString *newestDetailPageQueryText; // @synthesize newestDetailPageQueryText=_newestDetailPageQueryText;
@property(retain, nonatomic) NSString *newestHomePageQueryText; // @synthesize newestHomePageQueryText=_newestHomePageQueryText;
- (void)onPreRecoverFTSDB;
- (void)onRecoverFTSDB;
- (id)pathForIndexState;
- (void)reloadDB;
- (void)resetIndexState;
- (void)searchCompletelyForDetailPage:(id)arg1;
- (void)searchCompletelyForHomePage:(id)arg1;
- (void)setNeedsInitTask;
- (void)signalAllTask;
- (void)traceIndexState;
- (void)tryLoadIndexState;
- (void)trySaveIndexState;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
