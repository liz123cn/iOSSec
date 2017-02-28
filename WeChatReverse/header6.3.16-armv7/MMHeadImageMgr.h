//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "HeadImgDelegate.h"
#import "IBottleContactMgrExt.h"
#import "IClearDataMgrExt.h"
#import "IContactMgrExt.h"
#import "IQQContactMgrExt.h"
#import "IStrangerContactMgrExt.h"
#import "MMService.h"
#import "MessageObserverDelegate.h"

@class CUploadHDHeadImg, MMHeadImageCacher, MMHeadImageDownloader, NSString;

@interface MMHeadImageMgr : MMService <HeadImgDelegate, IContactMgrExt, IQQContactMgrExt, IBottleContactMgrExt, IStrangerContactMgrExt, MessageObserverDelegate, IClearDataMgrExt, MMService>
{
    MMHeadImageCacher *_headImgCacher;
    MMHeadImageDownloader *_headImgDownloader;
    CUploadHDHeadImg *_headImgUploader;
}

+ (id)amendHeadImgIfNeed:(id)arg1;
+ (id)getDefaultHeadImage:(id)arg1;
+ (id)getHeadImgDirectoryPath:(unsigned char)arg1;
+ (id)getHeadImgPathForNewVersion:(id)arg1 forCategory:(unsigned char)arg2 isHD:(BOOL)arg3;
+ (id)getHeadImgPathForNewVersionForLoadImage:(id)arg1 forCategory:(unsigned char)arg2 isHD:(BOOL)arg3;
+ (id)getHeadImgPathForNewVersionForLoadImage:(id)arg1 forCategory:(unsigned char)arg2 isHD:(BOOL)arg3 forLogin:(BOOL)arg4;
+ (id)getHeadImgPathForOldVersion:(id)arg1 isHD:(BOOL)arg2;
+ (id)getHeadImgRootDirectoryPath;
+ (id)getOldHeadImgPathForLoginUsr:(id)arg1 isHD:(BOOL)arg2;
+ (id)getPluginImage:(id)arg1;
+ (id)getRoundImgDirectoryPath;
+ (id)getUsrHeadImgForLogin:(id)arg1;
+ (BOOL)isGoogleName:(id)arg1;
+ (BOOL)isKFName:(id)arg1;
+ (BOOL)isMobileName:(id)arg1;
+ (id)resizeImage:(id)arg1;
+ (id)tryGenHQImage:(id)arg1;
- (void).cxx_destruct;
- (void)MessageReturn:(unsigned long)arg1 MessageInfo:(id)arg2 Event:(unsigned long)arg3;
- (void)cancelDownloadRequest:(id)arg1;
- (BOOL)checkIsNeedUpdate:(id)arg1 category:(unsigned char)arg2 isHeadImgExistedInLocal:(BOOL)arg3;
- (BOOL)checkIsNeedUpdateBrandIcon:(id)arg1 isHeadImgExistedInLocal:(BOOL)arg2;
- (BOOL)checkIsNeedUpdateEnterpriseHeadImg:(id)arg1 isHeadImgExistedInLocal:(BOOL)arg2;
- (BOOL)checkIsNeedUpdateHeadImg:(id)arg1 isHeadImgExistedInLocal:(BOOL)arg2;
- (BOOL)checkIsNeedUpdateKFBrandHeadImg:(id)arg1 isHeadImgExistedInLocal:(BOOL)arg2;
- (BOOL)createEmptyUsrImgInLocal:(id)arg1;
- (void)dealloc;
- (void)deleteUsrHeadImg:(id)arg1;
- (unsigned long)downloadHDHeadImg:(id)arg1 forCategory:(unsigned char)arg2;
- (unsigned long)downloadHDHeadImg:(id)arg1 url:(id)arg2 forCategory:(unsigned char)arg3;
- (void)fixSelfHeadImgByLocalImg;
- (void)forceUpdatrUsrHeadImg:(id)arg1 forCategory:(unsigned char)arg2 isHeadImgExistedInLocal:(BOOL)arg3;
- (void)forceUpdatrUsrHeadImg:(id)arg1 withUrl:(id)arg2 forCategory:(unsigned char)arg3 isHeadImgExistedInLocal:(BOOL)arg4;
- (id)getHeadImage:(id)arg1 withCategory:(unsigned char)arg2;
- (id)getHeadImageWithUseScene:(id)arg1 withScene:(unsigned char)arg2 withCategory:(unsigned char)arg3 retHeadImgIsExistedLocal:(char *)arg4;
- (id)getOriginalHDHeadImg:(id)arg1 withCategory:(unsigned char)arg2;
- (id)getOriginalHeadImage:(id)arg1 withCategory:(unsigned char)arg2;
- (id)getRoundImage:(id)arg1 size:(struct CGSize)arg2 cornerSize:(unsigned long)arg3 withCategory:(unsigned char)arg4;
- (id)getRoundImage:(id)arg1 size:(struct CGSize)arg2 withCategory:(unsigned char)arg3;
- (void)handleModUserImg:(id)arg1;
- (id)init;
- (void)internalUpdateUsrHeadImg:(id)arg1 forCategory:(unsigned char)arg2;
- (void)internalUpdateUsrHeadImg:(id)arg1 withUrl:(id)arg2 forCategory:(unsigned char)arg3;
- (BOOL)isHeadImgExistInLocal:(id)arg1;
- (BOOL)isHeadImgExistInLocal:(id)arg1 isHD:(BOOL)arg2;
- (BOOL)isMobileName:(id)arg1;
- (BOOL)isNeedAutoUpdateHeadImgForUsr:(id)arg1;
- (BOOL)isNeedGetHDImg:(id)arg1;
- (BOOL)isUploadIngHeadImg;
- (void)notifyHeadImageChange:(id)arg1;
- (void)onDeleteContact:(id)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned int *)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned int *)arg1 CacheMask:(unsigned long)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned int *)arg1 subQueue:(id)arg2;
- (void)onGetUsrImage:(id)arg1 Status:(id)arg2 Image:(id)arg3 Category:(unsigned char)arg4;
- (void)onModifyBottleContact:(id)arg1;
- (void)onModifyContactHeadImage:(id)arg1;
- (void)onModifyQQContactHeadImage:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (BOOL)onServiceMemoryWarning;
- (void)onServiceReloadData;
- (void)onStrangerContactUpdateForbidden:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1 Contact:(id)arg2;
- (BOOL)saveUsrImgToLocal:(id)arg1 withData:(id)arg2 forCategory:(unsigned char)arg3 isHD:(BOOL)arg4;
- (BOOL)saveUsrImgToLocal:(id)arg1 withData:(id)arg2 forCategory:(unsigned char)arg3 isHD:(BOOL)arg4 forceReload:(BOOL)arg5;
- (BOOL)saveUsrImgToLocal:(id)arg1 withData:(id)arg2 forCategory:(unsigned char)arg3 isHD:(BOOL)arg4 forceReload:(BOOL)arg5 saveAsTemp:(BOOL)arg6;
- (BOOL)saveUsrImgToLocal:(id)arg1 withFile:(id)arg2 forCategory:(unsigned char)arg3 isHD:(BOOL)arg4;
- (void)setDownloadCommonMode;
- (void)setDownloadFastMode;
- (void)updateUsrHeadImg:(id)arg1 forCategory:(unsigned char)arg2;
- (void)updateUsrHeadImg:(id)arg1 forCategory:(unsigned char)arg2 isHeadImgExistedInLocal:(BOOL)arg3;
- (void)updateUsrHeadImg:(id)arg1 withUrl:(id)arg2 forCategory:(unsigned char)arg3;
- (void)updateUsrHeadImg:(id)arg1 withUrl:(id)arg2 forCategory:(unsigned char)arg3 isHeadImgExistedInLocal:(BOOL)arg4;
- (unsigned long)uploadHDBottleImg:(id)arg1;
- (unsigned long)uploadHDHeadImg:(id)arg1;
- (unsigned long)uploadHDHeadImg:(id)arg1 qualityType:(unsigned long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

