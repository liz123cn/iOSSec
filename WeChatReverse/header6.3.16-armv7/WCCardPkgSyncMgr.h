//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSData, WCCardPkgDB;

@interface WCCardPkgSyncMgr : MMObject <PBMessageObserverDelegate>
{
    NSData *_syncKeyBuffer;
    WCCardPkgDB *_wcCardPkgDB;
    id <WCCardSyncMgrDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)clearSyncKey;
- (void)dealloc;
@property(nonatomic) __weak id <WCCardSyncMgrDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getSyncKeyBufferFilePath;
- (void)handleWCCardSyncResp:(id)arg1 Event:(unsigned long)arg2;
- (id)init;
- (void)initDB:(id)arg1;
- (void)loadSyncKeyBuffer;
- (void)reloadSyncKeyBuffer;
- (BOOL)saveSyncKeyBuffer:(id)arg1;
- (void)syncByNotify:(unsigned int)arg1 Scene:(unsigned int)arg2;

@end

