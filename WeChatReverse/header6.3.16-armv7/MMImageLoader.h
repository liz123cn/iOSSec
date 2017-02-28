//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IClearDataMgrExt.h"
#import "MMService.h"

@class NSMutableArray, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSRecursiveLock, NSString;

@interface MMImageLoader : MMService <IClearDataMgrExt, MMService>
{
    NSRecursiveLock *m_lock;
    NSObject<OS_dispatch_queue> *_request_queue;
    NSMutableDictionary *m_requestInfoDictionary;
    unsigned int m_imageDataSize;
    NSMutableDictionary *m_imageCaches;
    NSMutableArray *m_imageCacheFIFO;
    unsigned int m_gifDataSize;
    NSMutableDictionary *m_gifDataCaches;
    NSMutableArray *m_gifDataCacheFIFO;
}

- (void).cxx_destruct;
- (id)cacheDataFromFile:(id)arg1 fromUrl:(id)arg2;
- (id)cacheImageFromData:(id)arg1 fromUrl:(id)arg2;
- (id)cacheImageFromFile:(id)arg1 fromUrl:(id)arg2;
- (id)cacheNotGifImageFromFile:(id)arg1 fromUrl:(id)arg2;
- (void)callAllExtWithOrder:(id)arg1 Data:(id)arg2 Url:(id)arg3 UrlMd5:(id)arg4;
- (void)callImageDidLoadExt:(id)arg1 Url:(id)arg2 withUrlMd5:(id)arg3;
- (void)callImageDidLoadOrFailedExt:(id)arg1 Url:(id)arg2 UrlMd5:(id)arg3;
- (void)callImageDidLoadWithDataExt:(id)arg1 Url:(id)arg2 withUrlMd5:(id)arg3;
- (BOOL)callImageDidLoadWithDataOrFailedExt:(id)arg1 Url:(id)arg2 withUrlMd5:(id)arg3;
- (void)cancelLoadAllURLs:(id)arg1;
- (void)cancelLoadForURL:(id)arg1 oberver:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)dealloc;
- (id)getDataFromCache:(id)arg1;
- (id)getImageFromCache:(id)arg1;
- (id)getImageFromImageCache:(id)arg1;
- (BOOL)imageCacheExistsForURL:(id)arg1;
- (id)imageCacheForURL:(id)arg1 LoadOnMainThread:(BOOL)arg2;
- (id)imageDataForURL:(id)arg1 LoadOnMainThread:(BOOL)arg2;
- (id)imageDataObjectForKey:(id)arg1;
- (id)imageForURL:(id)arg1 LoadOnMainThread:(BOOL)arg2;
- (id)imageObjectForKey:(id)arg1;
- (id)imagePathForURL:(id)arg1;
- (BOOL)isImageLoaded:(id)arg1;
- (void)loadImageForURL:(id)arg1 observer:(id)arg2;
- (void)loadImageForURL:(id)arg1 withAuthorizationCode:(id)arg2 observer:(id)arg3;
@property(retain, nonatomic) NSRecursiveLock *m_lock; // @synthesize m_lock;
- (void)onDiskStorageWarningCleanedSize:(unsigned int *)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned int *)arg1 CacheMask:(unsigned long)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned int *)arg1 subQueue:(id)arg2;
- (void)onServiceInit;
- (BOOL)onServiceMemoryWarning;
- (void)removeCacheForURL:(id)arg1;
- (void)removeCacheForURLs:(id)arg1;
- (void)removeGifDataCacheForKey:(id)arg1;
- (void)removeImageCacheForKey:(id)arg1;
- (void)setImageDataObject:(id)arg1 forKey:(id)arg2;
- (void)setImageObject:(id)arg1 forKey:(id)arg2;
- (id)urlMD5ForConnection:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

