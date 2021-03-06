//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "SessionSelectControllerDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCCommitViewResultDelegate.h"
#import "WCNetworkMediaCoreDelegate.h"
#import "WCNetworkMediaInfoDelegate.h"

@class MMProgressViewEx, MMTimer, MMUILabel, NSString, UIButton, UINavigationController, UIView, WCNetworkMediaCore, WCNetworkMediaInfo, WCNetworkMediaSlider, WCNetworkMediaStreamVideoInfo;

@interface WCNetworkMediaPlayer : MMUIViewController <WCNetworkMediaCoreDelegate, WCNetworkMediaInfoDelegate, WCActionSheetDelegate, SessionSelectControllerDelegate, WCCommitViewResultDelegate>
{
    UINavigationController *_shareToUserNavController;
    UINavigationController *_shareToTimelineNavController;
    BOOL m_bIsFromTimeLine;
    BOOL m_bShouldBeFirstFrame;
    int retryCount;
    BOOL m_bForbidFavMenu;
    BOOL m_bForbidMusic;
    id <WCNetworkMediaPlayerDelegate> m_delegate;
    NSString *m_url;
    NSString *m_vid;
    WCNetworkMediaInfo *m_info;
    WCNetworkMediaStreamVideoInfo *m_streamVideoInfo;
    WCNetworkMediaCore *m_mediaCore;
    UIView *m_topView;
    UIView *m_bottomView;
    UIButton *m_hideBtn;
    UIButton *m_showDetailBtn;
    MMUILabel *m_durationLabel;
    MMUILabel *m_currentLabel;
    UIButton *m_playBtn;
    UIButton *m_backBtn;
    UIButton *m_moreBtn;
    WCNetworkMediaSlider *m_progressSlider;
    MMProgressViewEx *m_loadingView;
    MMTimer *m_timer;
    struct CGSize m_videoSize;
}

- (void).cxx_destruct;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)couldShowDetailBtn;
- (void)dealloc;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (double)getMediaCurrentPosition;
- (double)getMediaDuration;
- (id)getStatExtString;
- (void)hideControlViews;
- (void)initData;
- (void)initMediaCore;
- (void)initView;
- (id)initWithInfo:(id)arg1;
- (id)initWithTimeLineAdVideo:(id)arg1;
- (id)initWithVid:(id)arg1;
- (BOOL)isControlViewsHidden;
@property(nonatomic) BOOL m_bForbidFavMenu; // @synthesize m_bForbidFavMenu;
@property(nonatomic) BOOL m_bForbidMusic; // @synthesize m_bForbidMusic;
@property(retain, nonatomic) UIButton *m_backBtn; // @synthesize m_backBtn;
@property(retain, nonatomic) UIView *m_bottomView; // @synthesize m_bottomView;
@property(retain, nonatomic) MMUILabel *m_currentLabel; // @synthesize m_currentLabel;
@property(nonatomic) __weak id <WCNetworkMediaPlayerDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MMUILabel *m_durationLabel; // @synthesize m_durationLabel;
@property(retain, nonatomic) UIButton *m_hideBtn; // @synthesize m_hideBtn;
@property(retain, nonatomic) WCNetworkMediaInfo *m_info; // @synthesize m_info;
@property(retain, nonatomic) MMProgressViewEx *m_loadingView; // @synthesize m_loadingView;
@property(retain, nonatomic) WCNetworkMediaCore *m_mediaCore; // @synthesize m_mediaCore;
@property(retain, nonatomic) UIButton *m_moreBtn; // @synthesize m_moreBtn;
@property(retain, nonatomic) UIButton *m_playBtn; // @synthesize m_playBtn;
@property(retain, nonatomic) WCNetworkMediaSlider *m_progressSlider; // @synthesize m_progressSlider;
@property(retain, nonatomic) UIButton *m_showDetailBtn; // @synthesize m_showDetailBtn;
@property(retain, nonatomic) WCNetworkMediaStreamVideoInfo *m_streamVideoInfo; // @synthesize m_streamVideoInfo;
@property(retain, nonatomic) MMTimer *m_timer; // @synthesize m_timer;
@property(retain, nonatomic) UIView *m_topView; // @synthesize m_topView;
@property(retain, nonatomic) NSString *m_url; // @synthesize m_url;
@property(retain, nonatomic) NSString *m_vid; // @synthesize m_vid;
@property(nonatomic) struct CGSize m_videoSize; // @synthesize m_videoSize;
- (void)onBackClick;
- (void)onCancelForwardForForwardView:(id)arg1;
- (void)onDidEnterBackground;
- (void)onDoneForwardForForwardView:(id)arg1;
- (void)onGotVideoUrl:(id)arg1 Error:(id)arg2;
- (void)onHideClick;
- (void)onMediaCore:(id)arg1 CacheDarutionChange:(double)arg2;
- (void)onMediaCore:(id)arg1 DarutionUpdate:(double)arg2;
- (void)onMediaCore:(id)arg1 StateChange:(int)arg2;
- (void)onMediaCore:(id)arg1 VideoSizeUpdate:(struct CGSize)arg2;
- (void)onMoreClick;
- (void)onPlayClick;
- (void)onShowDetail;
- (void)onSliderChange;
- (void)onWillEnterForeground;
- (void)refreshCurrentTime;
- (void)retryToLoadVideo;
- (void)sendVideoUrlToFriend;
- (void)shareToContact:(id)arg1;
- (void)shareToTimeline;
- (BOOL)shouldAutorotate;
- (BOOL)shouldInteractivePop;
- (void)showControlViews;
- (void)showControlViewsWithAutoHide;
- (id)stringFromTimeInterval:(double)arg1;
- (unsigned int)supportedInterfaceOrientations;
- (void)updateSubviewsFrame:(int)arg1;
- (void)updateVideoFrame:(int)arg1;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

