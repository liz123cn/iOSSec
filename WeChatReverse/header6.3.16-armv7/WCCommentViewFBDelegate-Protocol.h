//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCCommentViewFB, WCUserComment;

@protocol WCCommentViewFBDelegate <NSObject>

@optional
- (void)onCommentViewClicked:(WCCommentViewFB *)arg1;
- (void)onReloadCommentCellView:(WCUserComment *)arg1;
- (void)onRestoreCommentCellView:(WCUserComment *)arg1;
@end

