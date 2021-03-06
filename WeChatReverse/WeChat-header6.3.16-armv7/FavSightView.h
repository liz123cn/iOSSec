//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "SightIconViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class CAGradientLayer, FavSightWindow, NSString, SightIconView, SightPlayerView, SimpleSightInfo, UIView;

@interface FavSightView : MMUIView <SightIconViewDelegate, WCActionSheetDelegate>
{
    SimpleSightInfo *m_sightInfo;
    FavSightWindow *m_sightWindow;
    SightPlayerView *m_playerView;
    id <FavSightViewDelegate> m_delegate;
    SightIconView *m_progressView;
    BOOL bIsSyncComplete;
    int m_currMaskType;
    BOOL fullScreenMode;
    CAGradientLayer *m_layer;
    UIView *m_transparentCoverView;
    unsigned int _sightLegalityType;
    BOOL _supportLandscape;
}

- (void).cxx_destruct;
- (void)checkLegalityWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)fullScreenPlay:(id)arg1;
- (float)getSightHeight;
- (struct CGSize)getSightSizeWithMaxSize:(struct CGSize)arg1;
- (void)initCoverMask;
- (void)initPlayerView;
- (void)initView;
- (id)initWithFavDataSource:(id)arg1;
- (id)initWithSimpleSightInfo:(id)arg1 fullScreenMode:(BOOL)arg2;
- (BOOL)isAd;
- (BOOL)isFileExistAndVideoPlayable:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) __weak id <FavSightViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) SightPlayerView *m_playerView; // @synthesize m_playerView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onClickSight;
- (void)onProgressEnd;
- (void)pause;
- (void)resize:(struct CGSize)arg1;
- (void)setDownFail;
- (void)setDownFinsh;
- (void)setFinishedLength:(long)arg1 TotalLength:(long)arg2;
@property(nonatomic) BOOL supportLandscape; // @synthesize supportLandscape=_supportLandscape;
- (void)showCoverMask:(int)arg1;
- (void)tryToPlay:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

