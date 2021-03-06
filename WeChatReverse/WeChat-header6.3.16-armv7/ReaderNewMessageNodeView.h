//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

@class NSArray;

@interface ReaderNewMessageNodeView : BaseMessageNodeView
{
    NSArray *m_arrBtnList;
}

+ (BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)ShowReader:(id)arg1;
- (void)addHeadImageForFavItemIfNoThumb:(id)arg1;
- (void)addHeadImageForMsgIfNoThumb:(id)arg1;
- (void)clickNodeViewBtn:(id)arg1;
- (void)forwardMessage;
- (id)getAsyncImageWithFrame:(struct CGRect)arg1;
- (id)getBigVideoImage;
- (id)getCurrentNodeAccessibilityDescription:(id)arg1;
- (id)getItemLabel:(id)arg1 with:(float)arg2 font:(id)arg3;
- (id)getItemTitle:(float)arg1;
- (id)getOrMakeBrandContact:(id)arg1 displayName:(id)arg2;
- (id)getSmallVideoImage;
- (id)getTitleString:(id)arg1 bBig:(BOOL)arg2 bGray:(BOOL)arg3;
- (id)headImageUrlOfChatContact;
- (BOOL)isTouchInView:(id)arg1;
- (void)layoutSubviewsInternal;
- (void)onClearResource;
- (void)onClicked;
- (void)onDisappear;
- (void)onFavoriteAdd:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onLongTouch;
- (void)onMenuItemWillHide;
- (void)onMoreOperate:(id)arg1;
- (void)onTouchCancel;
- (void)onTouchDown;
- (void)onTouchDownRepeat;
- (void)onTouchUpInside;
- (void)reLayoutSubviews;
- (BOOL)shouldDisplayReadAllButton;
- (BOOL)shouldGoToEmoticonDetail:(id)arg1;
- (void)showOpearation;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (id)timeToStr:(id)arg1;
- (void)updateBkgImage:(BOOL)arg1;
- (void)updateStatus:(id)arg1;

@end

