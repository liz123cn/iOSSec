//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SequencePageScrollView, UIView;

@protocol SequencePageScrollViewDataSource <NSObject>

@optional
- (void)didChangeToPage:(int)arg1;
- (int)totalNumOfPage;
- (UIView *)viewAtPageNum:(int)arg1 sequenceScrollView:(SequencePageScrollView *)arg2;
- (UIView *)viewForNoData:(UIView *)arg1;
@end
