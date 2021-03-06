//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AudioHelper : NSObject
{
}

+ (void)AVPlaySystemSound:(id)arg1 FileType:(id)arg2 Ambient:(BOOL)arg3;
+ (void)ForceStopMusic;
+ (BOOL)IsAudioTalkPlaying;
+ (BOOL)IsAudioTalkRecording;
+ (BOOL)IsMusicPaused;
+ (BOOL)IsMusicPlaying;
+ (BOOL)IsWeiXinSoundPaused;
+ (BOOL)IsWeiXinSoundPlaying;
+ (void)NextMusic;
+ (BOOL)PauseAudioTalk;
+ (BOOL)PauseMusic;
+ (void)PlaySystemSound:(id)arg1 FileType:(id)arg2 Ambient:(BOOL)arg3;
+ (void)RestartAudioTalk;
+ (void)RestartMusic;
+ (void)StopAudio;
+ (void)StopAudioTalk;
+ (void)StopMusic;
+ (BOOL)isSilkFile:(id)arg1;
+ (BOOL)playNewMsgNotify;
+ (BOOL)playNewMsgNotifyInMessageContent;
+ (void)playSendMsgNotify;
+ (void)playVibration;
+ (void)showRecordDenied;

@end

