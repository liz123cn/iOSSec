//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "ActionRecognitionDelegate.h"
#import "MMService.h"
#import "WCAudioSessionExt.h"

@class ActionRecognition, NSString;

@interface RemoteControlCheck : MMService <ActionRecognitionDelegate, WCAudioSessionExt, MMService>
{
    BOOL mIsCondRecordCheck;
    BOOL mIsForceRecordCheck;
    BOOL mIsRecordCheckEnabled;
    BOOL mIsRecordMayStart;
    BOOL mIsPlayCheckEnabled;
    BOOL mIsPlayMayStart;
    ActionRecognition *mActionRecogn;
}

- (void).cxx_destruct;
- (void)ActionRecognitionShake;
- (BOOL)CanRecord;
- (void)HandleRemoteControlEvent:(id)arg1;
- (BOOL)IsOpenRemoteControl;
- (BOOL)IsSoundPlaying;
- (void)beginReceiveRemoteControlEvent:(unsigned long)arg1;
- (void)dealloc;
- (void)endReceiveRemoteControlEvent:(unsigned long)arg1;
- (BOOL)isPlayChecking;
- (BOOL)isRecordChecking;
- (void)onWCAudioSessionCategoryChange:(unsigned int)arg1;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionOverride;
- (void)plugin_off;
- (void)plugin_on;
- (void)realBeginReceiveRemoteControlEvent;
- (void)realEndReceiveRemoteControlEvent;
- (void)registerNotify;
- (void)startPlayCheck;
- (void)startRecordCheck;
- (void)startRecordCheckIfOpenRC;
- (void)stopPlayCheck;
- (void)stopRecordCheck;
- (void)stopRecordCheckIfOpenRC;
- (void)unregisterNotify;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
