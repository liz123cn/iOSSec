//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ICdnComMgrExt.h"
#import "NotifyFromMainCtrlDelegate.h"

@class CdnTaskInfo, NSMutableArray, NSString;

@interface UploadVideoCDNMgr : NSObject <ICdnComMgrExt, NotifyFromMainCtrlDelegate>
{
    NSMutableArray *_arrUploadTask;
    CdnTaskInfo *_curTaskInfo;
    unsigned long _curUploadEventID;
}

- (void).cxx_destruct;
- (void)CheckQueue;
- (BOOL)CreateCurUploadEvent;
- (void)DelTaskInUploadQueue:(id)arg1;
- (BOOL)IsCurTaskByID:(unsigned long)arg1 From:(id)arg2 To:(id)arg3;
- (BOOL)IsMsgInUploadQueue:(id)arg1;
- (void)NotifyFromMainCtrl:(unsigned long)arg1 MessageInfo:(id)arg2 Event:(unsigned long)arg3;
- (void)OnCdnUpload:(id)arg1;
- (void)OnCdnUploadProgress:(id)arg1;
- (void)OnSetCdnDnsInfo;
- (void)StartUpload:(id)arg1;
- (void)Stop;
- (void)StopCurUpload;
- (void)StopUpload:(id)arg1;
- (void)StopUploadByChatName:(id)arg1;
- (void)UploadFail:(long)arg1;
- (void)UploadOk:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
