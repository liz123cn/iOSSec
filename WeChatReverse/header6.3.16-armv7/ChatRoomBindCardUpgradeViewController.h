//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IGroupMgrExt.h"
#import "IWCPayControlLogicExt.h"
#import "UIAlertViewDelegate.h"
#import "WCAccountBindPhoneControlLogicDelegate.h"

@class CContact, NSArray, NSString, WCAccountBindPhoneControlLogic, WCPayAddPayCardLogic;

@interface ChatRoomBindCardUpgradeViewController : MMUIViewController <IWCPayControlLogicExt, IGroupMgrExt, UIAlertViewDelegate, WCAccountBindPhoneControlLogicDelegate>
{
    CContact *m_chatRoomContact;
    unsigned long m_scene;
    unsigned long m_status;
    unsigned long m_phoneQuota;
    unsigned long m_maxCount;
    WCPayAddPayCardLogic *m_cardLogic;
    unsigned long m_upgradeRet;
    NSArray *m_presentArray;
    BOOL m_upgradeDirect;
    WCAccountBindPhoneControlLogic *m_bindLogic;
}

- (void).cxx_destruct;
- (void)OnChatRoomUpgrade:(id)arg1 rspCode:(int)arg2 restQuota:(unsigned long)arg3 maxCount:(unsigned long)arg4;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)OnGetChatRoomUpgradeStatus:(unsigned long)arg1 quota:(unsigned long)arg2 maxCount:(unsigned long)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)bindPhoneReturn;
- (void)checkBindPhone;
- (void)confirmAction;
- (void)dealloc;
- (id)dismissWithAnim;
- (void)getUpgradeStatus;
- (id)getUpgrader;
- (id)getUpgraderText;
- (void)initUpgraderView;
- (void)initUpgraderView:(id)arg1 upgrader:(id)arg2 maxCount:(unsigned long)arg3;
- (id)initWithChatRoomContact:(id)arg1 forScene:(unsigned long)arg2;
- (id)makeFooterSection:(unsigned long)arg1;
- (id)makeProductSection:(unsigned long)arg1;
- (id)makeUpgraderView:(id)arg1 upgrader:(id)arg2 maxCount:(unsigned long)arg3;
- (void)onWCAccountBindPhoneControlLogicStop:(id)arg1;
- (void)openInfoPage;
- (BOOL)shouldNotShowConfirmPage;
- (void)startBindCard;
- (void)startUpgrade:(BOOL)arg1;
- (void)upgradeChatRoom;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

