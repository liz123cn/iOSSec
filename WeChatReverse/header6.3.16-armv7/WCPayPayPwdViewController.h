//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class UIButton, WCPayPwdCtrlPanelView;

@interface WCPayPayPwdViewController : WCPayBaseViewController
{
    UIButton *m_footerButton;
    WCPayPwdCtrlPanelView *m_VerifyView;
    WCPayPwdCtrlPanelView *m_FirstView;
    WCPayPwdCtrlPanelView *m_SecondView;
    WCPayPwdCtrlPanelView *m_currentView;
    id <WCPayPayPwdViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)clearPwdInput;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)initFooterView;
- (void)initNavigationBar;
- (void)onNext;
- (void)refreshViewWithData:(id)arg1;
- (void)resignInputViewFirstResponse;
- (void)setDelegate:(id)arg1;
- (void)setFooterBtnTitle:(id)arg1;
- (void)setNavigationBarTitle:(id)arg1 Stype:(int)arg2;
- (void)showSecondPwdCtrlWithTip:(id)arg1 withShowFooterButton:(BOOL)arg2;
- (void)showSetPwdCtrlWithTip:(id)arg1;
- (void)showSetPwdCtrlWithTip:(id)arg1 fromError:(BOOL)arg2;
- (void)showVerifyPwdCtrlWithTip:(id)arg1;
- (void)showVerifyPwdCtrlWithTip:(id)arg1 withShowFooterButton:(BOOL)arg2;
- (void)showViewWithCurrentView:(id)arg1 NextView:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end
