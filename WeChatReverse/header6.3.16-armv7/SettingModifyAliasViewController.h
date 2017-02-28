//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PBMessageObserverDelegate.h"
#import "PasswordLogicDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "WCAccountSetPasswordViewControllerDelegate.h"

@class MMTableViewCellInfo, MMTableViewInfo, NSString, PasswordLogic, UILabel;

@interface SettingModifyAliasViewController : MMUIViewController <PBMessageObserverDelegate, UIAlertViewDelegate, UITextFieldDelegate, PasswordLogicDelegate, WCAccountSetPasswordViewControllerDelegate>
{
    id <settingModifyAliasDelegate> m_delegate;
    NSString *m_nsAlias;
    MMTableViewInfo *m_tableViewInfo;
    MMTableViewCellInfo *m_editInfo;
    PasswordLogic *m_checkPasswordLogic;
    UILabel *m_tipLabel;
    UILabel *m_userNameLabel;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)ModifyAccount;
- (void)OnSetAliasOK;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)checkHaveNotSetPassword:(id)arg1;
- (void)checkHaveSetPassword:(id)arg1;
- (void)dealloc;
- (void)disMissThisViewAnimated;
- (id)init;
- (void)initSetAliasOKView:(BOOL)arg1;
- (void)initSetAliasView;
@property(nonatomic) __weak id <settingModifyAliasDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsAlias; // @synthesize m_nsAlias;
- (void)onSaveText;
- (void)onSetPasswordBack;
- (void)onSetPasswordOK;
- (void)passwordLogicStart:(id)arg1;
- (void)setError:(id)arg1;
- (void)startLoading;
- (void)startSetPwd;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldClear:(id)arg1;
- (void)textFieldTextDidChange:(id)arg1;
- (void)unknownFail:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

