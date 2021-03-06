//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMImageLoaderObserver.h"
#import "MMService.h"

@class GameCenterMsgDb, NSString;

@interface GameCenterMsgMgr : MMService <MMService, IMsgExt, MMImageLoaderObserver>
{
    BOOL shouldClearDb;
    BOOL shouldClearNotify;
    GameCenterMsgDb *_db;
}

- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (BOOL)canClearMsgNotify:(unsigned long)arg1;
- (void)clearAllRedDot;
- (BOOL)clearFindFriendEntry;
- (BOOL)clearGameCenterBubble:(unsigned long)arg1;
- (BOOL)clearGameCenterGiftRedDot;
- (BOOL)clearGameCenterH5FloatLayer;
- (BOOL)clearGameCenterMsgCenterRedDot;
- (BOOL)clearKeyAtPosition:(id)arg1;
- (BOOL)clearMsgDb:(id)arg1;
- (void)clearMsgList;
- (BOOL)coverNotify:(id)arg1;
@property(retain, nonatomic) GameCenterMsgDb *db; // @synthesize db=_db;
- (void)dealloc;
- (BOOL)deleteAllMsg;
- (BOOL)deleteMsgBeforeTimeStamp:(unsigned long)arg1;
- (BOOL)deleteMsgByLocalId:(int)arg1;
- (BOOL)downloadEntryIconIfNeed:(id)arg1;
- (int)getDownloadTime:(unsigned long)arg1;
- (id)getDownloadTimeKey:(unsigned long)arg1;
- (id)getFindFriendEntryNotify;
- (id)getGameCenterBubble;
- (id)getGameCenterGiftRedDot;
- (id)getGameCenterH5FloatLayer;
- (id)getGameCenterMsgCenterRedDot;
- (unsigned long)getKeyAtPosition:(id)arg1;
- (unsigned long)getLastMsgKey;
- (id)getMsgCenterList:(int)arg1 maxCount:(int)arg2;
- (id)getMsgCenterListForJsApi:(int)arg1 lastLocalId:(int)arg2 onlyUnRead:(BOOL)arg3 maxCount:(int)arg4;
- (id)getMsgDbModelByLocalId:(unsigned long)arg1;
- (id)getMsgDbModelList;
- (id)getMsgWithLocalId:(unsigned long)arg1;
- (id)getNotifyWithKey:(id)arg1;
- (id)init;
- (BOOL)isEntryIconDownloading:(unsigned long)arg1;
- (void)onServiceClearData;
- (void)onServiceEnterBackground;
- (void)onServiceEnterForeground;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (void)onServiceTerminate;
- (BOOL)setDownloadTime:(unsigned long)arg1 DownloadTime:(int)arg2;
- (BOOL)setKeyAtPosition:(id)arg1 Value:(unsigned long)arg2;
- (BOOL)setMsgCenterAllReadForJsApi;
- (BOOL)shouldCoverNotify:(id)arg1;
- (void)statMsgReceived:(id)arg1;
- (BOOL)underWeakNetStrategy:(id)arg1;
- (BOOL)urlSameWithFindFriendEntry:(id)arg1 DownloadTime:(int *)arg2 LocalId:(unsigned int *)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

