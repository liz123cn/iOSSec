//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMusicPlayerExt.h"
#import "MMMusicPageViewDelegate.h"
#import "MMScrollActionSheetDelegate.h"
#import "MMTipsViewControllerDelegate.h"
#import "SendAppMsgHandleDelegate.h"
#import "ShakeCheckerDelegate.h"
#import "ShareUploadTaskConfirmLogicHelperDelegate.h"
#import "UIScrollViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class CShakeChecker, MMAnimationTipView, MMMusicInfo, MMMusicPageView, MMMusicPlayerModeTipView, MMScrollActionSheet, MMScrollView, MMTipsViewController, NSMutableArray, NSString, SendAppMsgHandler, UIButton, UIImageView;

@interface MMMultipleMusicViewController : MMUIViewController <WCActionSheetDelegate, ShareUploadTaskConfirmLogicHelperDelegate, SendAppMsgHandleDelegate, UIScrollViewDelegate, MMScrollActionSheetDelegate, MMMusicPageViewDelegate, ShakeCheckerDelegate, IMusicPlayerExt, MMTipsViewControllerDelegate>
{
    MMScrollView *_musicPageScrollView;
    MMMusicPageView *_leftPageView;
    MMMusicPageView *_centerPageView;
    MMMusicPageView *_rightPageView;
    NSMutableArray *_musicInfoArray;
    MMMusicInfo *_curMusicInfo;
    int _numberOfPages;
    unsigned int _currentPageIndex;
    SendAppMsgHandler *_sendAppMsgHandler;
    BOOL _isSingleLyricPage;
    float _offset;
    UIImageView *_bottomView;
    UIButton *_playMusicButton;
    MMAnimationTipView *_tipView;
    MMMusicPlayerModeTipView *_transModeTipView;
    int _pushedFromType;
    BOOL _isFromShaking;
    MMScrollActionSheet *_scrollActionSheet;
    CShakeChecker *_shakeChecker;
    BOOL _isOnShakeCheck;
    unsigned long long _beginShakeTime;
    unsigned long long _endShakeTime;
    unsigned long long _startEntranceTime;
    MMTipsViewController *_easterEggTipView;
    MMMusicPlayerModeTipView *_justOneSongTipView;
    BOOL _bLayoutScrollView;
    int _playMode;
}

- (void).cxx_destruct;
- (void)OnGetSongAlbumUrl:(id)arg1 AlbumUrl:(id)arg2;
- (void)OnSendAppMsgOK;
- (void)OnShake;
- (void)OnUpdateDuarationOnForeGround;
- (void)addGestureRecognizers;
- (void)beginPlayCurMusic;
- (void)cancelSetShakePage;
- (void)commonInit;
- (void)dealloc;
- (id)getCoverImageData;
- (id)getEasterEggcontentTip;
- (id)getMessageWrap:(id)arg1;
- (unsigned long)getSceneByPushFromType:(int)arg1;
- (id)getUpLoadTask:(id)arg1;
- (unsigned int)indexOfCurrentPage;
- (id)initFromBanner;
- (void)initMusicPlayBtn;
- (void)initNavigationItem;
- (void)initPageInfo;
- (void)initScrollView;
- (void)initSelfView;
- (void)initView;
- (id)initWithMusicInfo:(id)arg1 withMusicListSource:(int)arg2 withOffset:(float)arg3;
@property(nonatomic) BOOL isFromShaking; // @synthesize isFromShaking=_isFromShaking;
- (void)layoutMusicPageView;
- (void)layoutMusicPlayBtn;
- (void)layoutScrollView;
- (void)layoutTipView;
- (void)onBack2FirstPage;
- (void)onClickTipsBtn:(unsigned int)arg1;
- (void)onFollowArrayUpToShowSecondPage;
- (void)onLyricsChanged:(id)arg1 Lyrics:(id)arg2;
- (void)onMinimizeMusicPlayer;
- (void)onMusicPlayStatusChanged;
- (void)onPlayMusicBtnClicked;
- (void)onPlayNextMusic;
- (void)onPlayPreviousMusic;
- (void)onShowCommonMore:(id)arg1;
- (void)onShowSecondPage;
- (void)onStatusBarHiddenChanged;
- (void)onSwipeScrollView;
- (void)onUpdateBottomBtnColor:(id)arg1;
@property(nonatomic) int playMode; // @synthesize playMode=_playMode;
- (void)playShakeSound;
- (void)playSoundByAQAudioPlayer:(id)arg1 type:(id)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)setMusicPageDelegate;
- (void)setPlayMusicButtonImage:(BOOL)arg1;
- (void)setPushedFromType:(int)arg1;
- (BOOL)shouldShowSearchPlayAllTip;
- (void)showEasterEgg;
- (void)startShakeCheck;
- (void)tileMusicPages;
- (void)transPlayMode;
- (void)updateButtomBtnColor:(id)arg1;
- (void)updateCurMusicInfo;
- (void)updateLogEntranceType;
- (void)updateMusicScrollView:(BOOL)arg1;
- (void)updateNavBarByColor:(id)arg1;
- (void)updateNavBarTintColorByColor:(id)arg1;
- (void)updatePlayBtn;
- (BOOL)useTransparentNavibar;
- (void)userDidTakeScreenshot:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

