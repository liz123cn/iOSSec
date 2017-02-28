//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "MMMusicPlayerContollerDelegate.h"
#import "MMWebViewDelegate.h"
#import "RichTextLayoutDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "WCForceTouchPreviewProtocol.h"
#import "WCImageViewDelegate.h"
#import "WCNetworkMediaPlayerDelegate.h"

@class MMMusicPlayerContoller, MMUIWindow, NSString, UIImageView, UILabel, WCImageView;

@interface WCContentItemViewTemplateClassic : WCContentItemBaseView <WCImageViewDelegate, RichTextLayoutDelegate, MMWebViewDelegate, UIGestureRecognizerDelegate, MMMusicPlayerContollerDelegate, WCNetworkMediaPlayerDelegate, WCForceTouchPreviewProtocol>
{
    UILabel *_titleLabel;
    UILabel *_descLabel;
    WCImageView *_coverImage;
    MMMusicPlayerContoller *_playButton;
    UIImageView *_defaultImageView;
    BOOL _forbidJumpUrl;
    BOOL _bMusicItemJumpToMusicVC;
    MMUIWindow *m_fullScreenWindow;
    int _currentPage;
    BOOL _bSceneFromSearch;
    BOOL _closeAdLongVideoForViewDetail;
}

+ (id)getTrimDesc:(id)arg1;
+ (float)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
- (void).cxx_destruct;
- (void)addFavorite;
@property(nonatomic) BOOL bSceneFromSearch; // @synthesize bSceneFromSearch=_bSceneFromSearch;
- (BOOL)canPeek;
@property(nonatomic) BOOL closeAdLongVideoForViewDetail; // @synthesize closeAdLongVideoForViewDetail=_closeAdLongVideoForViewDetail;
- (void)dealloc;
- (void)initViewsWithWCDataItem:(id)arg1;
- (void)jumpToDetail:(id)arg1;
- (void)jumpToViewStreamVideo;
- (void)layoutSubviews;
- (void)onClickFavVideoMenu;
- (void)onClickToPlayMusic:(id)arg1;
- (void)onClickWCImage:(id)arg1;
- (void)onClosePlayer;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onFavoriteAdd:(id)arg1;
- (void)onLongTouch;
- (void)onShareToOpenSDK:(id)arg1;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onShareVideoToTimeline:(BOOL)arg1;
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(id)arg2;
- (void)setHighlightedColor;
- (void)setNonInteractive;
- (void)setNormalColor;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)throwUrlMessage;
- (id)viewControllerToPreviewWithFromController:(id)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

