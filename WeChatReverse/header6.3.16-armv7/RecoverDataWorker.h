//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface RecoverDataWorker : NSObject
{
}

+ (void)BackupOriginDBFile:(id)arg1 UserLibraryDir:(id)arg2;
+ (id)GenerateBackupDBDir:(id)arg1;
+ (BOOL)RebuildDB:(id)arg1 SqlFile:(id)arg2 UserLibraryDir:(id)arg3;
+ (BOOL)RecoverDB:(id)arg1 SqlFile:(id)arg2 UserLibraryDir:(id)arg3;
+ (id)StringWithDate;
+ (unsigned long long)restSpaceSize;
+ (unsigned long long)sizeForFile:(id)arg1;
+ (id)transformPath:(id)arg1;
- (BOOL)databaseFix:(id)arg1;
- (BOOL)deleteOneFile:(id)arg1;
- (BOOL)doRecoverJob:(id)arg1;
- (BOOL)fileDelete:(id)arg1;
- (id)init;
- (BOOL)isMainDBWithPath:(id)arg1;
- (void)logDBSize:(id)arg1 description:(id)arg2 forScene:(id)arg3;
- (void)onAfterFixMainDBSucc;
- (void)onBeforeFixMainDB;
- (BOOL)recoverDataDatabase:(id)arg1;
- (BOOL)recoverDataFile:(id)arg1;

@end

