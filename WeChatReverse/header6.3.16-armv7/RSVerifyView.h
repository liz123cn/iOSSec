//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIImageView.h"

#import "RSVerifyAnimationViewDelegate.h"

@class MMHeadImageView, NSString, RSHeadImageView, RSVerifyAnimationView, UIButton, UIImageView, UILabel;

@interface RSVerifyView : MMUIImageView <RSVerifyAnimationViewDelegate>
{
    MMHeadImageView *_imageView;
    UIImageView *_headBGView;
    UILabel *_displayName;
    RSVerifyAnimationView *_animationView;
    UIButton *_statusFrame;
    UILabel *_helloLabel;
    UIButton *_remarkBtn;
    UIButton *_addFriendBtn;
    UIButton *_exposeBtn;
    RSHeadImageView *_headImage;
    id <RSVerifyViewDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <RSVerifyViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doSetRemark:(id)arg1;
- (void)doShowAddFriendButtonAnimation;
- (void)doShowStatusFrameAnimation;
- (void)hideSelf;
- (void)initAddFriendButton;
- (void)initAnimationView;
- (void)initBackgroundView;
- (void)initDisplayNameLabel;
- (void)initExposeButton;
- (void)initHeadView;
- (void)initHelloLabel;
- (void)initRemarkBtn;
- (void)initStatusFrame;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)onAddFriend;
- (void)onAnimationFinish:(BOOL)arg1;
- (void)onExpose;
- (void)onSetRemark;
- (void)startAnimationWithUsername:(id)arg1 OriginPoint:(struct CGPoint)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

