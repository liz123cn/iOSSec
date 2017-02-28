//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCRedEnvelopesControlLogic.h"

#import "IWCPayControlLogicExt.h"
#import "WCBaseControlMgrExt.h"
#import "WCRedEnvelopes2016GreetingViewControllerDelegate.h"
#import "WCRedEnvelopesLogicMgrExt.h"

@class NSString, WCPayControlData, WCPayPayMoneyLogic, WCRedEnvelopes2016GreetingViewController;

@interface WCRedEnvelopesGreetingControlLogic : WCRedEnvelopesControlLogic <WCRedEnvelopes2016GreetingViewControllerDelegate, WCBaseControlMgrExt, IWCPayControlLogicExt, WCRedEnvelopesLogicMgrExt>
{
    WCPayControlData *m_oPayData;
    WCPayPayMoneyLogic *m_oPayMoneyLogic;
    int m_scene;
    WCRedEnvelopes2016GreetingViewController *m_sendView;
    BOOL _isViewAnimationing;
}

- (void).cxx_destruct;
- (void)OnGenRedEnvelopesPayRequest:(id)arg1 Error:(id)arg2;
- (void)OnQueryRedEnvelopesUserInfo:(id)arg1 Error:(id)arg2;
- (void)dealloc;
- (BOOL)gotoViewController:(id)arg1;
@property(nonatomic) int m_scene; // @synthesize m_scene;
- (void)onWCBaseLogicDidStop:(unsigned long)arg1;
- (void)redEnvelopes2016GreetingViewControllerBack;
- (void)redEnvelopes2016GreetingViewControllerSendClick:(id)arg1;
- (void)showSendingView:(BOOL)arg1;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

