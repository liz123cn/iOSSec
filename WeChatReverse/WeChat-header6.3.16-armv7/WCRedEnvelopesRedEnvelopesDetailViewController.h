//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCRedEnvelopesBaseViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCRedEnvelopesCommentInputToolViewDelegate.h"
#import "WebAddContactDelegate.h"

@class MMTableView, NSString, UIButton, UIImageView, UIView, WCRedEnvelopesCommentInputToolView, WCUITextField;

@interface WCRedEnvelopesRedEnvelopesDetailViewController : WCRedEnvelopesBaseViewController <WebAddContactDelegate, UITableViewDelegate, UITableViewDataSource, WCRedEnvelopesCommentInputToolViewDelegate>
{
    id <WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate> m_delegate;
    BOOL m_loadingMoreOrderList;
    MMTableView *m_tableView;
    BOOL m_bDidBack;
    WCUITextField *m_oWishingTextField;
    UIView *m_oHeaderView;
    WCRedEnvelopesCommentInputToolView *oWCRedEnvelopesCommentInputToolView;
    UIView *oMsgAnimationView;
    UIView *oMoneyAnimationView;
    UIView *oTableAnimationView;
    UIView *oTopHeaderView;
    UIView *oNavigationBarView;
    UIImageView *commentImageView;
    UIButton *commentButton;
    BOOL m_bEnterpriseRedEnvelopes;
    int enWCRedEnvelopesRedEnvelopesDetailViewControllerScene;
    unsigned long m_uiStatFromScene;
}

- (void).cxx_destruct;
- (id)GetHeaderView:(id)arg1;
- (id)GetNavigationBarViewHeader:(id)arg1;
- (id)GetViewHeader:(id)arg1;
- (void)OnLeftBarButtonDone;
- (void)OnToolViewDissmiss;
- (void)OnWebAddContact:(int)arg1 Msg:(id)arg2 CallBack:(id)arg3;
- (void)OnWebAddContactReturn;
- (void)SendTextMessageToolView:(id)arg1;
- (void)animationForLabel;
- (void)commentRedEnvelopes;
@property(nonatomic) int enWCRedEnvelopesRedEnvelopesDetailViewControllerScene; // @synthesize enWCRedEnvelopesRedEnvelopesDetailViewControllerScene;
- (id)getAnimationView:(id)arg1;
- (id)getBottomView;
- (id)getNoMoreBottomView;
- (void)gotoBalanceDetail;
- (void)gotoUrl;
- (void)handleRedEnvelopesOperation:(id)arg1;
- (void)handleTailOperation;
- (id)init;
- (void)initNavigationBar;
- (void)initTableView;
- (void)loadMoreOrderList;
@property(nonatomic) BOOL m_bEnterpriseRedEnvelopes; // @synthesize m_bEnterpriseRedEnvelopes;
@property(nonatomic) unsigned long m_uiStatFromScene; // @synthesize m_uiStatFromScene;
- (void)makeCell:(id)arg1 cell:(id)arg2 row:(unsigned int)arg3;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)refreshViewWithData:(id)arg1;
- (void)reportChangeLinkClick:(unsigned int)arg1 Url:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLeftCloseBarButton;
- (void)startOpenAnimation;
- (void)statExpourseOperation;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (BOOL)useTransparentNavibar;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)watchMyRedEnvelopesList;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

