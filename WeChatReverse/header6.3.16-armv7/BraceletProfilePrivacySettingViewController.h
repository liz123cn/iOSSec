//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

@class CContact, MMTableViewInfo;

@interface BraceletProfilePrivacySettingViewController : MMUIViewController
{
    MMTableViewInfo *m_tableViewInfo;
    BOOL m_isSettingsChanged;
    CContact *m_contact;
}

- (void).cxx_destruct;
- (void)initTable;
- (id)initWithContact:(id)arg1;
- (BOOL)isReceiveMessage;
- (void)onLikeSwitchChange:(id)arg1;
- (void)onRankMsgSwitchChange:(id)arg1;
- (void)onTakePartInSwitchChange:(id)arg1;
- (void)updateBrandReceiveMSG;
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)arg1;

@end
