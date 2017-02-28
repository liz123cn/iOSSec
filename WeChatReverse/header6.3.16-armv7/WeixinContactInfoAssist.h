//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBaseContactInfoAssist.h"

#import "MMCPLabelDelegate.h"
#import "MMIconActionSheetDelegate.h"
#import "WCFacadeExt.h"

@class CContact, CMessageWrap, MMTableViewInfo, NSMutableArray, NSString, UIButton;

@interface WeixinContactInfoAssist : CBaseContactInfoAssist <MMCPLabelDelegate, MMIconActionSheetDelegate, WCFacadeExt>
{
    BOOL m_bFirstBecomeFriend;
    UIButton *m_greenBtn;
    MMTableViewInfo *m_tableViewInfo;
    BOOL m_hasRequestUpdateAlbum;
    NSString *m_location;
    CContact *m_chatContact;
    unsigned long m_uiVerify;
    NSMutableArray *m_arrayAlbum;
    int m_curDownloadEntrance;
    CMessageWrap *m_sourceMsg;
    NSString *m_cpKeyForNickname;
    NSString *m_cpKeyForChatRoomDisplayName;
    NSString *m_cpKeyForSignature;
    BOOL m_isNickNameUnsafe;
    BOOL m_isChatRoomDisplayNameUnsafe;
    BOOL m_isSignatureUnsafe;
}

- (void).cxx_destruct;
- (id)GetTableView;
- (BOOL)IsShowUserName;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)addToBlackList:(id)arg1;
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned long)arg2;
- (void)dealloc;
- (void)doAddToBlackList;
- (void)doDeleteContact;
- (id)getInfoDisplayName;
- (void)handleAddedContact;
- (BOOL)hasMore;
- (id)init;
- (void)initAddContactBtn;
- (void)initBlackAndExposeContactBtn;
- (void)initBlackListTipsLabel;
- (void)initData;
- (void)initDeleteBtn;
- (void)initExposeBtn;
- (void)initFooterBtnArea;
- (void)initFooterView;
- (void)initSayHelloBtn;
- (void)initSendMsgBtn;
- (void)initTableView;
- (void)initVerifyBtn;
- (BOOL)initVoipBtn;
- (void)initWCPrivacyButton;
- (id)initWithContact:(id)arg1 andChatContact:(id)arg2 andVerify:(unsigned long)arg3 delegate:(id)arg4 location:(id)arg5 sourceMsg:(id)arg6;
- (BOOL)isFromQRCode;
- (BOOL)isFromStrangeScene;
- (BOOL)isNeedHideUserName;
- (BOOL)isNeedShowRightBtn;
- (BOOL)isNeedVerify;
- (BOOL)isShowAddFriendScene;
- (BOOL)isShowBlackAction;
- (BOOL)isShowExposeButton;
- (void)loadLocalContactData;
- (void)makeAlbumCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeCellTitle:(id)arg1 Title:(id)arg2 MaxWidth:(float)arg3;
- (void)makeDescriptionCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeEditRemarkNameCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeHeadCell:(id)arg1 CellInfo:(id)arg2;
- (id)makeHeadSmallLabel:(id)arg1 Y:(float)arg2 text:(id)arg3 cpKey:(id)arg4 inUnsafe:(BOOL)arg5;
- (void)makeLeftValueCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeMoreCell:(id)arg1 CellInfo:(id)arg2;
- (void)makePhoneCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeTagsCell:(id)arg1 CellInfo:(id)arg2;
- (void)onAction;
- (void)onExposeByRecommand;
- (void)onHomepageUpdate:(int)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4;
- (void)onNewMessage:(id)arg1;
- (void)onOpenVoiceVoipView;
- (void)onOpenVoipActionSheet:(id)arg1;
- (void)onOpenVoipView;
- (void)onRelpyContact:(id)arg1;
- (void)onRestoreCPLabel:(id)arg1;
- (void)onSayHelloToContact;
- (void)onSocialInfoHandle;
- (void)onStartChat:(id)arg1;
- (void)onVerifyContact:(id)arg1 opcode:(unsigned long)arg2;
- (void)onVerifyContactOk;
- (void)opBlackList:(id)arg1;
- (void)opEditRemarkName;
- (void)opSetWCPermissions;
- (void)opSetWCStrangerPermissions;
- (void)reloadTableView;
- (void)removeFromBlackList;
- (void)showAlbumList;
- (void)showRightButton;
- (void)tryCall:(id)arg1;
- (void)updateCPState;
- (void)updateFooterView;
- (void)updateToBigSendMsgBtn;
- (void)verifyContactWithOpCode:(unsigned long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
