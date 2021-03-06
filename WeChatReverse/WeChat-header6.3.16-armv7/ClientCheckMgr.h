//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"

@class NSLock, NSMutableSet, NSString;

@interface ClientCheckMgr : MMService <IMsgExt, MMService>
{
    NSLock *_lock;
    NSMutableSet *_setImageList;
}

- (void).cxx_destruct;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)addImage:(const char *)arg1;
- (id)arrToString:(id)arg1;
- (void)checkConsistency:(id)arg1;
- (void)checkHook:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)onServiceInit;
- (void)registerAddImageCallBack;
- (void)reportAppList:(id)arg1;
- (void)reportFileConsistency:(id)arg1 fileName:(id)arg2 offset:(unsigned int)arg3 bufferSize:(unsigned int)arg4 seq:(unsigned int)arg5;
- (id)runningProcesses;
- (void)test;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

