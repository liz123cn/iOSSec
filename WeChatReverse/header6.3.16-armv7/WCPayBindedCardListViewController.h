//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class NSMutableArray, NSString, UIButton, UIView, WCPayBindCardInfo;

@interface WCPayBindedCardListViewController : WCPayBaseViewController
{
    UIButton *m_footerButton;
    NSMutableArray *m_cellInfoArray;
    WCPayBindCardInfo *selectedPayCardInfo;
    id <WCPayBindedCardListViewControllerDelegate> m_delegate;
    BOOL bSelectedNewCardToResetPwd;
    BOOL bViewDidBePoped;
    NSString *nsUsedNewCardWording;
    NSString *nsHeaderTips;
    UIView *tenpayTelView;
}

- (void).cxx_destruct;
- (void)OnSelectCard:(id)arg1;
- (void)OnSelectNewCard;
- (id)checkBankAvailable:(id)arg1;
- (BOOL)checkBankCanShow:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)initFooterView;
- (void)initKFTelView;
- (void)initNavigationBar;
- (void)leftBarButtonDone;
- (void)onBankPhone;
- (void)onNext;
- (void)reloadCardListView;
- (void)setDelegate:(id)arg1;
- (void)setHeaderTips:(id)arg1;
- (void)setNewCardControlWording:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
