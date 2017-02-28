//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class CEnterpriseContact, MMCPLabel, MMHeadImageView, UIButton, UILabel;

@interface EnterpriseContactItemView : MMUIView
{
    CEnterpriseContact *_contact;
    MMCPLabel *_nickNameLabel;
    MMHeadImageView *_headImage;
    UIButton *_rightButton;
    UILabel *_memberCountLabel;
    id <EnterpriseContactItemViewDelegate> delegate;
}

- (void).cxx_destruct;
- (struct CGRect)calcMemberCountFrame:(id)arg1;
- (struct CGRect)calcNickNameFrame:(id)arg1;
- (struct CGRect)calcRightButtonFrame:(id)arg1;
@property(nonatomic) __weak id <EnterpriseContactItemViewDelegate> delegate; // @synthesize delegate;
- (void)initGreyRightButton:(id)arg1;
- (void)initHeadImageForContact:(id)arg1;
- (void)initMemberCountLabel:(id)arg1;
- (void)initNickNameLabel:(id)arg1;
- (void)initView:(id)arg1;
- (void)layoutSubviews;
- (void)onRightBtnClicked;
- (void)updateHeadImageForContact:(id)arg1;
- (void)updateNickNameLabel;
- (void)updateView:(id)arg1;

@end
