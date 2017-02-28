//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMUIViewController, UIView, UIViewController;

@protocol WCForceTouchPreviewProtocol <NSObject>
- (BOOL)canPeek;

@optional
- (struct CGRect)previewingSourceRectForLocation:(struct CGPoint)arg1 inCoordinateView:(UIView *)arg2;
- (UIViewController *)viewControllerToPreviewWithFromController:(MMUIViewController *)arg1 forLocation:(struct CGPoint)arg2 inCoordinateView:(UIView *)arg3;
@end

