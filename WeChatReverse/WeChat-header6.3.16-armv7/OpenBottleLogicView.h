//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseBottleView.h"

#import "BottleAnimationDelegate.h"
#import "BottleTipViewDelegate.h"
#import "IBottleMgrExt.h"

@class BottleAudioView, BottleTextView, CBottle, CBottleContact, CMessageWrap, MMHDHeadImageView, MMHeadImageView, UIButton, UIImageView, UILabel, UIView;

@interface OpenBottleLogicView : BaseBottleView <BottleTipViewDelegate, BottleAnimationDelegate, IBottleMgrExt>
{
    CBottle *mBottleInfo;
    CBottleContact *mBottleContactInfo;
    CMessageWrap *mMessageInfo;
    UIView *mTopView;
    MMHeadImageView *mHeadImageView;
    MMHDHeadImageView *mHDHeadImageView;
    UILabel *mSignClickLabel;
    UIImageView *mSignView;
    UIView *mBottomView;
    UIButton *mThrowBackBtn;
    UIButton *mReplyBtn;
    BottleAudioView *mAudioView;
    BottleTextView *mTextView;
}

- (void).cxx_destruct;
- (void)BottleAnimationThrowFinish:(id)arg1;
- (void)BottleTipPressButton:(id)arg1 withButtonTitle:(id)arg2;
- (void)OnThrowBack:(unsigned long)arg1;
- (void)OnThrowBackFail;
- (void)clearUnRead;
- (void)dealloc;
- (void)drawOnCanvas;
- (void)exposeBottle;
- (id)init;
- (id)initWithCanvas:(id)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) BottleAudioView *mAudioView; // @synthesize mAudioView;
@property(retain, nonatomic) CBottleContact *mBottleContactInfo; // @synthesize mBottleContactInfo;
@property(retain, nonatomic) CBottle *mBottleInfo; // @synthesize mBottleInfo;
@property(retain, nonatomic) UIView *mBottomView; // @synthesize mBottomView;
@property(retain, nonatomic) MMHDHeadImageView *mHDHeadImageView; // @synthesize mHDHeadImageView;
@property(retain, nonatomic) MMHeadImageView *mHeadImageView; // @synthesize mHeadImageView;
@property(retain, nonatomic) CMessageWrap *mMessageInfo; // @synthesize mMessageInfo;
@property(retain, nonatomic) UIButton *mReplyBtn; // @synthesize mReplyBtn;
@property(retain, nonatomic) UILabel *mSignClickLabel; // @synthesize mSignClickLabel;
@property(retain, nonatomic) UIImageView *mSignView; // @synthesize mSignView;
@property(retain, nonatomic) BottleTextView *mTextView; // @synthesize mTextView;
@property(retain, nonatomic) UIButton *mThrowBackBtn; // @synthesize mThrowBackBtn;
@property(retain, nonatomic) UIView *mTopView; // @synthesize mTopView;
- (void)setBottle:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)showBottomView;
- (void)showMessageView;
- (void)showPreviewAudioView;
- (void)showPreviewTextView;
- (void)showTopView;
- (void)showView;
- (void)throw_ok;
- (void)toggleReply:(id)arg1;
- (void)toggleThrowBack:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;

@end

