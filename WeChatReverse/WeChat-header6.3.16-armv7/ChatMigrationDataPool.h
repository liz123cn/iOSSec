//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ChatMigrationBackupChatLogicDelegate.h"

@class ChatMigrationBackupChatDB, ChatMigrationBackupChatLogic, NSCondition, NSMutableArray, NSString;

@interface ChatMigrationDataPool : NSObject <ChatMigrationBackupChatLogicDelegate>
{
    BOOL m_bBackuping;
    BOOL m_bGenerate;
    BOOL m_bFinished;
    BOOL m_bCopyDB;
    NSCondition *m_DataPushConditionBuffer;
    unsigned int m_ConsumerWait;
    unsigned int m_ProducerWait;
    unsigned int m_TotalProducePushCount;
    unsigned int m_TotalConsumePushConut;
    id <ChatMigrationDataPoolDelegate> _delegate;
    ChatMigrationBackupChatLogic *_backupChatLogicProducer;
    ChatMigrationBackupChatDB *_backupChatDB;
    NSMutableArray *_producerDataPushArray;
    NSMutableArray *_consumeDataPushArray;
    NSMutableArray *_bufferDataPushArray;
}

+ (unsigned long long)getMsgCountWithSessionItemArray:(id)arg1;
+ (id)getSessionUserNameWithSelectedSessionItems:(id)arg1;
+ (unsigned long long)getSizeWithSessionItemArray:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) ChatMigrationBackupChatDB *backupChatDB; // @synthesize backupChatDB=_backupChatDB;
@property(retain, nonatomic) ChatMigrationBackupChatLogic *backupChatLogicProducer; // @synthesize backupChatLogicProducer=_backupChatLogicProducer;
@property(retain, nonatomic) NSMutableArray *bufferDataPushArray; // @synthesize bufferDataPushArray=_bufferDataPushArray;
- (void)cancelBackup;
@property(retain, nonatomic) NSMutableArray *consumeDataPushArray; // @synthesize consumeDataPushArray=_consumeDataPushArray;
- (void)dealloc;
@property(nonatomic) __weak id <ChatMigrationDataPoolDelegate> delegate; // @synthesize delegate=_delegate;
- (id)getDicOfBackupReportInfo;
- (void)getFirstDataWhenPkgReadyAsyn;
- (void)getFirstDataWhenPkgReadyAsynForBreakPoint;
- (id)getNextPieceOfData;
- (BOOL)getStartBackupInfo:(unsigned long long *)arg1 andSize:(unsigned long long *)arg2 withSeletedSession:(id)arg3;
- (id)init;
- (void)onFinished;
- (void)onGetPieceOfData:(id)arg1;
- (void)onServerCancelWithErrorCode:(int)arg1;
- (void)p_bufferAddDataToConsumer;
- (BOOL)p_copyMainDBToBakChatDB;
- (void)p_dispatchDataToBackupChatLogicWith:(id)arg1;
- (id)p_getDataFromConsumer;
- (void)p_producerAddDataToBuffer;
- (void)p_refreshSetting;
@property(retain, nonatomic) NSMutableArray *producerDataPushArray; // @synthesize producerDataPushArray=_producerDataPushArray;
- (void)removeBakChatDB;
- (void)startGenerateDataPush;
- (void)stopGenerateDataPush;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

