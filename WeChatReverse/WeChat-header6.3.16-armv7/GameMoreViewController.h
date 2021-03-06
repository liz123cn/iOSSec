//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "GameCenterGameInfoCellDelegate.h"
#import "GameCenterSearchLogicControllerDelegate.h"
#import "IGameCenterExt.h"
#import "MMRefreshTableFooterDelegate.h"
#import "MMWebImageViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GameCenterLoadingFooterView, GameCenterSearchLogicController, GameMoreGameInfo, MMLoadingView, MMTableView, NSString;

@interface GameMoreViewController : MMUIViewController <GameCenterGameInfoCellDelegate, GameCenterSearchLogicControllerDelegate, UITableViewDataSource, UITableViewDelegate, MMRefreshTableFooterDelegate, MMWebImageViewDelegate, IGameCenterExt>
{
    GameMoreGameInfo *_moreGameInfo;
    MMTableView *_tableView;
    GameCenterLoadingFooterView *_footerView;
    unsigned long _nextOffset;
    MMLoadingView *_loadingView;
    GameCenterSearchLogicController *_searchLogic;
    int _sourceScene;
    BOOL _isClassfiyGame;
    NSString *_classifyName;
    NSString *_classifyID;
}

- (void).cxx_destruct;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
@property(retain, nonatomic) NSString *classifyID; // @synthesize classifyID=_classifyID;
@property(retain, nonatomic) NSString *classifyName; // @synthesize classifyName=_classifyName;
- (void)dealloc;
- (void)gameInfoCellDownloadButtonClicked:(id)arg1;
- (id)getCachePath;
- (unsigned long)getGameType;
- (id)init;
- (void)initData;
- (void)initRightBarBtns;
- (void)initSearchLogic;
- (void)initView;
- (id)initWithSourceScene:(int)arg1;
@property(nonatomic) BOOL isClassfiyGame; // @synthesize isClassfiyGame=_isClassfiyGame;
- (void)loadCacheData;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onGetMoreGameList:(id)arg1 classifyID:(id)arg2 errCode:(int)arg3;
- (void)onLoadImageOK:(id)arg1;
- (void)onOpenSearchGameRecommendResultItem:(id)arg1;
- (void)onOpenSearchGameResultItem:(id)arg1 sourceScene:(int)arg2;
- (void)onOpenSearchWebResultItem:(id)arg1;
- (void)onStartSearch;
- (void)onStopSearch;
- (void)onSubscribeNewGameWithAppID:(id)arg1 alertTitle:(id)arg2 message:(id)arg3 extraInfo:(id)arg4 error:(int)arg5;
- (int)openDetailView:(id)arg1 sourceScene:(int)arg2;
- (void)popupSearchBar;
- (void)saveCacheData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchBarBecomeFirstResponder;
- (void)searchBarDidEndSearch;
- (void)showWebViewWithUrl:(id)arg1 title:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

