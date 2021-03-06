//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "CSettingExt.h"
#import "IWCPayControlLogicExt.h"
#import "MMService.h"
#import "MMUIViewControllerDelegate.h"
#import "PBMessageObserverDelegate.h"

@class MMPatternLockBufferData, NSString;

@interface MMPatternLockPwdMgr : MMService <PBMessageObserverDelegate, CSettingExt, MMUIViewControllerDelegate, IWCPayControlLogicExt, MMService>
{
    BOOL _isLocalVerify;
    BOOL _isNeedVerifyPwd;
    BOOL _isCloseViaToken;
    MMPatternLockBufferData *_lockBuffer;
    int _userRegFlag;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)OnPayCardListChanged:(id)arg1;
- (void)checkPatternLockStatusViaSvr;
- (void)closePatternLockPwdWithPatternHash:(id)arg1;
- (void)closePatternLockPwdWithUserToken:(id)arg1;
- (void)dealloc;
- (id)getBufferKeyDataWithVersion:(unsigned long)arg1;
- (unsigned int)getPatternLockTimeInterval;
- (id)getViewController;
- (void)handlePatternLockCheckStatusBack:(id)arg1;
- (id)init;
- (void)initData;
@property(nonatomic) BOOL isCloseViaToken; // @synthesize isCloseViaToken=_isCloseViaToken;
@property(nonatomic) BOOL isLocalVerify; // @synthesize isLocalVerify=_isLocalVerify;
- (BOOL)isNeedSvrVerify;
@property(nonatomic) BOOL isNeedVerifyPwd; // @synthesize isNeedVerifyPwd=_isNeedVerifyPwd;
- (unsigned int)isPatternLockSetup;
@property(retain, nonatomic) MMPatternLockBufferData *lockBuffer; // @synthesize lockBuffer=_lockBuffer;
- (void)modifyPatternLockPwdWithOldPatternHash:(id)arg1 andNewHash:(id)arg2;
- (void)onGetOpPatternLockResponse:(id)arg1 eventID:(unsigned long)arg2;
- (void)onGetRegisterNewPatternLockResponse:(id)arg1 eventID:(unsigned long)arg2;
- (void)onOpPatternLockResponseErrorWithOpCmd:(unsigned long)arg1;
- (void)onOpPatternLockResponseOKWithOpCmd:(unsigned long)arg1;
- (void)onSettingChanged:(int)arg1;
- (void)sendPatternLockOpRequestWithCmdID:(unsigned long)arg1 oldHash:(id)arg2 newHash:(id)arg3;
@property(nonatomic) int userRegFlag; // @synthesize userRegFlag=_userRegFlag;
- (void)setupNewPatternLockPwdWithUserToken:(id)arg1 andPatternHash:(id)arg2;
- (BOOL)updateBufferDataWithSvrBuffer:(id)arg1;
- (int)verifyBufferDataIsInvalid;
- (int)verifyLockInfoIsValid;
- (void)verifyPatternLockPwdWithPatternHash:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

