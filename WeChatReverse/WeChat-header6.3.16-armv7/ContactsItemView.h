//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class AttributeLabel, CContact, MMCPLabel, MMHeadImageView, MMWebImageView, NSString, SearchMatchTip, UIButton, UIImageView, UILabel;

@interface ContactsItemView : MMUIView
{
    MMCPLabel *m_nickNameLabel;
    UIButton *m_rightButton;
    UILabel *m_greyLabel;
    UILabel *m_userNameLabel;
    UILabel *m_addedLabel;
    MMHeadImageView *m_headImage;
    BOOL m_bShowHeadImage;
    UILabel *m_labelMemberCount;
    id m_data;
    id <ContactsItemViewDelegate> m_delegate;
    MMWebImageView *m_webHeadImageView;
    UIImageView *m_contactLogo;
    CContact *m_contact;
    BOOL m_bShowUserDescription;
    BOOL m_bUseDynamicSize;
    BOOL m_bShowSearchResult;
    SearchMatchTip *m_matchTip;
    AttributeLabel *m_descLabel;
    NSString *m_cpKeyForNickname;
    BOOL m_isNicknameUnsafe;
    float m_CustomLabelDecreaseWidth;
}

- (void).cxx_destruct;
- (struct CGRect)calNickNameFrame:(id)arg1;
- (id)init;
- (void)initAddedLabel:(id)arg1;
- (void)initContactLogo:(id)arg1;
- (void)initDescLabel;
- (void)initGrayLabel:(id)arg1 color:(id)arg2;
- (void)initGreenRightButton:(id)arg1;
- (void)initGreyRightButton:(id)arg1;
- (void)initHeadImage:(id)arg1;
- (void)initHeadImage:(id)arg1 withUrl:(id)arg2;
- (void)initHeadImageForContact:(id)arg1;
- (void)initHeadImageUrl:(id)arg1 withAuthorizationCode:(id)arg2 update:(BOOL)arg3;
- (void)initNickNameLabel:(id)arg1;
- (void)initRightPlaceAddLabel;
- (void)initRightPlaceAddedLabel;
- (void)initRightPlaceCenterAlignmentAddedLabelWithString:(id)arg1;
- (void)initRightPlaceDeleteLabel;
- (void)initRightPlaceWaitingLabel;
- (void)initSessionStyleView:(id)arg1;
- (void)initUserNameLabel:(id)arg1;
- (void)initView:(id)arg1;
- (void)initView:(id)arg1 showChatRoomName:(id)arg2;
- (BOOL)isShowMobileName:(id)arg1 mobileName:(id)arg2;
- (void)layoutSubviews;
@property(nonatomic) float m_CustomLabelDecreaseWidth; // @synthesize m_CustomLabelDecreaseWidth;
@property(nonatomic) BOOL m_bShowHeadImage; // @synthesize m_bShowHeadImage;
@property(nonatomic) BOOL m_bShowSearchResult; // @synthesize m_bShowSearchResult;
@property(nonatomic) BOOL m_bShowUserDescription; // @synthesize m_bShowUserDescription;
@property(nonatomic) BOOL m_bUseDynamicSize; // @synthesize m_bUseDynamicSize;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(retain, nonatomic) id m_data; // @synthesize m_data;
@property(nonatomic) __weak id <ContactsItemViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) AttributeLabel *m_descLabel; // @synthesize m_descLabel;
@property(retain, nonatomic) MMHeadImageView *m_headImage; // @synthesize m_headImage;
@property(retain, nonatomic) SearchMatchTip *m_matchTip; // @synthesize m_matchTip;
@property(retain, nonatomic) UILabel *m_nickNameLabel; // @synthesize m_nickNameLabel;
@property(retain, nonatomic) UILabel *m_userNameLabel; // @synthesize m_userNameLabel;
@property(retain, nonatomic) MMWebImageView *m_webHeadImageView; // @synthesize m_webHeadImageView;
- (void)onRightBtnAction;
- (void)setUserNameLabelToFitWidth;
- (void)showChatRoomCount:(id)arg1;
- (void)updateBackgroundColor:(id)arg1;
- (void)updateCPState;
- (void)updateHeadImageForContact:(id)arg1;
- (void)updateMatchLabel;
- (void)updateNickNameLabel;
- (void)updateUserNameLabel:(id)arg1;
- (void)updateView:(id)arg1;

@end
