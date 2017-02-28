//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBMessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"

@class JSAPIAuthWrap, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface MMJSApiVerifyMgr : NSObject <PBMessageObserverDelegate, UIAlertViewDelegate>
{
    NSMutableDictionary *_dictUrl2JSApiPermissions;
    NSMutableDictionary *_dictApiName2Index;
    id <MMJSApiVerifyMgrDelegate> _mgrDelegate;
    NSMutableDictionary *_dictRealTimeVerify;
    NSMutableDictionary *_dictOfflineVerify;
    NSMutableDictionary *_dictApiAuthInfo;
    NSMutableArray *_jsAuthQueue;
    BOOL _isHandlingJSAuth;
    NSMutableDictionary *_dictAuthFuncBlock;
    NSString *_alertTile;
    JSAPIAuthWrap *_makingAuthWrap;
    NSMutableDictionary *_dictVerifyOverhead;
    NSArray *_groupAuthInfoList;
    NSMutableDictionary *_dictHidedMenuitemByPage;
    NSMutableDictionary *_dictScopeAuthInfo;
    NSMutableDictionary *_dictUrl2AppId;
    NSArray *_verifyInfoList;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)addJSAuthToQueue:(id)arg1 funcBlock:(CDUnknownBlockType)arg2 failHandleBlock:(CDUnknownBlockType)arg3;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)askUsrToMakeAuth:(CDUnknownBlockType)arg1 authWrap:(id)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)checkJSAPIAuth:(id)arg1 url:(id)arg2 functionDef:(id)arg3 funcBlock:(CDUnknownBlockType)arg4 failHandleBlock:(CDUnknownBlockType)arg5;
- (void)checkJSAuthQueue;
- (id)failHandleBlockKey:(id)arg1;
- (id)funcBlockKey:(id)arg1;
- (id)getApiAuthInfo:(id)arg1;
- (id)getAppIdForUrl:(id)arg1;
- (id)getAuthorizedWebMonitorEvents:(id)arg1 withCurEvent:(id)arg2;
- (unsigned char)getJSApiPermission:(id)arg1 url:(id)arg2;
- (int)getPermissionIndex:(id)arg1;
- (int)getPermissionIndexFromApiName:(id)arg1;
- (id)getPermissionedWebEventsForOfflineH5:(id)arg1;
- (id)getScopeAuthInfo:(id)arg1 apiName:(id)arg2;
- (void)handleJSAPICallBack:(id)arg1 err_msg:(id)arg2 failBlock:(CDUnknownBlockType)arg3;
- (void)handleJSAuthFail:(id)arg1 errDesc:(id)arg2 authWrap:(id)arg3;
- (void)handleJSOAuth:(id)arg1;
- (void)handlePreVerifyJSAPI:(id)arg1;
- (void)handleRealtimeVerifyJSAPI:(id)arg1;
- (void)handleSetAuth:(id)arg1;
- (void)hideAllNonBaseMenuItem;
- (void)hideMenuitemBatch:(id)arg1;
- (void)idKeyReportForVerifyFail:(id)arg1;
- (id)init;
- (BOOL)isMenuItemHidenByPage:(id)arg1;
- (void)kvJSCallReport:(id)arg1 permissionValue:(unsigned char)arg2 isSuccess:(BOOL)arg3 errorCode:(int)arg4 baseErrorCode:(int)arg5 funcName:(id)arg6;
@property(nonatomic) __weak id <MMJSApiVerifyMgrDelegate> mgrDelegate; // @synthesize mgrDelegate=_mgrDelegate;
- (void)modifyPermissionValue:(id)arg1 url:(id)arg2 permissionValue:(unsigned char)arg3;
- (void)saveJSAPIAuthInfo:(id)arg1;
- (void)saveJSApiPermissions:(id)arg1 url:(id)arg2;
- (void)saveJSApiPermissions:(id)arg1 url:(id)arg2 WithCheckedPreVerifyList:(BOOL)arg3;
- (void)saveScopeAuthInfo:(id)arg1;
- (void)sendSetAuthRequest:(id)arg1;
- (void)showAllNonBaseMenuItem;
- (void)showMenuitemBatch:(id)arg1;
- (void)startupPreVerifyJSAPI:(id)arg1 url:(id)arg2 failHandleBlock:(CDUnknownBlockType)arg3;
- (void)startupRealTimeVerifyJSAPI:(id)arg1 url:(id)arg2 functionDef:(id)arg3 funcBlock:(CDUnknownBlockType)arg4 failHandleBlock:(CDUnknownBlockType)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
