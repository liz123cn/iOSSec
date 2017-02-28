//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICdnComMgrExt.h"

@class CdnTaskInfo, NSMutableArray, NSString;

@interface ThumbDownloadMgr : NSObject <ICdnComMgrExt>
{
    NSMutableArray *m_arrQueue;
    CdnTaskInfo *m_oCurTaskInfo;
}

- (void).cxx_destruct;
- (void)CheckQueue;
- (void)DownloadFail:(long)arg1;
- (BOOL)IsDownloadingThumb:(id)arg1;
- (void)OnCdnDownload:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (BOOL)StartDownloadThumb:(id)arg1;
- (void)StopCurDownload;
- (void)StopDownloadThumb:(id)arg1;
- (void)StopDownloadThumbByUsrName:(id)arg1;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) CdnTaskInfo *m_oCurTaskInfo; // @synthesize m_oCurTaskInfo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

