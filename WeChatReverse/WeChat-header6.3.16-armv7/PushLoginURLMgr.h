//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "GetA8KeyLogicDelegate.h"
#import "IMsgExt.h"
#import "MMKernelExt.h"
#import "MMService.h"

@class GetA8KeyLogic, NSString;

@interface PushLoginURLMgr : MMService <IMsgExt, GetA8KeyLogicDelegate, MMKernelExt, MMService>
{
    GetA8KeyLogic *_getA8KeyLogic;
}

+ (void)clearOneClickLoginInfo;
+ (BOOL)shouldShowOneClickLogin;
- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)dealloc;
- (id)getGetA8KeyLogic;
- (id)init;
- (void)onGetA8KeyOneClickLoginWithURL:(id)arg1 extraInfo:(id)arg2;
- (void)onManulLogOut;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

