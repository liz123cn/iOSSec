//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMRefreshTableFooterDelegate.h"
#import "ShakeMgrExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSString, UIView, WCTimeLineFooterView;

@interface ShakeMsgListViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMRefreshTableFooterDelegate, WCActionSheetDelegate, ShakeMgrExt>
{
    MMTableView *_tableView;
    WCTimeLineFooterView *_footerView;
    UIView *_tableDefaultFooterView;
    NSMutableArray *_arrMessage;
    NSMutableDictionary *_dicCells;
    NSMutableDictionary *_dicCellHeights;
    int _scene;
}

- (void).cxx_destruct;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)addMessagesWithArray:(id)arg1;
- (void)dealloc;
- (void)didReceiveLocalMemoryWarning:(id)arg1;
- (id)genLoadMoreCellContentView;
- (id)genNormalCellContentViewAtIndexPath:(id)arg1;
- (float)getNormalCellContentViewHeightAtIndexPath:(id)arg1;
- (id)init;
- (void)initData;
- (void)initView;
- (void)loadMoreData;
- (void)onClearList;
- (void)onLoadMore;
- (void)onOperate;
- (void)onShakeMsgUnreadCountChanged;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)scrollViewDidScroll:(id)arg1;
- (void)showEdit:(unsigned int)arg1 show:(BOOL)arg2;
- (BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForFooterInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (void)updateRightBar;
- (void)updateTableFooterView:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
