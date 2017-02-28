//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "MMImageLoaderObserver.h"

@class NSString, NSURL, UIImage;

@interface MMWebBackgroundImageButton : UIButton <MMImageLoaderObserver>
{
    UIImage *_defaultImage;
    NSURL *_url;
}

+ (BOOL)CanLoadImage:(id)arg1;
- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoad:(id)arg1 Url:(id)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setDefaultImage:(id)arg1;
- (BOOL)setImageURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
