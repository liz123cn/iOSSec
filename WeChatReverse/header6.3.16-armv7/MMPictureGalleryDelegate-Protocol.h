//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView;

@protocol MMPictureGalleryDelegate <NSObject>

@optional
- (UIView *)accessoryViewForGalleryImageAtIndex:(unsigned int)arg1 bounds:(struct CGRect)arg2;
- (void)didSelectAtIndex:(unsigned int)arg1;
@end

