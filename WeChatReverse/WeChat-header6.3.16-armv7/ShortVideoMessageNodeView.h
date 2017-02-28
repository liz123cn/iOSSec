//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

#import "IMsgExt.h"
#import "IMsgRevokeExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "IVideoExt.h"
#import "IWXVideoPlayerViewExt.h"
#import "SightIconViewDelegate.h"
#import "SightPlayerViewDelegate.h"

@class MMAVPlayerItemWrap, NSString, SightIconView, SightPlayerView, UIImageView, UIView;

@interface ShortVideoMessageNodeView : BaseMessageNodeView <IVOIPUILogicMgrExt, IWXVideoPlayerViewExt, IMsgRevokeExt, IVideoExt, IMsgExt, SightPlayerViewDelegate, SightIconViewDelegate>
{
    UIImageView *m_thumbImg;
    SightPlayerView *m_playerView;
    MMAVPlayerItemWrap *m_playerWrap;
    SightIconView *m_progressView;
    UIView *m_transparentCoverView;
    UIView *m_coverMask;
    struct CGRect m_vedioFrame;
    int m_currMaskType;
    BOOL m_isLoading;
    BOOL m_isClickDownload;
    unsigned int _sightLegalityType;
    BOOL _mayBeIllegalAD;
}

+ (BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
- (void)OnThumbDownloadOK:(id)arg1;
- (void)OnUpdateVideoStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnVideoGetIntoUploadQueue:(id)arg1;
- (void)UpdateVideoMsg:(id)arg1;
- (BOOL)canAutoPlaySettingFromServer;
- (void)checkLegalityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)clearShortVideo;
- (void)commonInit;
- (void)dealloc;
- (id)getMessageDisplayView;
- (void)hideCoverMaskWithAnim:(BOOL)arg1;
- (void)initCoverMask;
- (id)initWithMessageWrap:(id)arg1 Contact:(id)arg2 ChatContact:(id)arg3;
- (BOOL)isInFlowControl;
- (BOOL)isSendFailed;
- (void)layoutSubviews;
- (void)layoutSubviewsInternal;
- (id)makeRecieverMaskLayer;
- (id)makeRecieverPath:(float)arg1;
- (id)makeSenderMaskLayer;
- (id)makeSenderPath:(float)arg1;
- (void)onAppear;
- (void)onClick;
- (void)onFavoriteAdd:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onItemCleared;
- (void)onLongTouch;
- (void)onMoreOperate:(id)arg1;
- (void)onProgressEnd;
- (void)onResume;
- (void)onStack;
- (void)onTouchUpInside;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (void)onWXVideoPlayerViewPlay:(id)arg1;
- (void)playShortVideo;
- (void)reLayoutSubviews;
- (void)setProgress:(unsigned long)arg1;
- (BOOL)shouldAutoDownload;
- (BOOL)shouldAutoPlay;
- (void)showCoverMask:(int)arg1;
- (void)showOpearation;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)stopPlayShortVideo;
- (id)thumbImage;
- (struct CGSize)videoSizeForThumbSize:(struct CGSize)arg1;
- (void)willMoveToSuperview:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
