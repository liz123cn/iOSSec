//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMImageUtil : NSObject
{
}

+ (void)addReceiverNodeViewPathToContext:(struct CGContext *)arg1 inRect:(struct CGRect)arg2 scale:(float)arg3;
+ (void)addSenderNodeViewPathToContext:(struct CGContext *)arg1 inRect:(struct CGRect)arg2 scale:(float)arg3;
+ (unsigned int)amountOfFreeMemory;
+ (id)bytes2str:(long long)arg1;
+ (id)compressImageToFullScreen:(id)arg1;
+ (id)fitImageOfLongImage:(id)arg1;
+ (id)genarateOriginImageDataFromUIImage:(id)arg1;
+ (id)generateVideoThumbImage:(id)arg1 atTime:(double)arg2;
+ (id)getDataCompressedImage:(id)arg1 CompressConfig:(id)arg2;
+ (id)getImageByColor:(id)arg1 inSize:(struct CGSize)arg2 isSender:(BOOL)arg3;
+ (unsigned int)getMaxImageSizeAreaFitMemory;
+ (id)getNormalCompressedImage:(id)arg1 CompressConfig:(id)arg2;
+ (id)hdImageWithContentsOfFile:(id)arg1;
+ (id)image:(id)arg1 scaleAspectFitSize:(struct CGSize)arg2 withOrientation:(int)arg3;
+ (BOOL)isImageEditedWithRepresentation:(id)arg1;
+ (id)maskImage:(id)arg1 isSender:(BOOL)arg2 inSize:(struct CGSize)arg3;
+ (id)maskedFourRoundedCornerImageForColor:(id)arg1 imageSize:(struct CGSize)arg2;
+ (id)maskedThumbImageForMessageImage:(id)arg1 imageSize:(struct CGSize)arg2 isSender:(BOOL)arg3;
+ (struct CGSize)maskedThumbImageSize:(struct CGSize)arg1;
+ (struct CGSize)maskedThumbImageSizeForMessageImage:(struct CGSize)arg1;
+ (id)maskedTwoRoundedCornerImageForColor:(id)arg1 imageSize:(struct CGSize)arg2;
+ (void)mov2mp4withInputURL:(id)arg1 withOutputURL:(id)arg2 withTarget:(id)arg3 withSel:(SEL)arg4 withQuality:(id)arg5;
+ (id)resizeToMinSideLenDisplayMode:(int)arg1 originImage:(id)arg2;
+ (id)resizeToNormalCompressImage:(id)arg1 CompressConfig:(id)arg2;
+ (id)scaleImageToFitMemory:(id)arg1;
+ (id)scaledImageWithAsset:(id)arg1 inWidth:(float)arg2 inHeight:(float)arg3;
+ (id)scaledImageWithAsset:(id)arg1 withSize:(struct CGSize)arg2;
+ (id)scaledImageWithImage:(id)arg1 inWidth:(float)arg2 inHeight:(float)arg3;
+ (void)writeImageToFile:(id)arg1 withURL:(id)arg2;

@end

