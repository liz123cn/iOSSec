//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "WCAudioSessionExt.h"

@class AudioRecorderUserData, MMTimer, NSRecursiveLock, NSString;

@interface BaseAudioRecorder : MMService <WCAudioSessionExt, MMService>
{
    struct RecorderState *mAqData;
    BOOL mIsNeedNotifyOtherAudio;
    NSRecursiveLock *_dataLock;
    BOOL needStopInBackground;
    AudioRecorderUserData *mUserData;
    MMTimer *mMeterTimer;
}

- (void).cxx_destruct;
- (void)BeginNotifyOnMainThread:(id)arg1;
- (void)EndNotifyOnMainThread;
- (BOOL)ISRecordAutoStop;
- (void)RecordPrepareDenied;
- (unsigned long)RecordStatus;
- (long)RecordingTime;
- (void)TimerCheckMeter;
- (void)autostop;
- (BOOL)canAutoRestart;
@property(readonly, retain, nonatomic) NSRecursiveLock *dataLock; // @synthesize dataLock=_dataLock;
- (void)dealloc;
- (id)init;
- (BOOL)initQueue;
- (void)initSession;
- (BOOL)isArgumentError:(int)arg1;
- (BOOL)isRecording;
@property(retain, nonatomic) MMTimer *mMeterTimer; // @synthesize mMeterTimer;
@property(retain) AudioRecorderUserData *mUserData; // @synthesize mUserData;
@property(nonatomic) BOOL needNotifyOtherAudio; // @synthesize needNotifyOtherAudio=mIsNeedNotifyOtherAudio;
@property(nonatomic) BOOL needStopInBackground; // @synthesize needStopInBackground;
- (void)onWCAudioSessionCategoryChange:(unsigned int)arg1;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionOverride;
- (BOOL)prepareRecordButNotNotify;
- (int)real_record;
- (void)record;
- (void)registerInter;
- (void)reportAudioQueueRestartError:(int)arg1;
- (void)reportAudioQueueRestartFailed;
- (void)reportAudioQueueRestartOk;
- (void)reportAudioQueueStartError:(int)arg1;
- (void)setBeginSendData;
- (void)setForceDelete;
- (void)setStartRecordTime;
- (void)setStopping;
- (void)setUserData:(id)arg1;
- (BOOL)shouldAutoRestartWith:(int)arg1;
- (void)stop;
- (void)stopButNotNotify;
- (void)stopInBackground;
- (void)unregisterInter;
- (void)updateSetting;
- (void)updateStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

