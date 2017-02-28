//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMKernelExt.h"
#import "NetworkStatusDelegate.h"
#import "NotifyFromEventDelegate.h"
#import "PBMessageObserverDelegate.h"

@class CMMDB, CNetworkStatus, MMTimer, MMTracerouteExecutor, NSDate, NSMutableArray, NSMutableString, NSRecursiveLock, NSString;

@interface CMainControll : MMObject <NotifyFromEventDelegate, NetworkStatusDelegate, MMKernelExt, PBMessageObserverDelegate>
{
    CMMDB *m_oMMDB;
    NSRecursiveLock *m_oLock;
    NSString *m_nsDocPath;
    MMTimer *m_oTimerCheckEvent;
    id <NotifyFromMainCtrlDelegate> m_delNotifyFromMainCtrl;
    NSMutableArray *m_arrMessageList;
    NSString *m_nsToken;
    NSString *m_nsResendToken;
    unsigned long m_uiTokenStatus;
    NSString *m_nsSound;
    NSString *m_nsVoipSound;
    unsigned long m_uiTimerCount;
    BOOL m_bSendingToken;
    BOOL m_bNeedSend;
    unsigned long m_uiLastNetworkStatus;
    unsigned long m_uiNetworkReachabilitySeed;
    unsigned long long m_unLastDNS;
    NSDate *m_dtLastSyncSend;
    unsigned long m_uiSyncSendCount;
    NSDate *m_dtLastSyncForAuth;
    NSDate *m_dtLastGetUpdateInfo;
    CNetworkStatus *m_oNetworkStatus;
    BOOL m_bNeedSyncAddressBook;
    BOOL m_bSyncAddrFromAuth;
    unsigned long m_uiSyncScene;
    NSRecursiveLock *m_oMsgQueLock;
    BOOL m_bStop;
    unsigned long m_uiLastApnsSetting;
    BOOL m_bReportAddMsgFail;
    BOOL m_didTraceRouteFail;
    NSMutableString *m_statusMessage;
    MMTracerouteExecutor *m_tracerouteExcutor;
    NSDate *_m_tLastNotify;
    NSDate *_m_tLastLongConnDisconnect;
}

- (void).cxx_destruct;
- (void)CheckResend;
- (void)CheckSyncAddressBook;
- (void)CheckUpdate:(id)arg1;
- (unsigned long)CheckVersion;
- (void)CheckWhatsnew;
- (void)ClearData;
- (void)CreateSendTokenEventWithScene:(unsigned int)arg1;
- (void)CreateSyncTimer;
- (void)GetBottleContact;
- (id)GetLocalInfo;
- (unsigned long)GetNetworkReachabilitySeed;
- (void)HandleAuthAtFirstTime;
- (void)HandleNewSyncPush:(id)arg1;
- (void)HandleQQChanged;
- (void)HandleRespForGetUpdateInfo:(id)arg1;
- (void)HandleRespForSendToken:(id)arg1;
- (void)HandleSpecialMessage:(id)arg1;
- (BOOL)IsInit;
- (BOOL)IsLogIn;
- (BOOL)IsNewUser;
- (void)LoadLastSvrID;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)NotifyFromEvent:(id)arg1 Message:(unsigned long)arg2 MessageInfo:(id)arg3;
- (void)RaiseEvent:(unsigned long)arg1 MessageID:(unsigned long)arg2 MessageInfo:(id)arg3;
- (void)ReachabilityChange:(unsigned long)arg1;
- (void)ReloadData:(BOOL)arg1;
- (void)ReloadServiceData_InMainThread;
- (void)ReportApnsSetting:(BOOL)arg1;
- (void)SendMsg:(BOOL)arg1;
- (void)SendToken:(id)arg1 Status:(unsigned long)arg2 Sound:(id)arg3 VoipSound:(id)arg4;
- (void)SetShowWhatsnew:(BOOL)arg1;
- (void)SpeedyNotifyFromEvent:(id)arg1 Message:(unsigned long)arg2 MessageInfo:(id)arg3;
- (unsigned long)Start:(id)arg1;
- (void)Stop;
- (void)StopAllEvent;
- (void)TimerCheckEvent;
- (void)TimerSync;
- (void)dealloc;
- (void)didTrancerouteEnd;
- (void)handleIPXXMessage:(id)arg1;
- (id)init;
@property(nonatomic) __weak id <NotifyFromMainCtrlDelegate> m_delNotifyFromMainCtrl; // @synthesize m_delNotifyFromMainCtrl;
@property(nonatomic) BOOL m_didTraceRouteFail; // @synthesize m_didTraceRouteFail;
@property(retain, nonatomic) NSDate *m_dtLastGetUpdateInfo; // @synthesize m_dtLastGetUpdateInfo;
@property(retain, nonatomic) NSDate *m_dtLastSyncForAuth; // @synthesize m_dtLastSyncForAuth;
@property(retain, nonatomic) NSDate *m_dtLastSyncSend; // @synthesize m_dtLastSyncSend;
@property(retain, nonatomic) NSString *m_nsDocPath; // @synthesize m_nsDocPath;
@property(retain, nonatomic) NSString *m_nsSound; // @synthesize m_nsSound;
@property(retain, nonatomic) NSString *m_nsToken; // @synthesize m_nsToken;
@property(retain, nonatomic) NSString *m_nsVoipSound; // @synthesize m_nsVoipSound;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock;
@property(retain, nonatomic) CMMDB *m_oMMDB; // @synthesize m_oMMDB;
@property(retain, nonatomic) CNetworkStatus *m_oNetworkStatus; // @synthesize m_oNetworkStatus;
@property(retain, nonatomic) NSMutableString *m_statusMessage; // @synthesize m_statusMessage;
@property(retain, nonatomic) NSDate *m_tLastLongConnDisconnect; // @synthesize m_tLastLongConnDisconnect=_m_tLastLongConnDisconnect;
@property(retain, nonatomic) NSDate *m_tLastNotify; // @synthesize m_tLastNotify=_m_tLastNotify;
@property(retain, nonatomic) MMTracerouteExecutor *m_tracerouteExcutor; // @synthesize m_tracerouteExcutor;
@property(nonatomic) unsigned long m_uiTokenStatus; // @synthesize m_uiTokenStatus;
- (void)onAuthOK;
- (void)onKickQuit;
- (void)onLoginOK;
- (void)speedyDispacthMessage:(id)arg1;
- (void)startTracerouteWithIpAddress:(const char *)arg1;
- (void)tracerouteExecutor:(id)arg1 endedTracerouteWithSteps:(id)arg2;
- (void)tracerouteExecutor:(id)arg1 startedPingingWithTTL:(id)arg2;
- (void)tracerouteExecutor:(id)arg1 traceRouteStepDone:(id)arg2;
- (void)tracerouteExecutor:(id)arg1 tracerouteFailed:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

