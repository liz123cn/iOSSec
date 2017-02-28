//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMKernelExt.h"
#import "MMService.h"
#import "StoreEmotionBackupLogicObjectDelegate.h"

@class NSString, StoreEmotionBackupLogicObject;

@interface StoreEmotionBackupMgr : MMService <MMKernelExt, StoreEmotionBackupLogicObjectDelegate, MMService>
{
    StoreEmotionBackupLogicObject *_backupLogicObject;
    int _scene;
}

- (void).cxx_destruct;
@property(retain, nonatomic) StoreEmotionBackupLogicObject *backupLogicObject; // @synthesize backupLogicObject=_backupLogicObject;
- (void)backupSortedEmotionToServer:(id)arg1;
- (void)backupStoreEmotionToServerFromScene:(int)arg1;
- (BOOL)canStartCgiNow;
- (void)dealloc;
- (id)init;
- (void)onAuthOK;
- (void)onStoreEmotionBackupLogicFailed;
- (void)onStoreEmotionBackupLogicNoneedBackup;
- (void)onStoreEmotionBackupLogicOK;
@property(nonatomic) int scene; // @synthesize scene=_scene;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

