//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMDBRAssist.h"

@class MMDBRAssistConfig, NSString, WCDBCorruptInfo;

@interface MMDBRAssist : NSObject <MMDBRAssist>
{
    WCDBCorruptInfo *m_recoveringCorruptInfo;
    MMDBRAssistConfig *m_config;
    WCDBCorruptInfo *m_latestCorruptInfo;
    struct MMDBRAssistInfo m_assistInfo;
}

+ (id)AllAssistObjects;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)ClearCorruptNum;
- (void)CloseDatabase;
- (unsigned int)DatabaseID;
- (id)DatabaseLock;
- (id)DatabaseName;
- (id)DatabasePath;
- (id)DatabaseRecoverTip;
- (unsigned int)DatabaseScene;
- (unsigned int)KeyRecoverFail;
- (unsigned int)KeyRecoverSucc;
- (unsigned int)KeyUICancel;
- (unsigned int)KeyUIConfirm;
- (id)LocalDatabaseName;
- (void)OperationOnSucc;
- (id)PossibleDBFileSuffix;
- (void)clearLatestCorruptInfo;
- (void)clearRecoveringCorruptInfo;
- (void)dealloc;
@property(readonly, copy) NSString *description;
- (id)init;
- (id)initWithAssistInfo:(const struct MMDBRAssistInfo *)arg1;
@property(nonatomic) struct MMDBRAssistInfo m_assistInfo; // @synthesize m_assistInfo;
@property(retain, nonatomic) MMDBRAssistConfig *m_config; // @synthesize m_config;
@property(retain, nonatomic) WCDBCorruptInfo *m_latestCorruptInfo; // @synthesize m_latestCorruptInfo;
@property(retain, nonatomic) WCDBCorruptInfo *m_recoveringCorruptInfo; // @synthesize m_recoveringCorruptInfo;
- (void)resetConfig;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

