//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IBrandServiceSearchExt.h"
#import "contactInfoDelegate.h"

@class BSBusinessContent, CContact, NSMutableDictionary, NSString;

@interface SearchContactDataProvider : NSObject <contactInfoDelegate, IBrandServiceSearchExt>
{
    BOOL _isFromAddFriendScene;
    id <SearchContactDataProviderDelegate> _delegate;
    NSString *_keyword;
    BSBusinessContent *_content;
    CContact *_contact;
    NSMutableDictionary *_dicItemViews;
    unsigned long _requestEventID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) BSBusinessContent *content; // @synthesize content=_content;
- (void)dealloc;
@property(nonatomic) __weak id <SearchContactDataProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *dicItemViews; // @synthesize dicItemViews=_dicItemViews;
- (id)getKeywordList;
- (id)getResultItemAtIndexPath:(id)arg1;
- (void)handleDidCancelSearch;
- (void)handleSearchResultDataLoadMore;
- (void)handleSearchResultDataSelectWithIndexPath:(id)arg1;
- (BOOL)hasFoundContact;
- (BOOL)hasMoreResultData;
- (float)heightForRowInSearchResultAtIndexPath:(id)arg1;
- (void)initData;
- (id)initWithBSContent:(id)arg1 andFoundContact:(id)arg2 andSearchKeyword:(id)arg3 andLocation:(id)arg4 andDelegate:(id)arg5;
@property(nonatomic) BOOL isFromAddFriendScene; // @synthesize isFromAddFriendScene=_isFromAddFriendScene;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (id)makeSearchResultCellInTableView:(id)arg1 atIndexPath:(id)arg2;
- (void)newMessageFromContactInfo:(id)arg1;
- (int)numberOfRowInSearchResultSection:(int)arg1;
- (int)numberOfSectionInSearchResult;
- (void)onGetSearchDetailPageResponse:(id)arg1 eventID:(unsigned long)arg2;
@property(nonatomic) unsigned long requestEventID; // @synthesize requestEventID=_requestEventID;
- (void)showContactInfoView:(id)arg1 resultRow:(unsigned long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
