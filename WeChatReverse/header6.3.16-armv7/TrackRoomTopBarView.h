//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "TrackRoomHeadListItemDelegate.h"
#import "UIScrollViewDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, TrackRoomHeadListItem, UIButton, UILabel, UIScrollView, UIView;

@interface TrackRoomTopBarView : MMUIView <UIScrollViewDelegate, TrackRoomHeadListItemDelegate>
{
    id <TrackRoomTopBarViewDelegate> _delegate;
    UIButton *_closeButton;
    UIButton *_minimizeButton;
    UILabel *_tipsLabel;
    UIView *_headListContainer;
    UIScrollView *_headList;
    NSMutableArray *_headListItems;
    TrackRoomHeadListItem *_selectedHeadListItem;
    BOOL _getMicSuccess;
    NSMutableDictionary *_tipsArray;
}

- (void).cxx_destruct;
- (void)addHeadListItem:(id)arg1 UpdateTitle:(BOOL)arg2;
- (void)clearEnterExitTips;
- (void)dealloc;
@property(nonatomic) __weak id <TrackRoomTopBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doUpdateStrategy;
- (id)getHeadListItemByUsername:(id)arg1;
- (void)getMicFail;
- (void)getMicTimeout;
- (void)gettingMic;
- (void)giveUpMic;
- (void)imTalking;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)nobodyTalking;
- (void)onCloseButtonClick:(id)arg1;
- (void)onHeadListItemClick:(id)arg1;
- (void)onMinimizeButtonClick;
- (void)openTalkOk;
- (void)pause;
- (void)reConnecting;
- (void)reStart;
- (void)relayoutAllHeadListItem;
- (void)removeAllHeadListItem;
- (void)removeHeadListItem:(id)arg1;
- (void)removeTipsForOrderAndUpdate:(int)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)selecteHeadListItem:(id)arg1;
- (void)setTipsAndUpdate:(id)arg1 forOrder:(int)arg2;
- (void)someoneEnter:(id)arg1 ShowTips:(BOOL)arg2;
- (void)someoneLeave:(id)arg1 ShowTips:(BOOL)arg2;
- (void)someoneTalking:(id)arg1;
- (void)updateHeadItemAlpha:(id)arg1;
- (void)updateTipsLabel:(id)arg1 TextColor:(id)arg2;
- (void)updateTitle;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

