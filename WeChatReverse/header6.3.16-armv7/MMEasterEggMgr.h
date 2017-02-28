//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMPackageDownloadMgrExt.h"
#import "MMService.h"

@class NSMutableArray, NSString;

@interface MMEasterEggMgr : MMService <MMPackageDownloadMgrExt, MMService>
{
    BOOL m_isShowEgg;
    unsigned long m_uiEasterEggLastUpdateTime;
    NSMutableArray *m_arrEgg;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)downLoadEgg;
- (id)eggWithMessage:(id)arg1 isSender:(BOOL)arg2;
- (id)init;
- (void)initEgg:(id)arg1;
- (BOOL)isNeedUpdateEgg;
- (BOOL)isShowEasterEgg;
- (void)onPackageListUpdated:(id)arg1;
- (void)onPackageNeedDelete:(id)arg1 withPackIDs:(id)arg2;
- (void)onPackageNeedUpdate:(id)arg1 withPackIDs:(id)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
