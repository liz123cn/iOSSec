//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMessageWrapExt.h"
#import "IMsgExtendOperation.h"
#import "NSCopying.h"

@class CMessageWrap, ImageInfo, MMAsset, NSData, NSString;

@interface CExtendInfoOfImg : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    unsigned long m_uiHDImgSize;
    unsigned long m_uiNormalImgSize;
    NSString *m_nsImgHDUrl;
    NSString *m_nsImgMidUrl;
    NSData *m_dtImg;
    ImageInfo *m_oImageInfo;
    NSString *m_nsAesKey;
    NSString *m_nsMsgThumbUrl;
    NSString *m_nsMsgThumbAesKey;
    unsigned long m_uiMsgThumbSize;
    unsigned long m_uiMsgThumbWidth;
    unsigned long m_uiMsgThumbHeight;
    NSString *m_nsCommentUrl;
    BOOL m_isCanUpload;
    BOOL m_isForNewYear;
    CMessageWrap *m_refMessageWrap;
    MMAsset *m_asset;
    unsigned long m_uiScene;
    float m_fLongitude;
    float m_fLatitude;
    NSString *m_AttachedContent;
}

+ (void)CreateExtendInfoWithType:(unsigned long)arg1 retExtendInfo:(id *)arg2;
- (void).cxx_destruct;
- (void)ChangeForDisplay;
- (id)GetDownloadThumbPath;
- (id)GetThumbPath;
- (BOOL)IsHDImg;
- (void)UpdateContent:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (float)currentCompressPicQuality;
- (id)init;
- (BOOL)isUploadHDImage;
@property(retain, nonatomic) NSString *m_AttachedContent; // @synthesize m_AttachedContent;
@property(retain, nonatomic) MMAsset *m_asset; // @synthesize m_asset;
@property(retain, nonatomic) NSData *m_dtImg; // @synthesize m_dtImg;
@property(nonatomic) float m_fLatitude; // @synthesize m_fLatitude;
@property(nonatomic) float m_fLongitude; // @synthesize m_fLongitude;
@property(nonatomic) BOOL m_isCanUpload; // @synthesize m_isCanUpload;
@property(nonatomic) BOOL m_isForNewYear; // @synthesize m_isForNewYear;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsCommentUrl; // @synthesize m_nsCommentUrl;
@property(retain, nonatomic) NSString *m_nsImgHDUrl; // @synthesize m_nsImgHDUrl;
@property(retain, nonatomic) NSString *m_nsImgMidUrl; // @synthesize m_nsImgMidUrl;
@property(retain, nonatomic) NSString *m_nsMsgThumbAesKey; // @synthesize m_nsMsgThumbAesKey;
@property(retain, nonatomic) NSString *m_nsMsgThumbUrl; // @synthesize m_nsMsgThumbUrl;
@property(retain, nonatomic) ImageInfo *m_oImageInfo; // @synthesize m_oImageInfo;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(nonatomic) unsigned long m_uiHDImgSize; // @synthesize m_uiHDImgSize;
@property(nonatomic) unsigned long m_uiMsgThumbHeight; // @synthesize m_uiMsgThumbHeight;
@property(nonatomic) unsigned long m_uiMsgThumbSize; // @synthesize m_uiMsgThumbSize;
@property(nonatomic) unsigned long m_uiMsgThumbWidth; // @synthesize m_uiMsgThumbWidth;
@property(nonatomic) unsigned long m_uiNormalImgSize; // @synthesize m_uiNormalImgSize;
@property(nonatomic) unsigned long m_uiScene; // @synthesize m_uiScene;
- (void)setImage:(id)arg1 isLongOriginImage:(BOOL)arg2;
- (void)setImage:(id)arg1 withData:(id)arg2 isLongOriginImage:(BOOL)arg3;
- (void)setImage:(id)arg1 withData:(id)arg2 withImageInfo:(id)arg3 isLongOriginImage:(BOOL)arg4;
- (void)setImage:(id)arg1 withImageInfo:(id)arg2 isLongOriginImage:(BOOL)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
