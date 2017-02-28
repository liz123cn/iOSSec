//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ChatRoomMemberGridViewDelegate.h"
#import "CreateChatLogicDelegate.h"
#import "IContactMgrExt.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "contactInfoDelegate.h"

@class CContact, CreateChatLogic, DelaySwitchSettingLogic, MMTableView, MMTableViewInfo, NSArray, NSIndexPath, NSSet, NSString, UIView;

@interface AddContactToChatRoomViewController : MMUIViewController <WCActionSheetDelegate, ChatRoomMemberGridViewDelegate, IContactMgrExt, CreateChatLogicDelegate, contactInfoDelegate, UIAlertViewDelegate>
{
    CContact *m_contact;
    id <addContactToChatRoomDelegate> m_delegate;
    MMTableView *m_tableView;
    UIView *m_headerView;
    CreateChatLogic *m_createChatLogic;
    BOOL m_bTopSession;
    MMTableViewInfo *m_tableViewInfo;
    BOOL m_bShowTranslateSectionAtFirst;
    NSIndexPath *m_showTranslateSectionIndex;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    NSSet *_trackUsernameSet;
    NSArray *_talkContactList;
}

- (void).cxx_destruct;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)addMember;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)createChatRoom;
- (void)dealloc;
- (void)doReset;
- (id)getMyFriendContact;
- (BOOL)getSessionTopped;
- (id)getShareMyFriendParentViewController;
- (void)hideCoverView;
- (void)initData;
- (void)initMemberView;
- (void)initView;
- (BOOL)isTopSessionCountExceed;
@property(nonatomic) BOOL m_bShowTranslateSectionAtFirst; // @synthesize m_bShowTranslateSectionAtFirst;
@property(retain, nonatomic) CContact *m_contact; // @synthesize m_contact;
@property(retain, nonatomic) CreateChatLogic *m_createChatLogic; // @synthesize m_createChatLogic;
@property(nonatomic) __weak id <addContactToChatRoomDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSIndexPath *m_showTranslateSectionIndex; // @synthesize m_showTranslateSectionIndex;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)onClear:(id)arg1;
- (void)onCreateChatContactReturn:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onEditAndSearch;
- (void)onExpose;
- (void)onFinishedShareMyFriend:(BOOL)arg1;
- (void)onModifyContact:(id)arg1;
- (void)onTopSession:(BOOL)arg1;
- (void)openContactInfo:(id)arg1;
- (void)processModContact:(id)arg1;
- (void)reloadTableData;
- (void)reloadView;
- (void)removeCoverView;
- (void)setFlagIcon:(id)arg1 ItemUsername:(id)arg2;
- (void)setMuteStatus;
- (void)setTopSession;
- (BOOL)setUpdateNotifyMuted:(BOOL)arg1;
- (void)showChatBackgroundConfig;
- (void)showImageBrowser;
- (void)startCoverAnimOnIndexPath:(id)arg1;
- (void)toggleWatchContact:(id)arg1;
- (void)tryGetContactUsrImg;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

