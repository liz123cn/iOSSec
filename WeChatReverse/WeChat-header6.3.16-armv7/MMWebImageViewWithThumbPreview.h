//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMWebImageViewDelegate.h"

@class MMImageView, MMWebImageView, NSString, NSURL, ThreeWayExpandImageView, UIActivityIndicatorView;

@interface MMWebImageViewWithThumbPreview : MMUIView <MMWebImageViewDelegate>
{
    MMWebImageView *m_imageView;
    MMImageView *m_imageFocusView;
    ThreeWayExpandImageView *m_previewBackView;
    MMWebImageView *m_previewView;
    NSURL *m_previewUrl;
    BOOL m_hasSetPreviewUrl;
    float m_leftEdge;
    float m_rightEdge;
    UIActivityIndicatorView *m_loadingView;
    NSString *m_emoticonPid;
    unsigned long m_startShowPreviewTime;
    BOOL m_isLoadFromLocal;
    BOOL m_hasLoadedPreview;
    BOOL m_isShowing;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)getPreviewView;
- (void)hidePreview;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isHasLoadedPreview;
- (void)layoutSubviews;
- (void)loadPreviewUrl;
@property(retain, nonatomic) NSString *m_emoticonPid; // @synthesize m_emoticonPid;
@property(nonatomic) BOOL m_hasLoadedPreview; // @synthesize m_hasLoadedPreview;
@property(nonatomic) BOOL m_hasSetPreviewUrl; // @synthesize m_hasSetPreviewUrl;
@property(retain, nonatomic) MMImageView *m_imageFocusView; // @synthesize m_imageFocusView;
@property(retain, nonatomic) MMWebImageView *m_imageView; // @synthesize m_imageView;
@property(nonatomic) BOOL m_isLoadFromLocal; // @synthesize m_isLoadFromLocal;
@property(nonatomic) BOOL m_isShowing; // @synthesize m_isShowing;
@property(nonatomic) float m_leftEdge; // @synthesize m_leftEdge;
@property(retain, nonatomic) UIActivityIndicatorView *m_loadingView; // @synthesize m_loadingView;
@property(retain, nonatomic) ThreeWayExpandImageView *m_previewBackView; // @synthesize m_previewBackView;
@property(retain, nonatomic) NSURL *m_previewUrl; // @synthesize m_previewUrl;
@property(retain, nonatomic) MMWebImageView *m_previewView; // @synthesize m_previewView;
@property(nonatomic) float m_rightEdge; // @synthesize m_rightEdge;
@property(nonatomic) unsigned long m_startShowPreviewTime; // @synthesize m_startShowPreviewTime;
- (void)onLoadImageOK:(id)arg1;
- (void)setDefaultImage:(id)arg1;
- (void)setEmoticonPid:(id)arg1;
- (void)setImageStatic:(BOOL)arg1;
- (void)setImageUrl:(id)arg1;
- (void)setPreviewEdgeLeft:(float)arg1 right:(float)arg2;
- (void)setPreviewSize:(struct CGSize)arg1;
- (void)setPreviewUrl:(id)arg1;
- (void)showPreview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

