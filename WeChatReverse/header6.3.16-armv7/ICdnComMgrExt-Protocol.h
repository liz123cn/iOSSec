//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDNDnsInfo, CdnDownloadTaskInfo, CdnProgressInfo, CdnUploadTaskInfo;

@protocol ICdnComMgrExt <NSObject>

@optional
- (void)OnCdnDownload:(CdnDownloadTaskInfo *)arg1;
- (void)OnCdnDownloadProgress:(CdnProgressInfo *)arg1;
- (void)OnCdnInit;
- (void)OnCdnUpload:(CdnUploadTaskInfo *)arg1;
- (void)OnCdnUploadProgress:(CdnProgressInfo *)arg1;
- (void)OnSetCdnDnsInfo;
- (void)OnUpdatedCdnDnsInfo:(CDNDnsInfo *)arg1 snsCdnInfo:(CDNDnsInfo *)arg2 appCdnInfo:(CDNDnsInfo *)arg3;
@end

