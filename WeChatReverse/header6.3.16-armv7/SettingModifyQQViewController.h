//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AccountBaseViewController.h"

#import "IQQAccountMgrExt.h"
#import "UIAlertViewDelegate.h"

@class MMTableViewInfo, NSString, UIViewController;

@interface SettingModifyQQViewController : AccountBaseViewController <UIAlertViewDelegate, IQQAccountMgrExt>
{
    unsigned long m_uiUin;
    MMTableViewInfo *m_tableViewInfo;
    UIViewController *m_vcAccount;
    id <SettingModifyQQViewControllerDelegate> _m_SettingModifyQQViewControllerDelegate;
}

- (void).cxx_destruct;
- (void)OnBindQQOK;
- (void)OnOperate;
- (void)OnUnBindQQFail;
- (void)OnUnBindQQOK;
- (void)ShowBindQQView;
- (void)confirmUnBind;
- (void)dealloc;
- (void)doRegester;
- (id)getHeaderView;
@property(nonatomic) __weak id <SettingModifyQQViewControllerDelegate> m_SettingModifyQQViewControllerDelegate; // @synthesize m_SettingModifyQQViewControllerDelegate=_m_SettingModifyQQViewControllerDelegate;
@property(nonatomic) unsigned long m_uiUin; // @synthesize m_uiUin;
@property(retain, nonatomic) UIViewController *m_vcAccount; // @synthesize m_vcAccount;
- (void)makeCell:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)onUnBind:(id)arg1;
- (void)onUnBindAccount;
- (void)undoRegester;
- (void)updateTableCell;
- (void)updateViewOnQQChange;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
