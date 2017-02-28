//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMsgContentLogicController.h"

#import "ChatroomMemberRemoveViewControllerDelegate.h"
#import "IAutoSetRemarkExt.h"
#import "IContactMgrExt.h"
#import "IGroupMgrExt.h"
#import "ILinkEventExt.h"
#import "IMMQRCodeExt.h"
#import "RoomContactSelectDelegate.h"
#import "ShareFriendOnChatDelegate.h"
#import "TipsViewDelegate.h"
#import "chatRoomInfoDelegate.h"
#import "chatRoomSettingDelegate.h"

@class ChatRoomInfoSettingMgr, NSString, RoomReportController;

@interface RoomContentLogicController : BaseMsgContentLogicController <chatRoomInfoDelegate, chatRoomSettingDelegate, IGroupMgrExt, IContactMgrExt, ShareFriendOnChatDelegate, RoomContactSelectDelegate, IAutoSetRemarkExt, IMMQRCodeExt, TipsViewDelegate, ChatroomMemberRemoveViewControllerDelegate, ILinkEventExt>
{
    BOOL m_bStartShowRoomContactSelector;
    ChatRoomInfoSettingMgr *m_ChatRoomInfoSettingMgr;
    BOOL m_bTipsShow;
    BOOL m_bPresentRoomContactSelector;
    BOOL m_forbidGetGroupMemberDetail;
    RoomReportController *m_reportController;
}

- (void).cxx_destruct;
- (void)AddAtUser:(id)arg1;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)CanLongPressHeadImage;
- (BOOL)CanOpenServiceAppList;
- (BOOL)CanOpenTrackRoom;
- (BOOL)CanRemoteRecord;
- (BOOL)CanSelectMyFavoritesItemForSendingMsg;
- (BOOL)CanSend3rdMsg;
- (BOOL)CanSendImageMsg:(id)arg1;
- (BOOL)CanSendLocationMsg;
- (BOOL)CanSendTextMsg:(id)arg1;
- (BOOL)CanSendVideoMsg;
- (BOOL)CanSendVoiceMsg;
- (BOOL)CanSendVoipMsg;
- (void)ClearStatusAndUnRegisterForCacheStatus;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned long)arg2 ToID:(unsigned long)arg3;
- (void)CustomToolViewEX:(id)arg1;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (void)DeleteAtUserList;
- (void)DidAddMsg:(id)arg1;
- (BOOL)EnabledOfHeaderButtonAtIndex:(unsigned long)arg1;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3 withImageInfo:(id)arg4;
- (id)FormTextMsg:(id)arg1 withText:(id)arg2;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned long)arg2 Limit:(unsigned long)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetMsg:(id)arg1 FromID:(unsigned long)arg2 Limit:(unsigned long)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetRightBarBtn;
- (id)GetRightBarButtonImageName;
- (id)GetRightBarButtonTitle;
- (id)GetTitleTailImage;
- (id)GetUsrTitle;
- (id)GetUsrTitleFront;
- (id)GetUsrTitleOld;
- (id)GetUsrTitleTail;
- (id)HighlightedImageOfHeaderButtonAtIndex:(unsigned long)arg1;
- (id)ImageOfHeaderButtonAtIndex:(unsigned long)arg1;
- (void)MessageReturn:(unsigned long)arg1 MessageInfo:(id)arg2 Event:(unsigned long)arg3;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (unsigned long)NumberOfHeaderButtons;
- (void)OnChangeGroup:(id)arg1;
- (void)OnChangeMemberDisplayName:(id)arg1;
- (void)OnChangeMemberShowDisplayName:(id)arg1;
- (void)OnChangeMemberVerifyStatus:(id)arg1;
- (void)OnChangeNotifyStatus:(id)arg1 withStatus:(BOOL)arg2;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned long)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenDetailInfo;
- (void)OpenDetailInfoForDisplayNameSwitch;
- (void)OpenDetailInfoFromTips;
- (void)OpenGroupSetting;
- (void)QuitGroup;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)StateChanged;
- (id)TitleOfHeaderButtonsAtIndex:(unsigned long)arg1;
- (void)ViewDidAppear;
- (void)ViewDidInit;
- (void)ViewWillAppear;
- (void)ViewWillInit;
- (void)WillBePushedLogicController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)canShowChatRoomInfo;
- (void)checkAddFriend;
- (void)checkGetChatRoomInfo:(id)arg1;
- (void)checkSecurityBannerShow;
- (void)clearAllMsg;
- (void)clearAtMeCount;
- (void)customCellContentForMsg:(id)arg1;
- (void)dealloc;
- (void)delChatRoomMemberFromInvitionScene:(id)arg1;
- (void)delChatRoomMemberFromQRcodeScene:(id)arg1;
- (void)delChatroomMember:(id)arg1 fromScene:(BOOL)arg2;
- (void)didSelectContact:(id)arg1;
- (BOOL)existEmptyMemberContact;
- (id)getDefaultChatRoomName;
- (id)getGroupContact;
- (id)init;
- (BOOL)isLastCharacterAlphaNumeric:(id)arg1;
- (BOOL)isNeedCached;
- (id)nameForHeadImageLongPressed:(id)arg1;
- (void)newMessageFromChatRoomInfo:(id)arg1;
- (void)onCancelSelectContact;
- (void)onChatroomMemberRemoveViewCancel;
- (void)onGroupSetting:(id)arg1;
- (void)onInputTextDeleteAll;
- (void)onModifyContact:(id)arg1;
- (void)onPerformAction:(id)arg1;
- (void)onPopFromNavigationController;
- (void)onRevokeChatroomQRCode:(id)arg1 success:(BOOL)arg2 errTip:(id)arg3;
- (void)onSetStrangerRemark:(id)arg1;
- (void)onTextChange:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)removeChatRoomMember:(id)arg1 scene:(unsigned int)arg2;
- (void)revokeChatRoomQRCode:(id)arg1;
- (BOOL)shouldHideToolViewWhenKeyboardHide;
- (BOOL)shouldPreventViewcontrollerAutorotate;
- (void)showRoomContactSelectorViewController;
- (void)switchEarpieceMode;
- (void)tryGetChatRoomMemberDetail:(id)arg1;
- (void)updateChatroomContact:(id)arg1;
- (void)viewWillRotateToOrientation:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

