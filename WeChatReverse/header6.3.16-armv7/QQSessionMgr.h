//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IAudioSenderExt.h"
#import "IMMNewSessionMgrExt.h"
#import "IMsgExt.h"
#import "INewArrivalExt.h"
#import "IQQContactMgrExt.h"
#import "ISessionStorageDelegate.h"
#import "MMService.h"
#import "QQOfflineServerTipsCgiDelegate.h"
#import "SessionDelegate.h"

@class MMBaseSessionStorage, NSMutableDictionary, NSString, QQOfflineServerTips, QQOfflineServerTipsCgi;

@interface QQSessionMgr : MMService <ISessionStorageDelegate, IMsgExt, MMService, SessionDelegate, IQQContactMgrExt, IAudioSenderExt, INewArrivalExt, IMMNewSessionMgrExt, QQOfflineServerTipsCgiDelegate>
{
    QQOfflineServerTips *m_serverTipsCache;
    QQOfflineServerTipsCgi *m_serverTipsCgi;
    MMBaseSessionStorage *m_sessionStorage;
    NSMutableDictionary *m_dictUsrname2CellData;
}

- (void).cxx_destruct;
- (id)GetLastMessage;
- (unsigned long)GetTotalUnreadCount;
- (void)OnAddMsg:(id)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelMsg:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgSent:(id)arg1;
- (void)OnPreAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUnReadCountChange:(id)arg1;
- (void)clearServerTips;
- (void)dealloc;
- (void)deleteAllSessions;
- (void)deleteOldVersionSessionCache;
- (void)deleteSessionAtIndex:(unsigned long)arg1;
- (void)fireListener:(int)arg1 withSessionInfo:(id)arg2;
- (id)genMainFrameSessionInfo;
- (unsigned long)getNewArrivalCount;
- (id)getNewArrivalList;
- (id)getServerTipsDonwloadUrl;
- (id)getServerTipsMsg;
- (id)getServerTipsScheme;
- (id)importSessions;
- (id)init;
- (void)isMessage:(id)arg1 Handled:(char *)arg2;
- (void)isUser:(id)arg1 Handled:(char *)arg2;
- (void)isUser:(id)arg1 hasSpecalSessionInfo:(id *)arg2;
- (BOOL)launch3rdApp:(id)arg1;
- (void)launchOrDownloadQQ;
@property(retain, nonatomic) QQOfflineServerTips *m_serverTipsCache; // @synthesize m_serverTipsCache;
@property(retain, nonatomic) QQOfflineServerTipsCgi *m_serverTipsCgi; // @synthesize m_serverTipsCgi;
- (void)onDeleteQQContact:(id)arg1;
- (void)onDeleteSessionOfUser:(id)arg1;
- (void)onGetQQofflineServerTipsMsg:(id)arg1 Scheme:(id)arg2 DownloadUrl:(id)arg3;
- (void)onModifyContact:(id)arg1;
- (void)onModifyQQContact:(id)arg1;
- (void)onNewQQContact:(id)arg1;
- (void)onQQNewArrivalCountChange:(unsigned long)arg1;
- (void)onServiceInit;
- (BOOL)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)onSyncQQContactEnd;
- (void)registerExt;
- (id)sessionCellDataAtIndex:(int)arg1;
- (id)sessionCellDataWithUsrName:(id)arg1;
- (unsigned long)sessionCount;
- (id)sessionInfoAtIndex:(int)arg1;
- (id)sessionInfoWithUsrName:(id)arg1;
- (void)startRequestNewServerTips;
- (void)syncAllContact;
- (void)syncSessionContact;
- (void)unRegisterExt;
- (void)updateCellData:(id)arg1;
- (int)updateSessionInfo:(id)arg1;
- (BOOL)zeroNewArrivalCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

