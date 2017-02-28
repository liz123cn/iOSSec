//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "IContactMgrExt.h"
#import "WCActionSheetDelegate.h"
#import "WCFacadeExt.h"

@class CContact, MMCPLabel, MMHeadImageView, MMUIViewController, NSString, UIImageView, UILabel;

@interface WCListHeaderView : MMUIView <IContactMgrExt, WCActionSheetDelegate, WCFacadeExt>
{
    CContact *m_contact;
    BOOL m_isMyWC;
    BOOL m_showSignature;
    struct CGRect m_bkgRect;
    MMCPLabel *m_nickLabel;
    MMCPLabel *m_signatureLabel;
    MMHeadImageView *m_headImageView;
    UILabel *m_totalCountLabel;
    MMUIViewController *viewController;
    UIImageView *m_headImageBkgView;
    UIImageView *m_bkgMaskView;
    UIImageView *m_backgroundImageView;
    struct CGRect oBackgroundImageRect;
    float m_fLastY;
    id <WCListHeaderViewDelegate> m_delegate;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForSignature;
    BOOL m_isNicknameUnsafe;
    BOOL m_isSignatureUnsafe;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (void)initView;
- (id)initWithContact:(id)arg1 bkgRect:(struct CGRect)arg2;
@property(retain, nonatomic) UIImageView *m_backgroundImageView; // @synthesize m_backgroundImageView;
@property(retain, nonatomic) UIImageView *m_bkgMaskView; // @synthesize m_bkgMaskView;
@property(nonatomic) struct CGRect m_bkgRect; // @synthesize m_bkgRect;
@property(nonatomic) __weak id <WCListHeaderViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIImageView *m_headImageBkgView; // @synthesize m_headImageBkgView;
@property(retain, nonatomic) MMHeadImageView *m_headImageView; // @synthesize m_headImageView;
@property(retain, nonatomic) UILabel *m_nickLabel; // @synthesize m_nickLabel;
@property(nonatomic) BOOL m_showSignature; // @synthesize m_showSignature;
- (void)onModifyContact:(id)arg1;
- (void)onWCBackgroundChanged;
- (void)onWCGroupSetMemberToGroupsReturn:(BOOL)arg1 username:(id)arg2 groupIDs:(id)arg3;
- (void)reloadBackGround;
- (void)scrollViewDidEndScroll:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
@property(nonatomic) __weak MMUIViewController *viewController; // @synthesize viewController;
- (void)showChangeBkgOption;
- (void)showContactInfo;
- (void)updateCPState;
- (void)updateframe;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

