//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol VideoVoipTalkingViewDelegate <NSObject>

@optional
- (BOOL)hasVideoVoipTalkingViewClickChangeToAudioMode;
- (BOOL)isVideoVoipTalkingViewInitWithVideoMode;
- (void)onVideoVoipTalkingViewEndCall;
- (void)onVideoVoipTalkingViewHangUp;
- (BOOL)onVideoVoipTalkingViewRequestMinimizeStatus;
- (void)onVideoVoipTalkingViewSwitchToSmall;
@end
