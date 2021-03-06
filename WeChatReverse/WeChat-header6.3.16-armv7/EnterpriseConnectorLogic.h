//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EnterpriseBrandContactSelectViewControllerDelegate.h"
#import "EnterpriseSessionSelectViewControllerDelegate.h"
#import "ShareMessageConfirmLogicHelperDelegate.h"

@class JSEvent, NSString, ShareMessageConfirmLogicHelper;

@interface EnterpriseConnectorLogic : NSObject <EnterpriseBrandContactSelectViewControllerDelegate, EnterpriseSessionSelectViewControllerDelegate, ShareMessageConfirmLogicHelperDelegate>
{
    NSString *_brandUserName;
    NSString *_targetBrand;
    NSString *_targetEnterpriseChat;
    ShareMessageConfirmLogicHelper *_jsSendAppMsgHelper;
    JSEvent *_jsEvent;
    id <EnterpriseConnectorLogicDelegate> delegate;
}

- (void).cxx_destruct;
- (void)OnEnterpriseCancelSelectSession:(id)arg1;
- (void)OnEnterpriseSelectSession:(id)arg1 viewController:(id)arg2;
- (void)OnSendMessageCancel:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(int)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)callDelegateConnectFail;
- (void)callDelegateConnectSucceed;
- (void)cancelConnect;
- (void)connectWithMsgWrap:(id)arg1 extraData:(id)arg2;
@property(nonatomic) __weak id <EnterpriseConnectorLogicDelegate> delegate; // @synthesize delegate;
- (id)initWithBrand:(id)arg1;
- (void)onEnterpriseCancelSelectBrand:(id)arg1;
- (void)onEnterpriseSelectBrandContact:(id)arg1 viewController:(id)arg2;
- (void)startLogic:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

