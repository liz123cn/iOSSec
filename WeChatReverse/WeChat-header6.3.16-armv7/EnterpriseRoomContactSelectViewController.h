//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "UISearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "tableViewDelegate.h"

@class CEnterpriseContact, MMTableView, NSMutableArray, NSString;

@interface EnterpriseRoomContactSelectViewController : MMSearchBarDisplayController <tableViewDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate>
{
    CEnterpriseContact *_contact;
    NSMutableArray *_aryMemberContact;
    NSMutableArray *_aryFilteredMemberContact;
    MMTableView *_tableView;
    id <EnterpriseRoomContactSelectDelegate> delegate;
}

- (void).cxx_destruct;
- (id)GetCompareStrByContact:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <EnterpriseRoomContactSelectDelegate> delegate; // @synthesize delegate;
- (void)doSearch:(id)arg1;
- (void)initData;
- (void)initSearchBar;
- (void)initTableView;
- (void)initView;
- (id)initWithEnterpriseContact:(id)arg1 delegate:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
