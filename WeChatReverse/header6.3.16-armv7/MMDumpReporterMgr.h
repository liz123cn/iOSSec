//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMDumpReporterDelegate.h"

@class MMDumpReportTask, NSMutableArray, NSRecursiveLock, NSString;

@interface MMDumpReporterMgr : MMObject <MMDumpReporterDelegate>
{
    id <MMDumpReporterDelegate> m_delegate;
    BOOL m_bUploading;
    BOOL m_bShouldUpload;
    NSMutableArray *m_arrUploadTask;
    MMDumpReportTask *m_uploadTask;
    NSRecursiveLock *m_lock;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (BOOL)addOneTaskData:(id)arg1;
- (void)autoUploadDump;
- (void)dealloc;
- (id)getBackgroundDumpFilePaths;
- (id)getCPUDumpFilePaths;
- (id)getDumpFilePaths;
- (id)init;
- (BOOL)limitUpload:(id)arg1;
@property(nonatomic) __weak id <MMDumpReporterDelegate> m_delegate; // @synthesize m_delegate;
- (void)onEnterBackGround;
- (void)onEnterForgeGround;
- (void)onUploadResult:(BOOL)arg1 onTag:(id)arg2;
- (void)removeFistTaskData;
- (BOOL)shouldUpload;
- (void)uploadAllDump;
- (void)uploadDumpOnIPXX:(id)arg1;
- (void)uploadDumpWithDate:(id)arg1;
- (void)uploadDumpWithDate:(id)arg1 withReprotCntOneTime:(unsigned int)arg2;
- (void)uploadOneTaskData;
- (void)willTerminate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
