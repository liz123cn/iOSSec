//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@protocol IWebviewResourceManagerExt <NSObject>

@optional
- (void)onLocalImageSaveFinish:(NSArray *)arg1;
- (void)onLocalResourceUploadFinished:(NSString *)arg1 SvrId:(NSString *)arg2 ErrCode:(int)arg3;
- (void)onLocalResourceUploadProgress:(int)arg1 LocalId:(NSString *)arg2;
- (void)onResourceDownloadFinished:(NSString *)arg1 SvrId:(NSString *)arg2 ErrCode:(int)arg3;
- (void)onResourceDownloadProgress:(int)arg1 SvrId:(NSString *)arg2;
@end

