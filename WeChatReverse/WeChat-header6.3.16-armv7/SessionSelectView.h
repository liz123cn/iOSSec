//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ContactsDataLogicDelegate.h"
#import "IFTSContactMgrExt.h"
#import "MMSearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FTSContactMgr, MMSearchBar, MMTableView, NSMutableArray, NSMutableDictionary, NSString;

@interface SessionSelectView : UIView <IFTSContactMgrExt, UITableViewDelegate, UITableViewDataSource, MMSearchBarDelegate, ContactsDataLogicDelegate>
{
    int m_iSessionType;
    id <SessionSelectViewDelegate> m_delegate;
    MMTableView *m_tableView;
    NSMutableArray *m_arrContacts;
    NSMutableDictionary *m_dicMultiSelect;
    MMSearchBar *m_mmSearchBar;
    int m_commonSearchScene;
    FTSContactMgr *_ftsContactMgr;
    NSString *nsCurrentSearchText;
    NSMutableArray *arrSearchResultOfContacts;
    NSMutableArray *arrSearchResultOfGroup;
    NSMutableArray *m_specialCellList;
    BOOL m_bShowEnterpriseChat;
    BOOL m_bShowNewSession;
    BOOL m_bShowSelectFromContactList;
    BOOL m_bFilterMyContact;
    BOOL m_bMultiSelect;
}

- (void).cxx_destruct;
- (void)FilterSearchResultOfNormalContacts:(id)arg1;
- (void)SearchBarBecomeActive;
- (void)addFakeViewWhenAsynSearchNotReturn;
- (void)cancelSearch;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)cleartSearchQueryTest;
- (void)dealloc;
- (void)delaySearch:(id)arg1 slowMode:(BOOL)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
- (void)doSearch:(id)arg1 Pre:(BOOL)arg2;
- (id)getCellImage:(id)arg1;
- (id)getGroupDispName:(id)arg1;
- (id)getMatchTipForUsername:(id)arg1;
- (void)handleSelectEnterpriseChat:(id)arg1;
- (void)handleSelectFromContact;
- (void)handleSelectIndexPath:(id)arg1 tableView:(id)arg2;
- (void)handleSelectNewSession;
- (float)heightForHeaderInSection:(int)arg1 ForSearchViewTable:(id)arg2;
- (float)heightForSearchViewTable:(id)arg1;
- (void)initData;
- (void)initSearchBar;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id)arg2;
- (BOOL)isSelected:(id)arg1;
@property(nonatomic) BOOL m_bFilterMyContact; // @synthesize m_bFilterMyContact;
@property(nonatomic) BOOL m_bMultiSelect; // @synthesize m_bMultiSelect;
@property(nonatomic) BOOL m_bShowEnterpriseChat; // @synthesize m_bShowEnterpriseChat;
@property(nonatomic) BOOL m_bShowNewSession; // @synthesize m_bShowNewSession;
@property(nonatomic) BOOL m_bShowSelectFromContactList; // @synthesize m_bShowSelectFromContactList;
@property(nonatomic) int m_commonSearchScene; // @synthesize m_commonSearchScene;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
@property(retain, nonatomic) MMSearchBar *m_mmSearchBar; // @synthesize m_mmSearchBar;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
- (void)makeCell:(id)arg1 ForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)makeCell:(id)arg1 contact:(id)arg2 HightlightedTop:(BOOL)arg3;
- (void)makeCell:(id)arg1 contact:(id)arg2 HightlightedTop:(BOOL)arg3 showMatchTip:(BOOL)arg4;
- (void)makeSpecialCell:(id)arg1 Title:(id)arg2;
- (void)mmSearchBarTextDidChange:(id)arg1;
- (int)numberOfRowsInSection:(int)arg1 ForSearchViewTable:(id)arg2;
- (int)numberOfSectionsForSearchViewTable:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onContactsDataChange;
- (void)onFTSContactSearchResultChanged:(BOOL)arg1;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (void)onSelect:(id)arg1;
- (void)removeFakeViewWhenAsynSearchIsReturn;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)switchSelect:(id)arg1 atIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(int)arg3;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)titleForHeaderInSection:(int)arg1 ForSearchViewTable:(id)arg2;
- (BOOL)updateMultiSelect:(id)arg1;
- (void)updateMultiSelectView;
- (id)viewForHeaderInSection:(int)arg1 ForSearchViewTable:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

