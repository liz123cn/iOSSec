//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "IFTSContactMgrExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class FTSContactMgr, MMTableView, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImage, UIImageView, UITextField, UIView;

@interface SightDistributeTableView : MMUIView <UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, IFTSContactMgrExt>
{
    NSMutableArray *m_sessionList;
    MMTableView *m_tableView;
    NSMutableDictionary *m_sendAry;
    NSMutableArray *m_seletedNotInSession;
    NSMutableArray *m_displayList;
    UIImageView *m_bgMask;
    float m_tableTopInset;
    BOOL m_inSearchPanel;
    UIView *m_searchBar;
    UITextField *m_searchTextField;
    UIButton *m_cancelSearchBtn;
    FTSContactMgr *_ftsContactMgr;
    UIImage *_thumb;
    UIImage *_maskImg;
    NSString *_videoPath;
    id <SightDistributeTableViewDelegate> _delegage;
    NSString *_searchKeyword;
}

- (void).cxx_destruct;
- (void)adjustTableViewSeparatorInset;
- (void)checkSelectCount;
- (void)clearSelection;
- (void)confirmSendMsg;
- (void)dealloc;
- (void)delaySearch:(id)arg1;
@property(nonatomic) __weak id <SightDistributeTableViewDelegate> delegage; // @synthesize delegage=_delegage;
- (void)deselectAllSelectedRows:(BOOL)arg1;
- (void)didPressSearchReturn;
- (void)didSelectSearchResult:(id)arg1;
- (void)exitSearchPanel;
- (void)fixKeyBoardColorForIOS8;
- (unsigned long)getSelectCount;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)makeMomentCell:(id)arg1;
- (void)makeSaveCell:(id)arg1;
- (void)makeSearchBarView;
@property(retain, nonatomic) UIImage *maskImg; // @synthesize maskImg=_maskImg;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onFTSContactSearchResultChanged:(BOOL)arg1;
- (void)reflashSessionList;
- (void)scrollToTop;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
- (void)sendShortVideoToContacts:(id)arg1;
- (void)sendToContact:(id)arg1 thumbSize:(struct CGSize)arg2 thumbData:(id)arg3;
@property(retain, nonatomic) NSMutableArray *sessionList; // @synthesize sessionList=m_sessionList;
- (void)setTableInset:(float)arg1;
- (void)setTableMargin:(float)arg1;
@property(retain, nonatomic) UIImage *thumb; // @synthesize thumb=_thumb;
@property(retain, nonatomic) NSString *videoPath; // @synthesize videoPath=_videoPath;
- (void)switchToSearchPanel;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)textChange;
- (void)textFieldDidBeginEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)updateCell:(id)arg1 contact:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

