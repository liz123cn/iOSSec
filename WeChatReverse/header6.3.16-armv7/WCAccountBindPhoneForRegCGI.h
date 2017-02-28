//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IDCHostMgrExt.h"
#import "IRsaCertMgrExt.h"

@class NSMutableDictionary, NSString;

@interface WCAccountBindPhoneForRegCGI : MMObject <IDCHostMgrExt, IRsaCertMgrExt>
{
    id <WCAccountBindPhoneForRegCGIDelegate> _delegate;
    NSMutableDictionary *_dicEventID;
    int _accountRegMode;
    NSString *_clientSeqID;
    NSString *_currentUserName;
    unsigned long _nextAuthType;
}

- (void).cxx_destruct;
- (void)BindMobileAgain:(id)arg1;
- (void)RSAProtobufMessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)cancelAllEvent;
- (BOOL)checkForgetPwdVerifyCode:(id)arg1 verifyCode:(id)arg2;
- (BOOL)checkLoginPhoneNumberStatus:(id)arg1 tryCount:(unsigned long)arg2 adjustRet:(unsigned long)arg3;
- (BOOL)checkLoginVerifyCode:(id)arg1 verifyCode:(id)arg2;
- (BOOL)checkRegPhoneNumberStatus:(id)arg1 tryCount:(unsigned long)arg2 adjustRet:(unsigned long)arg3;
- (BOOL)checkRegVerifyCode:(id)arg1 verifyCode:(id)arg2;
- (BOOL)checkSafeDeviceVerifyCode:(id)arg1 authTicket:(id)arg2 verifyCode:(id)arg3;
@property(retain, nonatomic) NSString *clientSeqID; // @synthesize clientSeqID=_clientSeqID;
- (BOOL)createBindMobileProtobufEvent:(id)arg1;
@property(retain, nonatomic) NSString *currentUserName; // @synthesize currentUserName=_currentUserName;
- (void)dealloc;
- (BOOL)getForgetPwdVerifyCode:(id)arg1;
- (BOOL)getForgetPwdVoiceVerifyCode:(id)arg1 languageCode:(id)arg2;
- (BOOL)getLoginVerifyCode:(id)arg1;
- (BOOL)getLoginVoiceVerifyCode:(id)arg1 languageCode:(id)arg2;
- (BOOL)getRegVerifyCode:(id)arg1;
- (BOOL)getRegVoiceVerifyCode:(id)arg1 languageCode:(id)arg2;
- (BOOL)getSafeDeviceVerifyCode:(id)arg1 authTicket:(id)arg2;
- (BOOL)getSafeDeviceVoiceVerifyCode:(id)arg1 authTicket:(id)arg2 languageCode:(id)arg3;
- (void)handleRespForBindMobile:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isRunningForCGI:(int)arg1;
- (void)removeCGI:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
