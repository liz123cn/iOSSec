//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ReaderNewMessageNodeView.h"

@interface ImageTextReaderMessageNodeView : ReaderNewMessageNodeView
{
}

+ (BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (BOOL)CanResponseClicked;
- (BOOL)CanWillShowReader:(id)arg1;
- (float)calLabelHeight:(id)arg1 maxWidth:(float)arg2 fone:(id)arg3;
- (float)calLabelWidth:(id)arg1 maxWidth:(float)arg2 fone:(id)arg3;
- (void)forwardMessage;
- (id)genLabel:(id)arg1 maxWidth:(float)arg2 fone:(id)arg3;
- (id)getPubTimeString:(id)arg1;
- (BOOL)hasHeadImageAndNickName;
- (void)layoutSubviewsInternal;
- (void)onFavoriteAdd:(id)arg1;
- (void)onHeadImageClick;
- (void)onLongTouch;
- (void)onMenuItemWillHide;
- (void)onOPButtonClicked:(id)arg1;
- (void)onReaderViewClicked;
- (void)onTouchCancel;
- (void)onTouchDown;
- (void)onTouchDownRepeat;
- (void)onTouchUpInside;
- (void)openWebUrl:(id)arg1;
- (void)reLayoutSubviews;
- (float)readerContentLMargin;
- (float)readerContentWidth;
- (float)readerLineLMargin;
- (float)readerViewWidth;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)updateBkgImage:(BOOL)arg1;

@end

