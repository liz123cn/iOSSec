//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "SelectContactsViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class CContact, NSString, SelectContactsViewController;

@interface ShareFriendOnChatLogicController : MMObject <SelectContactsViewControllerDelegate, UIAlertViewDelegate>
{
    id <ShareFriendOnChatDelegate> m_delegate;
    CContact *m_contactToShare;
    CContact *m_contactShareToWho;
    SelectContactsViewController *m_selectContactViewController;
    BOOL m_bIsShareToChatRoom;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (id)contactShareMsgFromUser:(id)arg1 toUser:(id)arg2 sharedContact:(id)arg3;
- (id)initWithDelegate:(id)arg1;
@property(nonatomic) BOOL m_bIsShareToChatRoom; // @synthesize m_bIsShareToChatRoom;
@property(retain, nonatomic) CContact *m_contactShareToWho; // @synthesize m_contactShareToWho;
@property(retain, nonatomic) CContact *m_contactToShare; // @synthesize m_contactToShare;
- (BOOL)onConfirmShareMyFriend:(id)arg1;
- (void)onDismiss:(id)arg1;
- (BOOL)onFilterContactCandidate:(id)arg1;
- (BOOL)onFilterSendReceiver:(id)arg1;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned long)arg2;
@property(retain, nonatomic) SelectContactsViewController *selectContactViewController; // @synthesize selectContactViewController=m_selectContactViewController;
- (void)showConfirmShareView;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
