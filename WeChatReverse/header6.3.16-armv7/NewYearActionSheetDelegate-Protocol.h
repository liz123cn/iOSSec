//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NewYearActionSheet;

@protocol NewYearActionSheetDelegate <NSObject>

@optional
- (void)actionSheetCancel:(NewYearActionSheet *)arg1;
- (void)didPresentActionSheet:(NewYearActionSheet *)arg1;
- (void)newYearActionSheet:(NewYearActionSheet *)arg1 clickedButtonAtIndex:(int)arg2;
- (void)newYearActionSheet:(NewYearActionSheet *)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)newYearActionSheet:(NewYearActionSheet *)arg1 willDismissWithButtonIndex:(int)arg2;
- (void)willPresentActionSheet:(NewYearActionSheet *)arg1;
@end

