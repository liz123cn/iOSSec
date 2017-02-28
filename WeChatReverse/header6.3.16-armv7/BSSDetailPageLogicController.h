//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBrandServiceSearchExt.h"

@class BSBusinessContent, NSString;

@interface BSSDetailPageLogicController : NSObject <IBrandServiceSearchExt>
{
    BOOL _isNewSearch;
    BOOL _isLastSearchSuccess;
    id <BSSDetailPageLogicControllerDelegate> _delegate;
    BSBusinessContent *_curContent;
    NSString *_keyword;
    int _resultType;
    unsigned long _entrySrc;
    unsigned int _responseTime;
    unsigned long _requestEventID;
    unsigned long long _businessType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long businessType; // @synthesize businessType=_businessType;
@property(retain, nonatomic) BSBusinessContent *curContent; // @synthesize curContent=_curContent;
- (void)dealloc;
@property(nonatomic) __weak id <BSSDetailPageLogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long entrySrc; // @synthesize entrySrc=_entrySrc;
- (id)getKeywordList;
- (id)getResultItemAtIndexPath:(id)arg1;
- (void)handleBrandContactSelectWithIndexPath:(id)arg1;
- (void)handleHouseServiceSecectWithIndexPath:(id)arg1;
- (void)handleJobServiceSelectWithIndexPath:(id)arg1;
- (void)handleMovieServiceSelectWithIndexPath:(id)arg1;
- (void)handleMusicServiceSelectWithIndexPath:(id)arg1;
- (void)handleProductSelectWithIndexPath:(id)arg1;
- (void)handleResultViewLoadMore;
- (void)handleSearchWithKeyWord:(id)arg1;
- (void)handleTableViewSelecttionWithIndexPath:(id)arg1;
- (void)handleUrlTypeServiceSelectWithIndexPath:(id)arg1;
- (BOOL)hasMoreResultData;
- (id)initBSSDetailPageLogicControllerWithResultType:(int)arg1 andBusinessType:(unsigned long long)arg2 andKeyword:(id)arg3 andLocation:(id)arg4 andEntrySrc:(unsigned long)arg5;
@property(nonatomic) BOOL isLastSearchSuccess; // @synthesize isLastSearchSuccess=_isLastSearchSuccess;
@property(nonatomic) BOOL isNewSearch; // @synthesize isNewSearch=_isNewSearch;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (int)numberOfRowsInResult;
- (void)onGetSearchDetailPageResponse:(id)arg1 eventID:(unsigned long)arg2;
@property(nonatomic) unsigned long requestEventID; // @synthesize requestEventID=_requestEventID;
- (void)resetData;
@property(nonatomic) unsigned int responseTime; // @synthesize responseTime=_responseTime;
@property(nonatomic) int resultType; // @synthesize resultType=_resultType;
- (void)sendDetailPageDataRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

