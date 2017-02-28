//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, WCDataBase;

@interface ChatMigrationBackupChatDB : NSObject
{
    NSMutableArray *m_arrCurMsgWrapList;
    unsigned int uiCurrentCursor;
    unsigned int uiLastQueryedRowID;
    BOOL bIsLastMsgList;
    NSString *m_dbPath;
    WCDataBase *m_db;
}

- (void).cxx_destruct;
- (id)GetLocalUsrName:(id)arg1;
- (id)GetMessageExtTable:(id)arg1;
- (id)GetMessageTable:(id)arg1;
- (id)GetMsgAsRowDesc:(id)arg1 Where:(const struct WCDBConditionBase *)arg2 Order:(const struct WCDBConditionBase *)arg3 Limit:(unsigned long)arg4;
- (unsigned int)GetMsgCount:(id)arg1;
- (id)GetMsgUseBatchQuery:(id)arg1 FromRowID:(unsigned int)arg2;
- (void)HandleMessage:(id)arg1 ChatName:(id)arg2 Des:(unsigned long)arg3;
- (void)closeDB;
- (BOOL)copyMainDBToBakChatDB:(id)arg1 WithMainControllerLock:(id)arg2;
- (void)dealloc;
- (id)initBakChatDB;
@property(retain, nonatomic) WCDataBase *m_db; // @synthesize m_db;
@property(retain, nonatomic) NSString *m_dbPath; // @synthesize m_dbPath;
- (BOOL)openBakChatDB;
- (void)removeBakChatDB;
- (void)removeBakChatDBExtDir;
- (void)removeBakChatDBPossibleFile:(id)arg1;

@end

