//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "GameCenterNewFeedsCellDelegate.h"
#import "GameCenterRankedGameInfoCellDelegate.h"
#import "GameCenterRecentGamesCellDelegate.h"
#import "GameCenterSearchLogicControllerDelegate.h"
#import "GameCenterUserActionCellDelegate.h"
#import "IGameCenterExt.h"
#import "IGameCenterMsgNotifyExt.h"
#import "MMSearchBarDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class GameCenterHomeData, GameCenterNotifyContent, GameCenterSearchLogicController, MMLoadingView, MMTableView, NSMutableArray, NSString, UIView;

@interface GameCenterNewHomeViewController : MMUIViewController <MMSearchBarDelegate, GameCenterSearchLogicControllerDelegate, UITableViewDelegate, UITableViewDataSource, GameCenterUserActionCellDelegate, GameCenterRecentGamesCellDelegate, IGameCenterExt, IGameCenterMsgNotifyExt, GameCenterNewFeedsCellDelegate, GameCenterRankedGameInfoCellDelegate>
{
    NSMutableArray *_resultGroupList;
    MMLoadingView *_loadingView;
    UIView *_bgBlurView;
    GameCenterSearchLogicController *_searchLogic;
    NSMutableArray *_sectionList;
    GameCenterHomeData *_homeData;
    MMTableView *_tableView;
    BOOL _fromFindFriendEntry;
    NSString *_adAppID;
    NSString *_adNoticeID;
    int _sourceScene;
    GameCenterNotifyContent *_gameCenterBubble;
    GameCenterNotifyContent *_msgCenterRedDotMsg;
    int _entryNotifyType;
    GameCenterNotifyContent *_giftRedDot;
}

- (void).cxx_destruct;
- (void)bubbleButtonClicked;
- (void)checkDBAutoRecover;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
@property(nonatomic) int entryNotifyType; // @synthesize entryNotifyType=_entryNotifyType;
- (void)feedBackButtonClicked;
- (id)feedGameInfo;
- (void)feedGameInfoClicked:(id)arg1;
- (id)feedItem;
@property(retain, nonatomic) GameCenterNotifyContent *gameCenterBubble; // @synthesize gameCenterBubble=_gameCenterBubble;
@property(retain, nonatomic) GameCenterNotifyContent *giftRedDot; // @synthesize giftRedDot=_giftRedDot;
- (void)handleDownloadButtonClicked:(id)arg1 Action:(int *)arg2;
- (id)init;
- (BOOL)initData;
- (void)initRightBarBtns;
- (void)initTableView;
- (id)initWithSourceScene:(int)arg1;
- (id)installedMore;
- (int)launchGameOrOpenDetailViewWithGameInfo:(id)arg1 sourceScene:(int)arg2;
- (id)libraryEntranceTitle;
- (id)makeBubbleCellWithReusableCell:(id)arg1 identifier:(id)arg2;
- (id)makeFeedBackCellWithReusableCell:(id)arg1 identifier:(id)arg2;
- (id)makeFeedsFriendCellWithReusableCell:(id)arg1 identifier:(id)arg2;
- (id)makeFeedsGameCellWithReusableCell:(id)arg1 identifier:(id)arg2;
- (id)makeMoreGamesCellWithReusableCell:(id)arg1 identifier:(id)arg2;
- (id)makeMyActionsCellWithReusableCell:(id)arg1 identifier:(id)arg2;
- (id)makePromotedGameCellWithReusableCell:(id)arg1 identifier:(id)arg2 index:(int)arg3;
- (id)makeRecentCellWithReusableCell:(id)arg1 identifier:(id)arg2;
@property(retain, nonatomic) GameCenterNotifyContent *msgCenterRedDotMsg; // @synthesize msgCenterRedDotMsg=_msgCenterRedDotMsg;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onFetchGameCenterHomeData:(id)arg1 error:(int)arg2;
- (void)onGameCenterClearAllRedDot;
- (void)onGameCenterDeleteAllMsg;
- (void)onGameCenterDeleteOneMsg:(unsigned long)arg1;
- (void)onInstalledMoreIconClicked:(id)arg1;
- (void)onOpenSearchGameRecommendResultItem:(id)arg1;
- (void)onOpenSearchGameResultItem:(id)arg1 sourceScene:(int)arg2;
- (void)onOpenSearchWebResultItem:(id)arg1;
- (void)onRecentGameIconClicked:(id)arg1;
- (void)onStartSearch;
- (void)onStopSearch;
- (void)openGameDetailViewWithGameInfo:(id)arg1 sourceScene:(int)arg2;
- (void)openGameListView;
- (id)promotedGames;
- (void)rankedGameInfoCellDownloadButtonClicked:(id)arg1;
- (id)recentGames;
- (void)reloadAfterRedDotChanged;
- (void)reloadRows;
- (void)reloadSections;
- (void)searchBarBecomeFirstResponder;
- (void)searchBarDidEndSearch;
- (BOOL)shouldShowBubble;
- (BOOL)shouldShowFeedBackEntrance;
- (void)showSettingView;
- (void)showWebViewWithUrl:(id)arg1 title:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (id)titleOfSectionType:(unsigned int)arg1;
- (unsigned int)typeOfRow:(id)arg1;
- (unsigned int)typeOfSection:(int)arg1;
- (void)updateSearchLogic;
- (void)userActionButtonClickedAtIndex:(unsigned int)arg1;
- (id)userActionCellItems;
- (id)userInfo;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

