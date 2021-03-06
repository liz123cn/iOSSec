//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "MessageObserverDelegate.h"
#import "PBMessageObserverDelegate.h"

@class CMMDB, NSDate, NSRecursiveLock, NSString, OplogDataLogic;

@interface NewSyncService : MMService <MMService, MessageObserverDelegate, PBMessageObserverDelegate>
{
    BOOL m_bNeedSync;
    BOOL m_bHasSync;
    BOOL m_bHasInit;
    unsigned long m_uiSelector;
    unsigned long m_uiSyncScene;
    unsigned long m_uiSyncContinueCount;
    NSString *m_lastSyncKeyMd5;
    NSDate *m_tLastNotify;
    NSDate *m_tLastLongConnDisconnect;
    CMMDB *m_oMMDB;
    NSString *m_nsDocPath;
    NSRecursiveLock *m_oLock;
    NSRecursiveLock *m_oHandleSyncLock;
    id <NotifyFromEventDelegate> m_delSyncHandler;
    OplogDataLogic *m_oplogData;
    BOOL m_bNeedSyncOplog;
    BOOL m_bSyncOplog;
    BOOL m_bSyncOpError;
    BOOL m_bIsSyncPause;
    BOOL _m_bFirstSyncAfterBgfgChange;
}

- (void).cxx_destruct;
- (void)AfterManualAuthNotifySync;
- (void)ApnsNotifySync;
- (BOOL)BackGroundFetchToSync;
- (void)BackGroundToForeGroundSync;
- (BOOL)CheckSelector:(unsigned long)arg1;
- (unsigned long)GetSelector;
- (void)HandleNewSyncPush:(id)arg1;
- (void)HandleOplog:(id)arg1 Event:(unsigned long)arg2;
- (BOOL)HandleSyncResp:(id)arg1 Push:(BOOL)arg2 ShowPush:(BOOL)arg3 Scene:(unsigned long)arg4;
- (void)InitDB:(id)arg1 Lock:(id)arg2 DocPath:(id)arg3 SyncHandlerDelegate:(id)arg4;
- (BOOL)InsertOplog:(unsigned long)arg1 Oplog:(id)arg2 Sync:(BOOL)arg3;
- (BOOL)InternalCreateSync:(unsigned long)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)MessageReturn:(unsigned long)arg1 MessageInfo:(id)arg2 Event:(unsigned long)arg3;
- (void)NeedToSync;
- (void)NeedToSyncOplog;
- (BOOL)NotifyToSync;
- (void)ProcessStartSync;
- (void)SetLastLongConnDisconectTime:(id)arg1;
- (void)SetLastNotifyTime:(id)arg1;
- (void)SetSelector:(unsigned long)arg1;
- (unsigned long)StartOplog:(unsigned long)arg1 Oplog:(id)arg2;
- (void)checkSyncOplog;
- (void)dealloc;
- (id)init;
@property BOOL m_bFirstSyncAfterBgfgChange; // @synthesize m_bFirstSyncAfterBgfgChange=_m_bFirstSyncAfterBgfgChange;
@property BOOL m_bHasSync; // @synthesize m_bHasSync;
@property BOOL m_bNeedSync; // @synthesize m_bNeedSync;
@property unsigned long m_uiSyncScene; // @synthesize m_uiSyncScene;
- (void)makeSyncPause;
- (void)makeSyncResume;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)startSyncOplog;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

