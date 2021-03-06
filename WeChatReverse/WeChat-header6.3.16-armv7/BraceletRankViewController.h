//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BraceletRankInfoViewDelegate.h"
#import "IDeviceRankProfileMgrExt.h"
#import "IDeviceRankSnsMgrExt.h"
#import "MMImageLoaderObserver.h"
#import "UIActionSheetDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class DeviceRankInfo, MMTableView, MMUILabel, MMWebImageView, NSArray, NSDictionary, NSMutableArray, NSMutableSet, NSString, NSTimer, ShareMessageConfirmLogicHelper, UIImageView, UIView;

@interface BraceletRankViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIActionSheetDelegate, IDeviceRankSnsMgrExt, IDeviceRankProfileMgrExt, BraceletRankInfoViewDelegate, WCActionSheetDelegate, MMImageLoaderObserver>
{
    MMTableView *_tableView;
    UIView *_tableHeaderView;
    UIView *_championTipView;
    MMWebImageView *_championCoverView;
    UIImageView *_leaderView;
    MMUILabel *_tipLablel;
    NSString *_rankId;
    NSDictionary *_infoDic;
    NSString *_championUsername;
    NSString *_championCoverUrl;
    NSString *_championMotto;
    NSMutableArray *_rankInfoArray;
    NSMutableArray *_focusInfoArray;
    NSMutableArray *_focusArray;
    NSArray *_likeMeUserList;
    NSArray *_affectedUserList;
    NSTimer *m_disappearTimer;
    BOOL _bExpired;
    NSString *_nsScrollToName;
    NSString *_nsJumpChampionUrl;
    BOOL _isLikedCover;
    NSString *_donateStepsUrl;
    UIView *_championViewFix;
    UIView *_barBackgroundView;
    NSString *_nsShareTitle;
    NSString *_nsShareUrl;
    unsigned long _iEntranceScence;
    DeviceRankInfo *m_myselfRankInfo;
    NSMutableSet *friendLikeSet;
    ShareMessageConfirmLogicHelper *_m_shareToFriendHelper;
}

- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)OnBackTo3rdApp:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSendMessageCancel:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(int)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)OnStayAtWeChat:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)animatChangeLikeStateForUser:(id)arg1 isTolikeState:(BOOL)arg2;
- (void)dealloc;
- (void)donateSteps;
- (id)genChampionView;
- (id)genShareFriendMessage:(id)arg1;
- (id)genUploadTask;
- (id)getHeaderImgUrl;
- (id)getMyselfHeadImageData;
- (void)initData;
- (id)initForLatestRank;
- (void)initNotSupportView;
- (void)initTableView;
- (void)initView;
- (id)initWithLikeUserInfoDictionary:(id)arg1;
- (id)initWithRankId:(id)arg1;
- (id)initWithRankInfoDictionary:(id)arg1 bExpire:(BOOL)arg2;
- (BOOL)isFocusMember:(id)arg1;
- (void)jumpToChampionUrl;
@property(retain, nonatomic) ShareMessageConfirmLogicHelper *m_shareToFriendHelper; // @synthesize m_shareToFriendHelper=_m_shareToFriendHelper;
- (void)makeCell:(id)arg1 AtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onAddFollowWithFollowItems:(id)arg1 error:(int)arg2;
- (void)onClickLike:(id)arg1;
- (void)onCoverImageChanged;
- (void)onDelFollowWithUserName:(id)arg1 error:(int)arg2;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onGotUserRankList:(id)arg1 aryUserRankList:(id)arg2 aryLikeMeList:(id)arg3 aryAffectedUserList:(id)arg4 championCoverUrl:(id)arg5 championMotto:(id)arg6 jumpChampionUrl:(id)arg7 shareUrl:(id)arg8 isCacheExist:(BOOL)arg9 shareTitle:(id)arg10 focusList:(id)arg11 isLikedCover:(BOOL)arg12 donationUrl:(id)arg13 err:(int)arg14;
- (void)onLikeFriendRank:(id)arg1 optype:(unsigned long)arg2 err:(int)arg3;
- (void)onRankInfoClicked:(id)arg1;
- (void)onRankProfile;
- (void)onShare;
- (void)onSingleTap:(id)arg1;
- (void)openChampionProfile;
- (void)reloadTable;
- (void)scrollToLikeUser;
- (void)scrollViewDidScroll:(id)arg1;
- (void)shareToFriend;
- (void)shareToTimeline;
- (void)showImagePicker:(int)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)updateCellBackgourd;
- (void)updateChampionView;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

