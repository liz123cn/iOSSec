//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact, NSArray, UIView;

@protocol MMNewMultiSelectContactsViewControllerDelegate <NSObject>

@optional
- (void)onMultiSelectContactsDidCancel;
- (void)onMultiSelectContactsDidDismiss;
- (void)onMultiSelectContactsDidFinishSelect:(NSArray *)arg1;
- (void)onMultiSelectContactsDidFinishSelect:(NSArray *)arg1 tmpDisplayView:(UIView *)arg2;
- (void)onMultiSelectContactsEndWithReportSelectedCount:(unsigned int)arg1 hasReachLimit:(BOOL)arg2 clickCount:(unsigned int)arg3;
- (void)onSingleSelectContactDidFinishSelect:(CContact *)arg1;
@end

