//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavTagViewDelegate.h"
#import "IFavoritesExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "tableViewDelegate.h"

@class FavDetailTagsView, FavDetailUpdateTimeView, FavoritesItem, MMTableView, NSString;

@interface FavBaseDetailViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, tableViewDelegate, IFavoritesExt, FavTagViewDelegate>
{
    MMTableView *m_tableView;
    FavDetailTagsView *m_tagsView;
    FavDetailUpdateTimeView *m_updateTimeView;
    FavoritesItem *m_favItem;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)genAddTime:(id)arg1 indexPath:(id)arg2;
- (void)genContent:(id)arg1 indexPath:(id)arg2;
- (void)genHeadCell:(id)arg1 indexPath:(id)arg2;
- (void)genTagsView:(id)arg1 indexPath:(id)arg2;
- (float)getHeightForRowAtIndexPath:(id)arg1;
- (int)getRowsInContentSection;
- (void)initNavigationBar;
- (void)initTableView;
- (id)initWithFavItem:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onAction:(id)arg1;
- (void)onFavTagEditBegin:(int)arg1;
- (void)onFavTagEditOK;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

