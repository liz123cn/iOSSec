//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavRecordImgNodeView, NSString, UIImageView;

@protocol FavRecordNodeViewDelegate <NSObject>

@optional
- (void)onClickOnImgNode:(FavRecordImgNodeView *)arg1 DataIndex:(unsigned long)arg2;
- (void)onClickOnNode:(id <RecordNodeDataSource>)arg1;
- (void)onExitFullScreen;
- (void)onJumpToViewDetail:(NSString *)arg1;
- (void)onLongPressImgNode:(id <RecordNodeDataSource>)arg1;
- (void)onWillLongPressImgNode:(UIImageView *)arg1;
@end

