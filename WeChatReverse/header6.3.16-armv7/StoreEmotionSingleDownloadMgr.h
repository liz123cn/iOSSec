//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "EmoticonDownloadProxyDelegate.h"
#import "MMService.h"

@class EmoticonDownloadProxy, NSString, OrderedDictionary;

@interface StoreEmotionSingleDownloadMgr : MMService <EmoticonDownloadProxyDelegate, MMService>
{
    OrderedDictionary *m_downloadQueue;
    EmoticonDownloadProxy *m_downloadCgi;
}

- (void).cxx_destruct;
- (void)checkDownload;
- (BOOL)downloadEmotionWithMD5:(id)arg1;
- (BOOL)downloadEmotionWithMD5:(id)arg1 andCdnUrl:(id)arg2;
- (BOOL)downloadEmotionWithWrap:(id)arg1;
- (void)finishDownloadEmotionWithMd5:(id)arg1;
- (id)getFilePathIfEmoticonExistedWithWrap:(id)arg1;
- (id)init;
- (void)onEmoticonDownloadMd5Failed:(id)arg1;
- (void)onEmoticonDownloadMd5Failed:(id)arg1 withUserInfo:(id)arg2;
- (void)onEmoticonDownloadMd5Ok:(id)arg1 AndFilePath:(id)arg2;
- (void)onEmoticonDownloadMd5Ok:(id)arg1 AndFilePath:(id)arg2 withUserInfo:(id)arg3;
- (id)saveToNotTempPathWithMD5:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
