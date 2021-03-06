//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCContentItemBaseView.h"

#import "SessionSelectControllerDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCSightViewDelegate.h"

@class NSString, WCSightView;

@interface WCContentItemViewTemplateNewSight : WCContentItemBaseView <WCActionSheetDelegate, SessionSelectControllerDelegate, WCSightViewDelegate>
{
    WCSightView *_sightView;
    unsigned int _legalityType;
}

+ (float)heightForMedia:(id)arg1 showDetail:(BOOL)arg2;
- (void).cxx_destruct;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (id)getVisibleViewController;
- (void)initViewsWithWCDataItem:(id)arg1;
- (id)initWithWCDataItem:(id)arg1;
- (id)initWithWCDataItem:(id)arg1 showDetail:(BOOL)arg2;
- (id)initWithWCDataItem:(id)arg1 showDetail:(BOOL)arg2 withScene:(unsigned int)arg3;
- (void)jumpToDetail:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) unsigned int legalityType; // @synthesize legalityType=_legalityType;
- (void)onClickWCSight:(id)arg1;
- (void)onExposeWithDataItem;
- (void)onFavoriteAdd:(id)arg1;
- (void)onJumpToViewDetail:(id)arg1;
- (void)onLongPressedWCSight:(id)arg1;
- (void)onLongPressedWCSightFullScreenWindow:(id)arg1;
- (void)onLongTouch;
- (void)onMore:(id)arg1;
- (void)onShowSightAction;
- (void)sendSightToFriend;
- (id)sightVideoPath;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

