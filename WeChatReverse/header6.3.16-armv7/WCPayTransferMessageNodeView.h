//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

@class UILabel;

@interface WCPayTransferMessageNodeView : BaseMessageNodeView
{
    UILabel *moneyLable;
    UILabel *descLabel;
    UILabel *titleLabel;
    UILabel *detailLabel;
}

+ (BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)OnRetrySendMsg;
- (id)genCenterImage:(id)arg1;
- (id)getBackgroundImage;
- (id)getBackgroundImageHL;
- (id)getMoreMainInfomationAccessibilityDescription;
- (void)layoutSubviewsInternal;
- (void)onClearResource;
- (void)onClick;
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
- (void)showOpearation;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)updateBkgImage:(BOOL)arg1;
- (void)updateStatus:(id)arg1;
- (void)updateThumbImage;

@end

