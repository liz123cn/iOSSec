//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "AVAudioSessionDelegate.h"
#import "JSEventExt.h"
#import "MMService.h"

@class CTCallCenter, NSString;

@interface SysCallCheck : MMService <MMService, JSEventExt, AVAudioSessionDelegate>
{
    BOOL mIsNeedRestartAudioTalk;
    CTCallCenter *mCallCenter;
}

- (void).cxx_destruct;
- (void)OnMediaPlayStateChanged:(id)arg1;
- (void)appBecomeActive;
- (void)audioSessionInterruption:(id)arg1;
- (void)beginInterruption;
- (void)callBegin;
- (void)callEnd;
- (void)delayRestartTalk;
- (void)endInterruption;
- (void)inputIsAvailableChanged:(BOOL)arg1;
- (BOOL)isPhoneCalling;
- (void)jsAudioStateChanged:(id)arg1;
- (void)jsVideoStateChanged:(id)arg1;
@property(retain, nonatomic) CTCallCenter *mCallCenter; // @synthesize mCallCenter;
@property(nonatomic) BOOL mIsNeedRestartAudioTalk; // @synthesize mIsNeedRestartAudioTalk;
- (void)onServiceClearData;
- (void)pauseTalk;
- (void)playBegin;
- (void)playEnd;
- (void)restartTalk;
- (void)startCheck;
- (void)stopCheck;
- (void)swithAudioRoute;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

