//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIScrollView.h"

#import "MMImageScrollViewHelperDelegate.h"
#import "UIScrollViewDelegate.h"

@class MMImageScrollViewHelper, NSArray, NSString, UIActivityIndicatorView, UIView;

@interface WCImageScrollView : MMUIScrollView <UIScrollViewDelegate, MMImageScrollViewHelperDelegate>
{
    UIView *imageView;
    unsigned int index;
    UIActivityIndicatorView *mActivityIndicator;
    MMImageScrollViewHelper *m_scrollViewHelper;
    BOOL supportOrientation;
    id <WCImageScrollViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (float)angelFromOldOrientation:(int)arg1 newOrientation:(int)arg2;
- (void)dealloc;
- (void)displayImage:(id)arg1 withFrame:(struct CGRect)arg2;
- (void)displayView:(id)arg1;
- (id)getScrollView;
@property(nonatomic) unsigned int index; // @synthesize index;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)internalDisplayImage:(id)arg1 withFrame:(struct CGRect)arg2 animate:(BOOL)arg3;
@property(readonly, nonatomic) UIActivityIndicatorView *mActivityIndicator; // @synthesize mActivityIndicator;
@property(nonatomic) __weak id <WCImageScrollViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onDoubleTap:(id)arg1;
- (void)onSingleTap:(id)arg1;
- (int)orientationToInt:(int)arg1;
- (void)rotateImageWithImage:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (void)setImageTransform:(struct CGAffineTransform)arg1;
@property(nonatomic) BOOL supportOrientation; // @synthesize supportOrientation;
- (void)stopLoading;
- (id)viewForZooming;
- (id)viewForZoomingInScrollView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) struct CGRect frame;
@property(copy, nonatomic) NSArray *gestureRecognizers;
@property(readonly) unsigned int hash;
@property(nonatomic) float maximumZoomScale;
@property(nonatomic) float minimumZoomScale;
@property(readonly) Class superclass;
@property(nonatomic) float zoomScale;

@end
