//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AppJumpLogicHelper : NSObject
{
}

- (id)getAppIdByFunctionType:(int)arg1;
- (int)getJumpFunctionTypeByAppId:(id)arg1;
- (BOOL)innerJumpByAppId:(id)arg1 isMessage:(BOOL)arg2;
- (BOOL)isCanJumpWithAppId:(id)arg1;
- (BOOL)isCanShowSource:(id)arg1;
- (BOOL)isShowAppMessageBottom:(id)arg1;
- (BOOL)isShowTimeLineJumpLink:(id)arg1;
- (BOOL)isShowTimelineSource:(id)arg1;
- (BOOL)jumpByAppIdInMessage:(id)arg1;
- (BOOL)jumpByAppIdInTimeline:(id)arg1;
- (BOOL)jumpToGameDetailView:(id)arg1 isFromMessage:(BOOL)arg2;

@end

