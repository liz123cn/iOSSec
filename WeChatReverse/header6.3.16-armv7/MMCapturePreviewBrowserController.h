//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MultiImageScrollViewDelegate.h"

@class MultiImageScrollView, NSData, NSDictionary, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface MMCapturePreviewBrowserController : MMUIViewController <MultiImageScrollViewDelegate>
{
    MultiImageScrollView *_pagingScrollView;
    UIView *_bottomBar;
    UIButton *_sendButton;
    UIButton *_originImageCheck;
    UILabel *_originImageLabel;
    NSMutableArray *_imageScrollViewPool;
    NSDictionary *_imageInfo;
    NSData *_imageData;
    long _originImageSize;
    UIActivityIndicatorView *_originIndictorView;
    BOOL _canSendOriginalImage;
    BOOL m_hasClickSendButton;
    id <ImageBrowseDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)OnCancel:(id)arg1;
- (void)OnFullScreenChanged;
- (void)OnOriginSizeGot:(id)arg1;
- (void)OnSend:(id)arg1;
@property(nonatomic) BOOL canSendOriginalImage; // @synthesize canSendOriginalImage=_canSendOriginalImage;
- (void)dealloc;
- (void)getOriginSize;
- (id)getfullScreenImage;
- (id)imageAtPage:(unsigned long)arg1;
- (id)init;
- (void)initBottomBar;
- (void)initData;
- (void)initView;
- (id)initWithImageInfo:(id)arg1;
- (BOOL)interactivePopGestureRecognizerShouldBegin:(id)arg1;
@property(nonatomic) __weak id <ImageBrowseDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) BOOL m_hasClickSendButton; // @synthesize m_hasClickSendButton;
- (void)onOriginImageCheck:(id)arg1;
- (void)onSingleTap:(id)arg1;
@property(nonatomic) long originImageSize; // @synthesize originImageSize=_originImageSize;
- (id)viewAtPage:(unsigned long)arg1 frame:(struct CGRect)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

