//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIImage;

@protocol settingMyAccountExtInfoLogicDelegate <NSObject>
- (void)onInfoChange;

@optional
- (void)onImgBeginChange:(UIImage *)arg1;
- (void)onImgChangeEnd:(BOOL)arg1;
- (void)onImgSave;
@end

