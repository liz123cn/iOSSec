//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCorruptReportInterface.h"

@class NSData, NSRecursiveLock, NSString, WCDBCorruptReport;

@interface WCDataBase : NSObject <WCDBCorruptReportInterface>
{
    struct sqlite3 *m_dbHandle;
    NSData *m_dbEncryptKey;
    BOOL m_isMemoryOnly;
    NSString *m_nsDBPath;
    NSString *m_nsDBFilePath;
    NSString *m_nsDBName;
    NSRecursiveLock *m_oLock;
    unsigned int m_databaseID;
    unsigned long m_initTime;
    id <WCDataBaseEventDelegate> m_eventDelegate;
    WCDBCorruptReport *m_corruptReport;
}

+ (BOOL)GetRowId:(long long *)arg1 fromObject:(id)arg2;
+ (BOOL)deleteDB:(id)arg1;
+ (id)extractOneObjectOfClass:(Class)arg1 fromColumn:(struct sqliterk_column *)arg2;
+ (void)initialize;
+ (BOOL)renameDBFrom:(id)arg1 to:(id)arg2 error:(id *)arg3;
+ (BOOL)safeRenameDBFrom:(id)arg1 to:(id)arg2 error:(id *)arg3;
+ (void)setFileProtection:(id)arg1;
- (void).cxx_destruct;
- (void)ClearCorruptNum;
- (id)DBContext;
- (void)alterTableIfNeeded:(id)arg1 withProperties:(id)arg2;
- (void)autoIncrementPrimaryKey:(id)arg1 withValue:(long long)arg2;
- (BOOL)beginTransaction;
- (void)bindBlobProperty:(const vector_24c76cbd *)arg1 ofObject:(id)arg2 toSTMT:(struct sqlite3_stmt *)arg3;
- (void)bindBlobProperty:(id)arg1 toSTMT:(struct sqlite3_stmt *)arg2;
- (void)callEventTransactionRollback;
- (BOOL)checkTableQueryInfo:(id)arg1;
- (void)close;
- (BOOL)commitTransaction;
- (void)configJournalMode:(BOOL)arg1;
- (BOOL)createIndexOnTable:(id)arg1 withDummyObj:(id)arg2;
- (BOOL)createIndexOnTable:(id)arg1 withIndexArray:(const struct WCDBIndexHelper *)arg2 count:(unsigned long)arg3;
- (BOOL)createTableOfName:(id)arg1 withClass:(Class)arg2;
- (struct sqlite3 *)dbHandle;
- (id)dbLock;
- (void)dealloc;
- (BOOL)deleteObject:(id)arg1 fromTable:(id)arg2;
- (BOOL)deleteObjectsFromTable:(id)arg1 where:(const struct WCDBConditionBase *)arg2;
- (BOOL)deleteOneObjectFromFile:(id)arg1;
- (id)dicTableHelper:(Class)arg1;
- (void)directReportCorrupt:(int)arg1;
- (BOOL)doInsertObject:(id)arg1 onProperties:(const vector_24c76cbd *)arg2 inToTable:(id)arg3 autoIncrement:(BOOL)arg4 isOrReplace:(BOOL)arg5;
- (BOOL)dropTableOfName:(id)arg1;
- (void)dumpObject:(id)arg1 onProperties:(const vector_24c76cbd *)arg2 toNameString:(basic_string_7d00a7a9 *)arg3 andValueString:(basic_string_7d00a7a9 *)arg4 autoIncrement:(BOOL)arg5;
- (basic_string_7d00a7a9)dumpProperty:(id)arg1 withObject:(id)arg2;
- (basic_string_7d00a7a9)dumpProperty:(id)arg1 withValue:(id)arg2;
- (id)errorWithCode:(int)arg1 Description:(id)arg2;
- (BOOL)excuteSQLNoRet:(const char *)arg1;
- (BOOL)excuteSQLNoRet:(const char *)arg1 errCodePrepare:(int *)arg2 errCodeStep:(int *)arg3;
- (BOOL)extractObjects:(id)arg1 columnInfo:(id)arg2 fromSTMT:(struct sqlite3_stmt *)arg3;
- (void)extractOneObject:(id)arg1 fromItem:(id)arg2 index:(int)arg3 STMT:(struct sqlite3_stmt *)arg4;
- (id)extractOneObjectOfClass:(Class)arg1 fromColumn:(struct sqliterk_column *)arg2;
- (id)extractOneObjectOfClass:(Class)arg1 fromSTMT:(struct sqlite3_stmt *)arg2;
- (id)extractOneObjectRepeatedOfClass:(Class)arg1 withColumnInfo:(id *)arg2 STMT:(struct sqlite3_stmt *)arg3;
- (id)extractOneProperty:(id)arg1 fromSTMT:(struct sqlite3_stmt *)arg2 atIndex:(int)arg3;
- (void)fillCrossTableFromTableName:(basic_string_7d00a7a9 *)arg1 queryInfo:(id)arg2;
- (BOOL)fillCrossTableSelectProperty:(basic_string_7d00a7a9 *)arg1 queryInfo:(id)arg2 columnInfo:(id)arg3;
- (void)forceClose;
- (void)generateMultiPrimaryKey:(basic_string_7d00a7a9 *)arg1 withClass:(Class)arg2;
- (void)generateTableAttribute:(basic_string_7d00a7a9 *)arg1 withClass:(Class)arg2;
- (void)generateTablePrefix:(basic_string_7d00a7a9 *)arg1 tableName:(id)arg2 withClass:(Class)arg3;
- (id)getAllObjectsOfClass:(Class)arg1 fromTable:(id)arg2;
- (id)getAllTables;
- (id)getColumnsFromSchema:(id)arg1;
- (basic_string_7d00a7a9)getConditionStringFromObj:(id)arg1;
- (unsigned long)getCountOfObjectsOfClass:(Class)arg1 fromTable:(id)arg2 where:(const struct WCDBConditionBase *)arg3;
- (unsigned long)getCountOfObjectsOfClass:(Class)arg1 fromTable:(id)arg2 withDistinctProperty:(const struct WCDBConditionBase *)arg3 where:(const struct WCDBConditionBase *)arg4;
- (id)getLastObjectOfClass:(Class)arg1 fromTable:(id)arg2;
- (id)getMaxProperty:(const struct WCDBConditionBase *)arg1 ofClass:(Class)arg2 fromTable:(id)arg3;
- (id)getMaxProperty:(const struct WCDBConditionBase *)arg1 where:(const struct WCDBConditionBase *)arg2 ofClass:(Class)arg3 fromTable:(id)arg4;
- (id)getObjectsCrossTables:(id)arg1 where:(const struct WCDBConditionBase *)arg2 orderBy:(const struct WCDBConditionBase *)arg3 limit:(unsigned long)arg4 getError:(id *)arg5;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 onProperties:(const vector_24c76cbd *)arg3 where:(const struct WCDBConditionBase *)arg4 orderBy:(const struct WCDBConditionBase *)arg5 limit:(unsigned long)arg6;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 onProperties:(const vector_24c76cbd *)arg3 where:(const struct WCDBConditionBase *)arg4 orderBy:(const struct WCDBConditionBase *)arg5 limit:(unsigned long)arg6 getError:(id *)arg7;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 where:(const struct WCDBConditionBase *)arg3;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 where:(const struct WCDBConditionBase *)arg3 limit:(unsigned long)arg4;
- (id)getObjectsOfClass:(Class)arg1 fromTable:(id)arg2 where:(const struct WCDBConditionBase *)arg3 orderBy:(const struct WCDBConditionBase *)arg4 limit:(unsigned long)arg5;
- (id)getOneObjectOfClass:(Class)arg1 fromTable:(id)arg2 onProperties:(const vector_24c76cbd *)arg3 where:(const struct WCDBConditionBase *)arg4 orderBy:(const struct WCDBConditionBase *)arg5;
- (id)getOneObjectOfClass:(Class)arg1 fromTable:(id)arg2 where:(const struct WCDBConditionBase *)arg3;
- (id)getOneProperty:(const struct WCDBConditionBase *)arg1 ofClass:(Class)arg2 fromTable:(id)arg3 withQueryString:(const basic_string_7d00a7a9 *)arg4;
- (id)getOnePropertyValue:(const struct WCDBConditionBase *)arg1 ofClass:(Class)arg2 fromTable:(id)arg3 where:(const struct WCDBConditionBase *)arg4 orderBy:(const struct WCDBConditionBase *)arg5;
- (id)getPathWithRowID:(const long long *)arg1;
- (id)getProperty:(const struct WCDBConditionBase *)arg1 ofClass:(Class)arg2 fromTable:(id)arg3;
- (id)getProperty:(const struct WCDBConditionBase *)arg1 ofClass:(Class)arg2 fromTable:(id)arg3 where:(const struct WCDBConditionBase *)arg4;
- (id)getProperty:(const struct WCDBConditionBase *)arg1 ofClass:(Class)arg2 fromTable:(id)arg3 where:(const struct WCDBConditionBase *)arg4 limit:(unsigned long)arg5;
- (id)getProperty:(const struct WCDBConditionBase *)arg1 ofClass:(Class)arg2 fromTable:(id)arg3 where:(const struct WCDBConditionBase *)arg4 orderBy:(const struct WCDBConditionBase *)arg5 limit:(unsigned long)arg6;
- (id)getProperty:(const struct WCDBConditionBase *)arg1 ofClass:(Class)arg2 fromTable:(id)arg3 withQueryString:(const basic_string_7d00a7a9 *)arg4;
- (id)getPropertyWithDistinct:(const struct WCDBConditionBase *)arg1 ofClass:(Class)arg2 fromTable:(id)arg3 where:(const struct WCDBConditionBase *)arg4;
- (id)getSchemaOfTable:(id)arg1;
- (id)getSumProperty:(const struct WCDBConditionBase *)arg1 where:(const struct WCDBConditionBase *)arg2 ofClass:(Class)arg3 fromTable:(id)arg4;
- (id)getTable:(id)arg1 withClass:(Class)arg2;
- (unsigned long)getTablesCount;
- (void)handleEncryptKeyError;
- (id)initMemoryOnlyDB;
- (id)initWithPath:(id)arg1 withEncryptKey:(id)arg2;
- (id)initWithPath:(id)arg1 withEncryptKey:(id)arg2 databaseID:(unsigned int)arg3;
- (id)initWithPath:(id)arg1 withEncryptKey:(id)arg2 databaseID:(unsigned int)arg3 isWalMode:(BOOL)arg4;
- (BOOL)insertObject:(id)arg1 inToTable:(id)arg2 autoIncrement:(BOOL)arg3;
- (BOOL)insertObject:(id)arg1 onProperties:(const vector_24c76cbd *)arg2 inToTable:(id)arg3 autoIncrement:(BOOL)arg4;
- (BOOL)insertOrUpdateObject:(id)arg1 inToTable:(id)arg2;
- (BOOL)insertOrUpdateObject:(id)arg1 inToTable:(id)arg2 onConflict:(CDUnknownBlockType)arg3;
- (BOOL)insertOrUpdateObject:(id)arg1 onProperties:(const vector_24c76cbd *)arg2 inToTable:(id)arg3;
- (BOOL)insertOrUpdateObjects:(id)arg1 inToTable:(id)arg2;
- (BOOL)insertOrUpdateObjects:(id)arg1 inToTable:(id)arg2 onConflict:(CDUnknownBlockType)arg3;
- (int)intValueForPragmaSetting:(id)arg1;
- (BOOL)isOpen;
- (BOOL)isTableExist:(id)arg1;
- (BOOL)isVirtualTable:(id)arg1;
- (id)itemFromObject:(id)arg1 columnName:(const basic_string_7d00a7a9 *)arg2;
- (BOOL)loadOneObjectFromFile:(id)arg1;
@property(retain, nonatomic) WCDBCorruptReport *m_corruptReport; // @synthesize m_corruptReport;
@property __weak id <WCDataBaseEventDelegate> m_eventDelegate; // @synthesize m_eventDelegate;
@property(readonly, nonatomic) BOOL m_isMemoryOnly; // @synthesize m_isMemoryOnly;
@property(readonly, nonatomic) NSString *m_nsDBFilePath; // @synthesize m_nsDBFilePath;
@property(readonly, nonatomic) NSString *m_nsDBPath; // @synthesize m_nsDBPath;
- (id)multiPrimaryKey:(id)arg1;
- (void)openJournalDeleteMode;
- (void)openJournalWalMode;
- (BOOL)openWithWalMode:(BOOL)arg1;
- (void)recordCorrupt:(int)arg1;
- (void)reportInitTime;
- (BOOL)rollbackTransaction;
- (BOOL)saveOneObjectToFile:(id)arg1;
- (id)stringValueForPragmaSetting:(id)arg1;
- (BOOL)updateObject:(id)arg1 onProperties:(const vector_24c76cbd *)arg2 ofTable:(id)arg3;
- (BOOL)updateObject:(id)arg1 onProperties:(const vector_24c76cbd *)arg2 ofTable:(id)arg3 where:(const struct WCDBConditionBase *)arg4;
- (BOOL)updateProperty:(const struct WCDBConditionBase *)arg1 withValue:(id)arg2 ofClass:(Class)arg3 ofTable:(id)arg4 where:(const struct WCDBConditionBase *)arg5;
- (id)usingModule:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

