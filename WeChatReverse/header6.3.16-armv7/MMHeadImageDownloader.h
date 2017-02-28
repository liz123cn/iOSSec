//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "HeadImgDownloaderDelegate.h"

@class HeadImgDownloaderByUrl, HeadImgDownloaderByUsrName, MMHDHeadImgDownloader, NSCache, NSString;

@interface MMHeadImageDownloader : MMObject <HeadImgDownloaderDelegate>
{
    HeadImgDownloaderByUrl *_urlDownloader;
    HeadImgDownloaderByUsrName *_usrNameDownloader;
    MMHDHeadImgDownloader *_hdHeadImgDownloader;
    NSCache *_autoUpdatedUsrName;
    id <HeadImgDelegate> delegate;
}

- (void).cxx_destruct;
- (void)addDownloadRequest:(id)arg1 forCategory:(unsigned char)arg2;
- (void)addDownloadRequestWithUrl:(id)arg1 url:(id)arg2 forCategory:(unsigned char)arg3;
- (void)cancelRequest:(id)arg1;
@property(nonatomic) __weak id <HeadImgDelegate> delegate; // @synthesize delegate;
- (unsigned long)downloadHDHeadImg:(id)arg1 forCategory:(unsigned char)arg2;
- (unsigned long)downloadHDHeadImg:(id)arg1 url:(id)arg2 forCategory:(unsigned char)arg3;
- (id)getUsrHDHeadImgUrl:(id)arg1;
- (id)getUsrHeadImgUrl:(id)arg1 withCategory:(unsigned char)arg2;
- (id)init;
- (BOOL)isNeedAutoUpdateHeadImgForUsr:(id)arg1;
- (BOOL)isNeedGetHDImg:(id)arg1;
- (void)onHDHeadImgDownloadFinish:(id)arg1;
- (void)onHeadImgDownloadFinish:(id)arg1 Status:(id)arg2 Image:(id)arg3 Category:(unsigned char)arg4;
- (void)removeUsrFromLastFailureList:(id)arg1;
- (void)setDownloadCommonMode;
- (void)setDownloadFastMode;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

