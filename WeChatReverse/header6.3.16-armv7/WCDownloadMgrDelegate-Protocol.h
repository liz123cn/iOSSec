//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCMediaItem;

@protocol WCDownloadMgrDelegate <NSObject>
- (void)onAddDownloadQueue:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onBeginDownload:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onCancelDownloadSuccess:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onDownloadFinish:(WCMediaItem *)arg1 downloadType:(int)arg2;
- (void)onDownloadMediaProcessChange:(WCMediaItem *)arg1 downloadType:(int)arg2 current:(int)arg3 total:(int)arg4;
@end

