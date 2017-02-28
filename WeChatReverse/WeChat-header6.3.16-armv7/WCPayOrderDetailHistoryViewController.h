//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "WCPayHistoryOrderDetailViewDelegate.h"

@class NSString;

@interface WCPayOrderDetailHistoryViewController : WCPayBaseViewController <WCPayHistoryOrderDetailViewDelegate>
{
    id <WCPayOrderDetailHistoryViewControllerDelegate> m_delegate;
    BOOL m_bShowCompleteBtn;
    BOOL m_bShowSuccessTip;
    BOOL m_bSelectedSuscribeServiceApp;
    BOOL m_bShowAppFrom;
    BOOL m_bHandlePoped;
    NSString *m_nsCompleteBtnTitle;
    NSString *m_nsCommondTip;
    int m_enWCPayHistoryOrderDetailViewScene;
}

- (void).cxx_destruct;
- (void)BackHistoryOrderDetail;
- (void)OnClickedBrandProfile:(id)arg1 NickName:(id)arg2;
- (void)OnClickedReceiverProfile:(id)arg1;
- (void)OnClickedRetrySendMessage:(id)arg1 UserName:(id)arg2;
- (void)OnHistoryOrderDetailBack;
- (void)OnNextStepBack;
- (void)OnSubscribeApp;
- (void)OnWXPayPhone;
- (void)didReceiveMemoryWarning;
- (id)init;
- (void)initNavigationBar;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)selectSubscribeApp:(id)arg1;
- (void)setCompleteBtnTitle:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setWCPayOrderDetailHistoryViewScene:(int)arg1;
- (void)showBizSafeTitle:(BOOL)arg1;
- (void)showCompleteBtn:(BOOL)arg1;
- (void)showOrderFromApp:(BOOL)arg1;
- (void)showSuccessPayTip:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
