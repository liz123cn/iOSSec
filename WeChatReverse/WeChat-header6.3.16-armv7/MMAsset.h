//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying.h"

@interface MMAsset : MMObject <NSCopying>
{
    BOOL _m_isNeedOriginImage;
    BOOL _m_isFailedFromIcloud;
    BOOL _m_isLoadingFromIcloud;
}

+ (struct CGSize)LongImageSizeWithTargetEdge:(float)arg1 originSize:(struct CGSize)arg2;
+ (id)decodeXmlString:(id)arg1;
- (id)alAssetReferenceUrl;
- (id)assetUrl;
- (void)asyncGetAspectRatioThumbnailWithTargetSize:(struct CGSize)arg1 andResult:(CDUnknownBlockType)arg2;
- (void)asyncGetMetadata:(CDUnknownBlockType)arg1;
- (void)asyncGetThumbnail:(CDUnknownBlockType)arg1;
- (void)asyncGetVideoUrlWithBlock:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)encodeXmlString;
- (void)getBigImageWithCompressConfig:(id)arg1 ProcessBlock:(CDUnknownBlockType)arg2 ResultBlock:(CDUnknownBlockType)arg3 ErrorBlock:(CDUnknownBlockType)arg4;
- (id)getCreatedDate;
- (void)getDisplayImageWithCompressConfig:(id)arg1 ResultBlock:(CDUnknownBlockType)arg2 ErrorBlock:(CDUnknownBlockType)arg3;
- (struct CGSize)getImageRatioSize;
- (id)getOriginImageDataSize;
- (id)getThumbImage;
- (id)getThumbnail;
- (id)getVideoUrl;
- (BOOL)hasLocation;
- (id)initWithUrl:(id)arg1 IsNeedOrigin:(BOOL)arg2;
- (BOOL)isPicture;
- (BOOL)isSlowMotionVideo;
- (BOOL)isVideo;
- (double)latitude;
- (double)longitude;
@property(nonatomic) BOOL m_isFailedFromIcloud; // @synthesize m_isFailedFromIcloud=_m_isFailedFromIcloud;
@property(nonatomic) BOOL m_isLoadingFromIcloud; // @synthesize m_isLoadingFromIcloud=_m_isLoadingFromIcloud;
@property(nonatomic) BOOL m_isNeedOriginImage; // @synthesize m_isNeedOriginImage=_m_isNeedOriginImage;
- (void)stopGetBigImageICloudActivity;
- (void)stopICloudActivity;
- (id)videoDuration;

@end

