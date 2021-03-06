//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReaderNewMessageNodeView.h"

@class CTRichTextView;

@interface HeadImgReaderMessageNodeaView : ReaderNewMessageNodeView
{
    CTRichTextView *m_ctRichTextView;
}

+ (BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (BOOL)CanResponseClicked;
- (BOOL)CanWillShowReader:(id)arg1;
- (void)ShowReader:(id)arg1;
- (void)clickNodeViewBtn:(id)arg1;
- (void)forwardMessage;
- (id)getAsyncImageWithFrame:(struct CGRect)arg1;
- (id)getBigVideoImage;
- (id)getItemDesc:(float)arg1 forReaderWrap:(id)arg2;
- (id)getItemLabel:(id)arg1 with:(float)arg2 size:(float)arg3;
- (id)getItemTitle:(float)arg1;
- (id)getSmallVideoImage;
- (id)getTitleString:(id)arg1 bBig:(BOOL)arg2 bGray:(BOOL)arg3;
- (BOOL)isTouchInView:(id)arg1;
- (float)itemInsideWidth;
- (void)layoutSubviewsInternal;
- (void)onClearResource;
- (void)onClicked;
- (void)onDisappear;
- (void)onFavoriteAdd:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onHeadImageClick;
- (void)onLongTouch;
- (void)onMenuItemWillHide;
- (void)onTouchCancel;
- (void)onTouchDown;
- (void)onTouchDownRepeat;
- (void)onTouchUpInside;
- (void)reLayoutSubviews;
- (float)readerItemHMargin;
- (float)readerItemLMargin;
- (float)readerItemLeftInset;
- (float)readerViewWidth;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)updateBkgImage:(BOOL)arg1;
- (void)updateStatus:(id)arg1;

@end

