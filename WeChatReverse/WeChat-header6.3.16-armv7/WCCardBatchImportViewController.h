//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCCardPkgExt.h"
#import "IWCShareCardPkgExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCCardPkgItemViewDelegate.h"

@class MMTableView, NSMutableArray, NSString, WCCardAcceptCardListInfo, WCCardChooseEmptyView;

@interface WCCardBatchImportViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, IWCCardPkgExt, IWCShareCardPkgExt, WCCardPkgItemViewDelegate>
{
    id <WCCardBatchImportViewControllerDelegate> _delegate;
    BOOL _isLoading;
    WCCardAcceptCardListInfo *_cardListInfo;
    NSMutableArray *_cardList;
    NSMutableArray *_selectedIndex;
    WCCardChooseEmptyView *_emptyView;
    MMTableView *_tableView;
    unsigned long _genType;
    unsigned long _uiScene;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)initData;
- (void)initEmptyView;
- (void)initTableView;
- (id)initWithDelegate:(id)arg1 cardListInfo:(id)arg2;
- (void)loadCellSubView:(id)arg1 cardIndex:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onCancel;
- (void)onCardSelect:(int)arg1 bSelected:(BOOL)arg2;
- (void)onGetBulkCard:(id)arg1 errCode:(int)arg2;
- (void)onImportBulkCard:(id)arg1 errCode:(int)arg2;
- (void)onImportSelectedCardList;
- (void)onShareCard:(id)arg1 TpID:(id)arg2 andCardInfo:(id)arg3;
- (void)onShareSelectedCardList;
- (void)performDismiss;
@property(nonatomic) unsigned long uiScene; // @synthesize uiScene=_uiScene;
- (void)showEmptyView;
- (void)showTableView;
- (void)stopLoadingWithFailText:(id)arg1;
- (void)stopLoadingWithOKText:(id)arg1;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)updateRightBtn;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
