//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "crashReportConnectionDelegate.h"

@class MMCrashReportConnection, NSMutableArray, NSString;

@interface MMDumpReportTask : NSObject <crashReportConnectionDelegate>
{
    NSMutableArray *m_arrUploadItems;
    NSMutableArray *m_arrUploadCPUItems;
    NSMutableArray *m_arrUploadBackgroundItems;
    NSString *m_nsTag;
    NSMutableArray *m_arrUploadingItems;
    MMCrashReportConnection *m_connect;
    BOOL m_bUploading;
    NSString *m_nsUsrName;
    id <MMDumpReporterDelegate> m_delegate;
    unsigned int m_reportCntOneTime;
}

- (void).cxx_destruct;
- (void)cancelTask;
- (void)dealloc;
- (id)getDumpReportData:(id)arg1;
- (id)getUsrName;
- (id)init;
@property(nonatomic) __weak id <MMDumpReporterDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned int m_reportCntOneTime; // @synthesize m_reportCntOneTime;
- (void)onUploadCrashCompleted:(BOOL)arg1 CrashWrap:(id)arg2;
- (void)upload;
- (void)uploadDumpItems:(id)arg1;
- (BOOL)uploadDumpItems:(id)arg1 DumpCPUItems:(id)arg2 backgroundItems:(id)arg3 withTag:(id)arg4;
- (void)uploadOneDump;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

