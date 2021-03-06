//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class NSString, UIButton, UIImageView, UILabel, UIView, WCYoAvatarView;

@interface WCYoHudViewController : MMUIViewController
{
    UIView *_containerView;
    UILabel *_nameLabel;
    UILabel *_descriptionLabel;
    UILabel *_timeLabel;
    WCYoAvatarView *_avatarView;
    UIImageView *_checkedMaskView;
    UIButton *_replyButton;
    NSString *_username;
    unsigned int _count;
    int _yoType;
    unsigned long _yoTime;
}

- (void).cxx_destruct;
- (void)addYoCount:(unsigned int)arg1 forUsername:(id)arg2 type:(int)arg3;
@property(retain, nonatomic) WCYoAvatarView *avatarView; // @synthesize avatarView=_avatarView;
- (void)changeUIWithYoType:(int)arg1;
@property(retain, nonatomic) UIImageView *checkedMaskView; // @synthesize checkedMaskView=_checkedMaskView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
- (void)dealloc;
@property(retain, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
- (void)didTapAvatarView:(id)arg1;
- (void)didTapReplyButton:(id)arg1;
- (void)doAvatarBounceAnimation;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
- (void)refreshDescriptionTime;
@property(retain, nonatomic) UIButton *replyButton; // @synthesize replyButton=_replyButton;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
@property(nonatomic) unsigned long yoTime; // @synthesize yoTime=_yoTime;
@property(nonatomic) int yoType; // @synthesize yoType=_yoType;
- (void)setupYoWithCount:(unsigned int)arg1 username:(id)arg2 type:(int)arg3;
- (void)setupYoWithCount:(unsigned int)arg1 username:(id)arg2 type:(int)arg3 nameLabelString:(id)arg4 descriptionString:(id)arg5 allowReply:(BOOL)arg6;
- (void)setupYoWithCount:(unsigned int)arg1 username:(id)arg2 type:(int)arg3 nameLabelString:(id)arg4 descriptionString:(id)arg5 timeString:(id)arg6 allowReply:(BOOL)arg7;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

