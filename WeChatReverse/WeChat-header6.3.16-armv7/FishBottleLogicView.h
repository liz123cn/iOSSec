//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseBottleView.h"

#import "BottleAnimationDelegate.h"
#import "BottleTipViewDelegate.h"
#import "IBottleMgrExt.h"

@class CBottle, MMHeadImageView, OpenBottleLogicView;

@interface FishBottleLogicView : BaseBottleView <BottleTipViewDelegate, BottleAnimationDelegate, IBottleMgrExt>
{
    unsigned long mBottleLocalId;
    unsigned long mBottleMessageType;
    unsigned long mFishStatus;
    CBottle *mBottle;
    OpenBottleLogicView *mOpenLogicView;
    MMHeadImageView *mHeadImageView;
}

- (void).cxx_destruct;
- (void)BottleAnimationClickBottle:(id)arg1;
- (void)BottleAnimationClickStar:(id)arg1;
- (void)BottleAnimationFishFinish:(id)arg1;
- (id)BottleAnimationGetBrandHeadUrl:(id)arg1;
- (id)BottleAnimationGetBrandUserName:(id)arg1;
- (void)BottleTipPressButton:(id)arg1 withButtonTitle:(id)arg2;
- (void)OnFishBottleFail:(unsigned long)arg1;
- (void)OnFishBottleOK:(unsigned long)arg1 fishCount:(unsigned long)arg2 msgType:(unsigned long)arg3 userName:(id)arg4 bottle:(id)arg5;
- (void)OnOpenBottleFail;
- (void)OnOpenBottleOK:(id)arg1 Contact:(id)arg2 MsgWrap:(id)arg3;
- (void)OnThrowBack:(unsigned long)arg1;
- (void)OnThrowBackFail;
- (void)dealloc;
- (void)doAnimation;
- (void)drawOnCanvas;
- (void)fish_over;
- (void)fish_star;
- (void)handleOpenBrandUserBottle:(id)arg1;
- (id)init;
- (id)initWithCanvas:(id)arg1;
@property(retain, nonatomic) MMHeadImageView *mHeadImageView; // @synthesize mHeadImageView;
@property(retain, nonatomic) OpenBottleLogicView *mOpenLogicView; // @synthesize mOpenLogicView;
- (void)toggleClose;
- (void)toggleOpenBottle:(unsigned long)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

