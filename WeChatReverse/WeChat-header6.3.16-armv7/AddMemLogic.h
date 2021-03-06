//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IGroupMgrExt.h"
#import "MultiSelectContactsViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "contactVerifyLogicDelegate.h"

@class CContact, CContactVerifyLogic, NSArray, NSMutableArray, NSString;

@interface AddMemLogic : MMObject <UIAlertViewDelegate, MultiSelectContactsViewControllerDelegate, contactVerifyLogicDelegate, IGroupMgrExt>
{
    id <AddMemLogicDelegate> m_delegate;
    NSMutableArray *m_arrNeedVerifyUsrName;
    CContactVerifyLogic *m_oContactVerifyLogic;
    NSArray *m_arrMemberList;
    unsigned long _m_viewScene;
    CContact *_m_oContact;
}

- (void).cxx_destruct;
- (void)OnAddGroupMember:(id)arg1 withStatus:(unsigned long)arg2 memberList:(id)arg3 inviteList:(id)arg4 Error:(id)arg5;
- (void)OnInviteChatRoomMember:(id)arg1 Ret:(int)arg2 Error:(id)arg3;
- (void)addMembersToChatRoom:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)canShowUpgradeStatus;
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned long)arg2;
- (void)dealloc;
- (id)genErrorString:(id)arg1;
- (id)getErrorContactName:(id)arg1;
- (int)getFTSCommonScene;
- (id)init;
@property(nonatomic) __weak id <AddMemLogicDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) CContact *m_oContact; // @synthesize m_oContact=_m_oContact;
@property(nonatomic) unsigned long m_viewScene; // @synthesize m_viewScene=_m_viewScene;
- (void)onContactVerifyFail;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)start:(id)arg1;
- (void)verifyContact;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

