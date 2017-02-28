//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "IContactMgrExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "WCBaseControlLogicDeleagte.h"
#import "WCBaseControlMgrExt.h"
#import "WCPayPayMoneyLogicDelegate.h"
#import "WCPayTransferMoneyViewControllerDelegate.h"
#import "WCPayTransferSelectContactsViewControllerDelegate.h"
#import "WCPayTransferSelectSessionViewControllerDelegate.h"

@class JSEvent, NSString, WCPayPayMoneyLogic;

@interface WCPayTransferMoneyControlLogic : WCPayControlLogic <WCBaseControlLogicDeleagte, WCPayPayMoneyLogicDelegate, WCPayTransferSelectContactsViewControllerDelegate, WCPayTransferSelectSessionViewControllerDelegate, WCPayTransferMoneyViewControllerDelegate, WCBaseControlMgrExt, IContactMgrExt, MMTipsViewControllerDelegate>
{
    WCPayPayMoneyLogic *m_payLogic;
    int m_enWCPayTransferMoneyControlLogicScene;
    NSString *m_nsA8KeyResponseUrl;
    JSEvent *m_jsEvent;
    BOOL _disableEditMoney;
}

- (void).cxx_destruct;
- (void)OnCheckWCPayJsApiRequest:(id)arg1 Error:(id)arg2;
- (void)OnContinueTransfer;
- (void)OnGetBindQueryInfo:(id)arg1 Error:(id)arg2;
- (void)OnGetTransferPrepayRequest:(id)arg1 Error:(id)arg2;
- (void)OnGetTransferUserName:(id)arg1 Error:(id)arg2;
- (void)OnInterruptContinueTransfer;
- (void)OnOpenOrderList;
- (void)OnRetrySendTransferMessage:(id)arg1 Error:(id)arg2;
- (void)OnThreeInterruptContinueTransfer;
- (void)OnWCPayTransferSelectChatRoomContactViewControllerBack;
- (BOOL)OnWCPayTransferSelectChatRoomContactViewControllerFilterContactCandidate:(id)arg1;
- (void)OnWCPayTransferSelectChatRoomContactViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned long)arg2;
- (void)OnWCPayTransferSelectContactsViewControllerBack;
- (BOOL)OnWCPayTransferSelectContactsViewControllerFilterContactCandidate:(id)arg1;
- (void)OnWCPayTransferSelectContactsViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned long)arg2;
- (void)OnWCPayTransferSelectSessionViewControllerBack;
- (BOOL)OnWCPayTransferSelectSessionViewControllerFilterContactCandidate:(id)arg1;
- (void)OnWCPayTransferSelectSessionViewControllerNewSession;
- (void)OnWCPayTransferSelectSessionViewControllerSelectContactReturn:(id)arg1 atScene:(unsigned long)arg2;
- (void)WCPayTransferMoneyViewControllerCancel:(BOOL)arg1;
- (void)WCPayTransferMoneyViewControllerNext:(id)arg1;
- (void)WCPayTransferMoneyViewControllerRightActionCancel:(BOOL)arg1;
- (void)dealloc;
- (BOOL)gotoViewController:(id)arg1;
- (id)initWithA8KeyResponseUrl:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithJSEvent:(id)arg1;
- (id)initWithSessionSelectedUserName:(id)arg1;
- (id)initWithSessionSelectedUserName:(id)arg1 placeHolderMoney:(long long)arg2 disableEditMoney:(BOOL)arg3;
- (void)onClickTipsBtn:(id)arg1 Index:(int)arg2;
- (void)onModifyContact:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned long)arg1;
- (void)showTransferChargeTipsView;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
