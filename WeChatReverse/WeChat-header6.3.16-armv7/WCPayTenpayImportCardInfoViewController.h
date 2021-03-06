//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ILinkEventExt.h"
#import "WCActionSheetDelegate.h"

@class NSMutableArray, NSString, UIButton;

@interface WCPayTenpayImportCardInfoViewController : WCPayBaseViewController <ILinkEventExt, WCActionSheetDelegate>
{
    BOOL m_bReadAgreement;
    BOOL m_bSubscribeApp;
    UIButton *m_footerButton;
    NSMutableArray *m_arrayInfoGroup;
    id <WCPayTenpayImportCardInfoViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (id)getHeaderView;
- (void)initFooterView;
- (void)initInfoTemplate;
- (void)initNavigationBar;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onNext;
- (void)onReadAgreement:(id)arg1;
- (void)onSubscribeAppBtn:(id)arg1;
- (void)reloadTableView;
- (void)setDelegate:(id)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

