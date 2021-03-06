//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMMLanguageMgrExt.h"
#import "IMMNewSessionMgrExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "MessageObserverDelegate.h"
#import "PBMessageObserverDelegate.h"

@class NSArray, NSMutableArray, NSMutableSet, NSString, OnlineClientData, SendActiveCGI;

@interface OnlineClientMgr : MMService <IMMLanguageMgrExt, MessageObserverDelegate, PBMessageObserverDelegate, IMMNewSessionMgrExt, MMKernelExt, MMService>
{
    BOOL m_isRunningAsBakDevice;
    BOOL m_hasGetChatList;
    BOOL m_needHeartBeat;
    BOOL m_shouldVibrateOrSound;
    BOOL m_isLoginWebWX;
    BOOL m_isGettingOnlineInfo;
    BOOL m_shouldShowPushSwitch;
    BOOL m_shouldIgnorePushOpen;
    unsigned long m_curOnlineVersion;
    unsigned long m_iconType;
    NSString *m_summaryXml;
    NSArray *m_arrOnlineInfo;
    NSMutableSet *m_markingMsgRead;
    NSMutableSet *m_pendingMarkMsgRead;
    NSMutableArray *m_lastDeviceActiveMsg;
    SendActiveCGI *m_sendActiveCGI;
    unsigned int m_lastReadItemCreateTime;
    unsigned long m_syncDevNameEventID;
    BOOL m_syncingDeviceName;
    OnlineClientData *m_onlineClientData;
    CDUnknownBlockType m_logoutCallBackBlock;
}

- (void).cxx_destruct;
- (void)DidEnterBackground:(id)arg1;
- (void)DidEnterForeground:(id)arg1;
- (void)EnterChat:(id)arg1;
- (id)GetAvatarImageWithHelperType:(unsigned long)arg1;
- (id)GetBannerIconWithHelperType:(unsigned long)arg1;
- (id)GetOnlineClient;
- (unsigned long)GetOnlineIconType;
- (void)GetOnlineInfoFromServer;
- (void)GetOnlineInfoFromServerWithNewOnlineVersion:(unsigned long)arg1;
- (id)GetOnlineInfoWithHelperType:(int)arg1;
- (id)GetOnlineSummary;
- (id)GetOnlineSummaryForKey:(id)arg1;
- (id)GetSelfOnlineInfo;
- (void)MarkChatRead:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)MessageReturn:(unsigned long)arg1 MessageInfo:(id)arg2 Event:(unsigned long)arg3;
- (void)QuitChat:(id)arg1;
- (void)addDefaultMessageForMacHelper;
- (id)cacheFilePath;
- (void)checkExtDeviceOnlineStatusWithOnlineList:(id)arg1;
- (void)checkShouldAddFileHelperToTopWithFlag:(unsigned long)arg1;
- (void)checkShouldHideOnelineInfoBarWithFlag:(unsigned long)arg1;
- (void)checkShouldHidePushSwitchWithFlag:(unsigned long)arg1;
- (void)checkShouldIgnorePushOpenWithFlag:(unsigned long)arg1;
- (void)checkShouldShowMacHelper;
- (void)checkShouldVibrateForNewMessageFlag:(unsigned long)arg1;
- (BOOL)createGetOnlineInfoEventWithNewOnlineVersion:(unsigned long)arg1;
- (void)dealloc;
- (void)enterWCMsgListWithLastItemCreateTime:(unsigned int)arg1;
- (void)forceCheckIsLoginWebWX;
- (unsigned long)genRandomClienMsgId;
- (void)getAllChat;
- (id)getSendActiveCGI;
- (void)handleEnterEnterpriseChat:(id)arg1;
- (void)handleEnterWCMsgList:(id)arg1;
- (void)handleMarkEnterpriseChatRead:(id)arg1;
- (void)handleMarkPatternLockUpdate:(id)arg1;
- (void)handleMarkTimelineListRead:(id)arg1;
- (void)handleQuitEnterpriseChat:(id)arg1;
- (void)handleSyncDevicNameCGIResponse:(id)arg1;
- (void)handleSyncDeviceNameWithFunctionMsg:(id)arg1;
- (id)init;
- (BOOL)isExtDeviceLockedWithHelperType:(unsigned long)arg1;
- (BOOL)isExtDeviceOnlineWithHelperType:(unsigned long)arg1;
- (BOOL)isLoginWebWX;
- (BOOL)isNeedShowPush;
- (BOOL)isNeedSyncChatname:(id)arg1;
- (BOOL)isRunningAsBakDevice;
- (void)loadClientDataCache;
- (void)logoutWeb:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)macDeviceName;
- (void)markPatternLockUpdate;
- (void)markTimelineListReadWithLastItemId:(id)arg1 itemCreateTime:(unsigned int)arg2;
- (void)markVoiceMsgAsReadWithMessage:(id)arg1;
- (void)onActiveUsrNameChange:(id)arg1 curUsrName:(id)arg2;
- (void)onAuthOK;
- (void)onGetChatListResponsed:(id)arg1;
- (void)onGetEnterFunction:(id)arg1;
- (void)onGetMarkFunction:(id)arg1;
- (void)onGetNotifyUnlockFunction:(id)arg1;
- (void)onGetOnlineInfoResponse:(id)arg1 newOnlineVersion:(unsigned long)arg2;
- (void)onGetQuitFunction:(id)arg1;
- (void)onGetSendCommandFunction:(id)arg1;
- (void)onGetSyncEnd;
- (void)onKickQuit;
- (void)onLanguageChange;
- (void)onManulLogOut;
- (void)onMarkMsgReadReturn:(id)arg1 withResponse:(id)arg2;
- (void)onRemoteDeviceEnterSession:(id)arg1;
- (void)onRemoteDeviceQuitSession:(id)arg1;
- (void)saveClientDataCache;
- (void)sendActiveRequest;
- (void)sendSyncDeviceNameCGIIfNeeded;
- (void)sendUnActiveRequest;
- (void)setAuthFlag:(unsigned int)arg1;
- (void)setIsNeedShowPush:(BOOL)arg1;
- (void)setLastDeviceActiveMsg:(id)arg1;
- (BOOL)shoudlSendActiveCGI;
- (BOOL)shouldSendSyncDeviceNameCGI;
- (BOOL)shouldShowMacHelper;
- (BOOL)shouldShowPushSwitch;
- (BOOL)shouldVibrateOrSoundForNewMessage;
- (void)statusNotifyGetChatListRequest;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

