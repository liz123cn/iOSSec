//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@protocol AVVideoDataSource <NSObject>

@optional
- (void)DidCapturedImage:(UIImage *)arg1;
- (int)GetFrmType;
- (int)VideoDevPutData:(int)arg1 frmData:(char *)arg2 imageWidth:(unsigned long)arg3 imageHeight:(unsigned long)arg4;
- (void)captureVideoSampleBuffer:(struct opaqueCMSampleBuffer *)arg1;
@end

