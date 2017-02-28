//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "IMsgExt.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCFacadeExt.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface WCSelectContactViewController : MMSearchBarDisplayController <UITableViewDelegate, UITableViewDataSource, IMsgExt, WCFacadeExt, UIAlertViewDelegate>
{
    MMTableView *m_tableView;
    NSMutableSet *m_setSelectedUsrName;
    NSMutableDictionary *m_dicLocalContactList;
    NSMutableArray *m_arrLocalContactList;
    NSMutableArray *m_arrRecommendContactList;
    NSMutableArray *m_arrSection;
    id <WCSelectContactDelegate> m_delSelect;
    NSMutableArray *m_arrFilterList;
    BOOL m_hasSelectCountLimit;
    unsigned long m_selectCountLimit;
    int _m_fromScene;
}

- (void).cxx_destruct;
- (id)GetContactList:(unsigned long)arg1;
- (BOOL)IsInRecommendList:(id)arg1;
- (BOOL)IsInSelecteList:(id)arg1;
- (void)OnReturn;
- (void)SetSelectedUsrName:(id)arg1;
- (void)dealloc;
- (void)doSearch:(id)arg1;
- (id)init;
- (void)initData;
- (void)initSearchBar;
- (void)initView;
@property(retain, nonatomic) NSMutableArray *m_arrFilterList; // @synthesize m_arrFilterList;
@property(retain, nonatomic) NSMutableArray *m_arrLocalContactList; // @synthesize m_arrLocalContactList;
@property(retain, nonatomic) NSMutableArray *m_arrRecommendContactList; // @synthesize m_arrRecommendContactList;
@property(retain, nonatomic) NSMutableArray *m_arrSection; // @synthesize m_arrSection;
@property(nonatomic) __weak id <WCSelectContactDelegate> m_delSelect; // @synthesize m_delSelect;
@property(retain, nonatomic) NSMutableDictionary *m_dicLocalContactList; // @synthesize m_dicLocalContactList;
@property(nonatomic) int m_fromScene; // @synthesize m_fromScene=_m_fromScene;
@property(nonatomic) BOOL m_hasSelectCountLimit; // @synthesize m_hasSelectCountLimit;
@property(nonatomic) unsigned long m_selectCountLimit; // @synthesize m_selectCountLimit;
@property(retain, nonatomic) NSMutableSet *m_setSelectedUsrName; // @synthesize m_setSelectedUsrName;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned int)arg3 row:(unsigned int)arg4;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onDone:(id)arg1;
- (id)parseContactKey:(id)arg1;
- (void)processContact:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)updateRightBarButton;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
