//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBrandServiceSearchExt.h"

@class BSBusinessContent, NSMutableArray, NSString;

@interface BSSHomePageLogicController : NSObject <IBrandServiceSearchExt>
{
    BOOL _isSearchWaiting;
    BOOL _isLastSearchSuccess;
    id <BSSHomePageLogicControllerDelegate> _delegate;
    BSBusinessContent *_curContent;
    NSString *_searchKeyword;
    NSMutableArray *_homePageContentList;
    unsigned int _responseTime;
    unsigned long _requestEventID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BSBusinessContent *curContent; // @synthesize curContent=_curContent;
- (void)dealloc;
@property(nonatomic) __weak id <BSSHomePageLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doRealSearch;
- (id)getKeywordListAtIndexPath:(id)arg1;
- (id)getLoadMoreWordingInSection:(int)arg1;
- (unsigned int)getResponseTime;
- (id)getResultItemAtIndexPath:(id)arg1;
- (int)getResultTypeOfIndexPath:(id)arg1;
- (id)getTitleWithSection:(int)arg1;
- (void)handleBrandContactSelectWithIndexPath:(id)arg1;
- (void)handleHomePageLoadMore;
- (void)handleHomepageSearchWithKeyWord:(id)arg1;
- (void)handleHouseServiceSecectWithIndexPath:(id)arg1;
- (void)handleJobServiceSelectWithIndexPath:(id)arg1;
- (void)handleLoadMoreCellSelectWithIndexPath:(id)arg1;
- (void)handleMovieServiceSelectWithIndexPath:(id)arg1;
- (void)handleMusicServiceSelectWithIndexPath:(id)arg1;
- (void)handleProductSelectWithIndexPath:(id)arg1;
- (void)handleSearchCancel;
- (void)handleTableViewSelecttionWithIndexPath:(id)arg1;
- (void)handleUrlTypeServiceSelectWithIndexPath:(id)arg1;
- (BOOL)hasMoreHomePageData;
@property(retain, nonatomic) NSMutableArray *homePageContentList; // @synthesize homePageContentList=_homePageContentList;
- (id)init;
- (BOOL)isBrandContactSection:(int)arg1;
- (BOOL)isHouseServiceSection:(int)arg1;
- (BOOL)isJobServiceSection:(int)arg1;
@property(nonatomic) BOOL isLastSearchSuccess; // @synthesize isLastSearchSuccess=_isLastSearchSuccess;
- (BOOL)isLoadMoreCell:(id)arg1;
- (BOOL)isMovieServiceSection:(int)arg1;
- (BOOL)isMusicServiceSection:(int)arg1;
- (BOOL)isProductSection:(int)arg1;
@property(nonatomic) BOOL isSearchWaiting; // @synthesize isSearchWaiting=_isSearchWaiting;
- (int)numberOfRowInSection:(int)arg1;
- (int)numberOfSectionInSearchResult;
- (void)onGetSearchDetailPageResponse:(id)arg1 eventID:(unsigned long)arg2;
- (void)onRetrieveLocationFinished:(int)arg1;
- (void)prepareSearch;
@property(nonatomic) unsigned long requestEventID; // @synthesize requestEventID=_requestEventID;
- (void)resetData;
@property(nonatomic) unsigned int responseTime; // @synthesize responseTime=_responseTime;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
- (void)sendHomePageLoadMoreRequest;
- (void)sendHomePageSearchRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

