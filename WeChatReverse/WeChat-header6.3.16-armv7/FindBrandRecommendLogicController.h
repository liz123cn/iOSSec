//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PBMessageObserverDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FindBrandRecommendNothingToShowView, MMTableView, NSMutableArray, NSString;

@interface FindBrandRecommendLogicController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, PBMessageObserverDelegate>
{
    MMTableView *m_tableView;
    NSMutableArray *m_sectionList;
    BOOL m_isLoadedFromCache;
    FindBrandRecommendNothingToShowView *m_nothingToShowView;
    id <FindBrandRecommendLogicControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (id)GroupListConvert:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)OnGetBrandRecommendList:(id)arg1 eventID:(unsigned long)arg2;
- (void)dealloc;
- (id)getBrandRecommendCache;
- (BOOL)getBrandRecommendList;
- (id)initWithParentVC:(id)arg1;
@property(nonatomic) __weak id <FindBrandRecommendLogicControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSMutableArray *m_sectionList; // @synthesize m_sectionList;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)pathForBrandRecommendCache;
- (void)setBrandRecommendCacheWithGroupList:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)updateResultView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
