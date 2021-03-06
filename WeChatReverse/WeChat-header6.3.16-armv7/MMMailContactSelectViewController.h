//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface MMMailContactSelectViewController : MMSearchBarDisplayController <UITableViewDelegate, UITableViewDataSource>
{
    NSMutableArray *arrMailContact;
    NSMutableArray *arrKeys;
    NSMutableDictionary *dicContacts;
    NSMutableArray *arrSelection;
    BOOL m_bSearching;
    MMTableView *m_tableView;
    NSMutableArray *m_arrFilteredContacts;
    NSMutableSet *setSelectedContacts;
    id <MMMailContactSelectViewDelegate> _delegate;
    id _userInfo;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)doSearch:(id)arg1;
- (id)init;
- (void)initData;
- (void)initSearchBar;
- (void)initTableView;
- (void)initView;
- (id)initWithMailContacts:(id)arg1;
@property(nonatomic) __weak id <MMMailContactSelectViewDelegate> m_delegate; // @synthesize m_delegate=_delegate;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned int)arg3 row:(unsigned int)arg4;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)onDone:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
@property(retain, nonatomic) NSMutableSet *setSelectedContacts; // @synthesize setSelectedContacts;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

