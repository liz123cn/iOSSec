//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CSettingExt.h"
#import "HDHeadImageViewDelegate.h"
#import "IOplogExt.h"
#import "MMRegionPickerViewControllerDelegate.h"
#import "settingModifyAliasDelegate.h"
#import "settingModifySignDelegate.h"
#import "settingMyAccountExtInfoLogicDelegate.h"

@class MMHeadImageView, MMRegionPickerViewController, MMTableViewInfo, NSString, NameEditorViewController, SettingMyAccountExtInfoLogic;

@interface SettingMyProfileViewController : MMUIViewController <HDHeadImageViewDelegate, settingModifySignDelegate, MMRegionPickerViewControllerDelegate, settingMyAccountExtInfoLogicDelegate, CSettingExt, settingModifyAliasDelegate, IOplogExt>
{
    MMHeadImageView *m_headImage;
    MMRegionPickerViewController *m_regionPicker;
    SettingMyAccountExtInfoLogic *m_infoLogic;
    MMTableViewInfo *m_tableViewInfo;
    NameEditorViewController *m_CurrentVC;
}

- (void).cxx_destruct;
- (void)ChangeSex:(id)arg1;
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
- (void)Save;
- (void)SaveAndExit;
- (void)dealloc;
- (id)getAddressString;
- (id)getSettingHeadImage;
- (id)getSexString;
- (float)getSignCellHeight;
- (void)initDeepLinkConfig;
- (BOOL)isNeedShowWCPay;
- (void)makeChangeImgCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeQRInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)makeSignCell:(id)arg1 cellInfo:(id)arg2;
- (void)onChangeImg:(id)arg1;
- (void)onInfoChange;
- (void)onLinkedIn;
- (void)onModifyNickName:(id)arg1 vc:(id)arg2;
- (void)onModifySex:(id)arg1;
- (void)onSettingChanged:(int)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned long)arg3 cgiWrap:(id)arg4;
- (void)returnBack;
- (void)saveNewAlias;
- (void)saveNewSign:(id)arg1;
- (void)showModifyAddressView;
- (void)showModifyNickName;
- (void)showModifySexView;
- (void)showModifySignView;
- (void)showModifyUserName;
- (void)showMyAddressInfoView;
- (void)showQRInfoView;
- (void)updateHead:(id)arg1;
- (void)updateTableCell;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)willAppear;
- (void)willDisshow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
