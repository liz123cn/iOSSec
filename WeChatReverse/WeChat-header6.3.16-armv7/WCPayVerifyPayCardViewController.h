//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"

@class NSString, RichTextView, UIButton, UILabel, WCBaseKeyboardToolBar, WCPayInputTextInfoCtrlItem;

@interface WCPayVerifyPayCardViewController : WCPayBaseViewController <ILinkEventExt>
{
    UIButton *m_footerButton;
    WCPayInputTextInfoCtrlItem *m_textFieldItem;
    UIButton *m_sendVerifyCodeBtn;
    UILabel *m_sendVerifyCodeLabel;
    int m_iCountDown;
    NSString *m_nsHeaderTip;
    NSString *m_nsHeaderTipForCustom;
    RichTextView *richTextView;
    WCBaseKeyboardToolBar *m_keyboardBar;
    id <WCPayVerifyPayCardViewControllerDelegate> m_delegate;
    BOOL bShowedModifyBtn;
}

- (void).cxx_destruct;
- (void)OnModifyPhoneBtn;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)autoInputVerifyCode:(id)arg1;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)initSendVerifyCodeButton;
- (void)makeInfoCell:(id)arg1;
- (void)onAlertModifyPhone;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onNext;
- (void)onSendVerifyCodeClicked:(id)arg1;
- (void)reloadTableView;
- (void)setDelegate:(id)arg1;
- (void)setFooterBtnTitle:(id)arg1;
- (void)setHeaderTip:(id)arg1;
- (void)setHeaderTipForCustom:(id)arg1;
- (void)showModifyPhoneBtn;
- (void)showNotAnyOneSMSTipBtn;
- (void)showNotSMSTipBtn;
- (void)startTimer;
- (void)stopTimer;
- (void)updateSendVerifyCodeButton;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)willDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

