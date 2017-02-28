//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIControl.h"

#import "IUiUtilExt.h"
#import "SightIconViewDelegate.h"
#import "SightPlayerViewDelegate.h"
#import "UIActionSheetDelegate.h"
#import "WCFacadeExt.h"
#import "WCNetworkMediaPlayerDelegate.h"
#import "WCSightFullPlayViewControllerDelegate.h"

@class MMAVPlayerItemWrap, MMUIWindow, NSString, SightIconView, SightPlayerView, UIImageView, UIView, WCDataItem, WCMediaItem, WCSightFullPlayViewController;

@interface WCSightView : MMUIControl <SightPlayerViewDelegate, SightIconViewDelegate, WCNetworkMediaPlayerDelegate, IUiUtilExt, WCFacadeExt, UIActionSheetDelegate, WCSightFullPlayViewControllerDelegate>
{
    BOOL m_bIsLongPressHandled;
    UIImageView *m_thumbImg;
    WCDataItem *m_dataItem;
    MMUIWindow *m_fullScreenWindow;
    UIView *m_fullScreenContent;
    UIView *m_fullScreenTips;
    SightPlayerView *m_playerView;
    MMAVPlayerItemWrap *m_playerWrap;
    SightIconView *m_progressView;
    UIView *m_coverMask;
    int m_currMaskType;
    struct CGRect sightRectInTimeLine;
    WCSightFullPlayViewController *m_attachFullPlayViewController;
    BOOL m_fullScreenPlaying;
    BOOL m_waitFullScreenPlaying;
    BOOL m_isLoading;
    BOOL m_bfullScreenPlayAttachVideo;
    BOOL m_bHasAlreadyDownLoadVideo;
    BOOL m_bCachedRealDownloadProgress;
    BOOL m_bTimelineScene;
    int m_currentPage;
    struct CGSize m_initPlayerSize;
    BOOL m_bHasPlayedOnceForTips;
    BOOL m_closeForViewDetail;
    BOOL m_isImageReady;
    BOOL m_isSightReady;
    WCMediaItem *m_mediaData;
    id <WCSightViewDelegate> m_delegate;
    NSString *m_SightPath;
    NSString *_m_cpKey;
}

- (void).cxx_destruct;
- (void)LongPressEvents:(id)arg1;
- (void)OnWCTimeLineWillBePopedNotify:(id)arg1;
- (void)WCTimeLineWillAppearNotify:(id)arg1;
- (void)addObservers;
- (void)animationShow:(BOOL)arg1;
- (void)cacheFakeProgressValue;
- (struct CGSize)calNewSizeForSightPlayer:(float)arg1 videoHeight:(float)arg2 frameWidth:(float)arg3 frameHeight:(float)arg4;
- (float)calSightVideoMaxHeight;
- (float)calSightViedoCenterY;
- (float)calTransformScale:(float)arg1 videoHeight:(float)arg2 frameWidth:(float)arg3 frameHeight:(float)arg4;
- (void)clearAttachVideoResource;
- (void)clearShortVideo;
- (void)clickFullScreenWindow;
- (void)dealloc;
- (void)endViewStreamVideo;
- (void)endViewVideo;
- (void)exitFullScreenPlay;
- (id)getImage;
- (id)getRootView:(id)arg1;
- (void)hideCoverMaskWithAnim:(BOOL)arg1;
- (void)initCoverMask;
- (void)initData:(id)arg1;
- (void)initFullPlayWindow;
- (id)initWithMediaData:(id)arg1;
- (id)initWithMediaData:(id)arg1 withFrame:(struct CGRect)arg2;
- (BOOL)isAutoDownLoadVideo;
- (BOOL)isAutoPlayVideo;
- (BOOL)isFullScreenPlaying;
- (BOOL)isSightVideoExist;
- (void)layoutSubviews;
- (void)longPressFullScreenWindow:(id)arg1;
@property(retain, nonatomic) NSString *m_SightPath; // @synthesize m_SightPath;
@property(nonatomic) BOOL m_bTimelineScene; // @synthesize m_bTimelineScene;
@property(retain, nonatomic) NSString *m_cpKey; // @synthesize m_cpKey=_m_cpKey;
@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem;
@property(nonatomic) __weak id <WCSightViewDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) BOOL m_isImageReady; // @synthesize m_isImageReady;
@property(readonly, nonatomic) BOOL m_isSightReady; // @synthesize m_isSightReady;
@property(readonly, nonatomic) WCMediaItem *m_mediaData; // @synthesize m_mediaData;
- (void)makeFakeProgress;
- (void)onBeginDownload:(id)arg1 downloadType:(int)arg2;
- (void)onCancelShareVideoToFriend;
- (void)onClick;
- (void)onClickFavVideoMenu;
- (void)onClickFullPlayView;
- (void)onClickFullPlayViewForViewAttachVideo;
- (void)onClickPlayAttachVideoBtn:(id)arg1;
- (void)onClickWCSight:(id)arg1;
- (void)onClosePlayer;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onDoubleClickWCSight:(id)arg1;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(int)arg2 current:(int)arg3 total:(int)arg4;
- (void)onEndFullPlay;
- (void)onFullSightPlayEnd:(BOOL)arg1;
- (void)onItemCleared;
- (void)onLongPressFullPlayView;
- (void)onMainWindowFrameChanged;
- (void)onOrientationChanged;
- (void)onPausePlayer;
- (BOOL)onPlayEnd:(BOOL)arg1;
- (void)onProgressEnd;
- (void)onReadyForSight;
- (void)onResume;
- (void)onServiceEnterBackground:(id)arg1;
- (void)onServiceEnterForeground:(id)arg1;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onShareVideoToTimeline:(BOOL)arg1;
- (void)onStack;
- (void)onStartFullPlay;
- (void)onStartPlayer;
- (void)playAttachVideoInFullScreen;
- (void)playInFullScreen;
- (void)playLongVideoAdInFullScreen;
- (void)playShortVideo;
- (BOOL)processClickToPlayAttachVideoInFullScreenMode;
- (void)reloadSight;
- (void)reloadSightPreviewImage;
- (void)removeObservers;
- (void)restartShortVideo;
- (void)setFrame:(struct CGRect)arg1;
- (BOOL)shouldAutoPlay;
- (void)showCoverMask:(int)arg1;
- (void)showDownloadTooSlow;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)stopPlayAttachVideo;
- (void)stopPlayShortVideo;
- (void)tryAddAdAttachVideoPlayCount;
- (void)tryAddAdShortVideoPlayCount;
- (void)tryLogAdAttachVideoStartPlayTime;
- (void)tryLogAdShortVideoStartPlayTime;
- (void)tryResetAdAttachVideoEndPlayTime;
- (void)tryResetAdShortVideoEndPlayTime;
- (void)tryRotateOrientation;
- (void)willAnimateRotation:(BOOL)arg1;
- (void)willMoveToSuperview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
