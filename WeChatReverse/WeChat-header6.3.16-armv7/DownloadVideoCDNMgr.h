//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICdnComMgrExt.h"

@class CdnTaskInfo, NSMutableArray, NSString;

@interface DownloadVideoCDNMgr : NSObject <ICdnComMgrExt>
{
    NSMutableArray *_arrDownloadTask;
    CdnTaskInfo *_curTaskInfo;
}

- (void).cxx_destruct;
- (void)CheckQueue;
- (void)DelTaskInDownloadQueue:(id)arg1;
- (void)DownloadFail:(long)arg1;
- (void)DownloadOk;
- (BOOL)IsMsgInDownloadQueue:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (BOOL)StartDownloadVideo:(id)arg1 AutoDownload:(BOOL)arg2;
- (void)Stop;
- (void)StopCurDownload;
- (void)StopDownload:(id)arg1;
- (void)StopDownloadByChatName:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

