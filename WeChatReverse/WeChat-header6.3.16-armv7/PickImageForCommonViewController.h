//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMImgageBrowseViewDelegate.h"

@class MMImageBrowseView, NSString, UIImage;

@interface PickImageForCommonViewController : MMUIViewController <MMImgageBrowseViewDelegate>
{
    MMImageBrowseView *m_imageView;
    UIImage *m_image;
    id <ImageBrowseDelegate> m_delegate;
    id m_singleTapOnNav;
}

- (void).cxx_destruct;
- (void)addNvGestureRecognizer;
- (void)adjustImageViewRect;
- (void)dealloc;
- (void)doCancel;
- (void)doSelect;
- (void)exitFullScreen;
- (void)handleViewWillAppear;
- (void)handleViewWillDisappear;
- (void)hideStatusBar;
- (void)initImageView;
- (void)initNavigationBar;
- (void)initView;
- (id)initWithImage:(id)arg1;
@property(nonatomic) __weak id <ImageBrowseDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) id m_singleTapOnNav; // @synthesize m_singleTapOnNav;
- (void)onSingleTapImageBrowseView;
- (void)onSingleTapOnNavigationBar:(id)arg1;
- (void)onTopBarFrameChanged;
- (void)removeNvGestureRecognizer;
- (void)setFullScreen:(BOOL)arg1;
- (void)showStatusBar;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAppear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

