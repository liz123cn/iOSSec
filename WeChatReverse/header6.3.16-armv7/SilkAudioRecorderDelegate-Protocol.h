//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class AudioRecorderUserData, NSString;

@protocol SilkAudioRecorderDelegate

@optional
- (BOOL)onPrepareSendSilk:(AudioRecorderUserData *)arg1;
- (void)onSilkBeginRecording:(AudioRecorderUserData *)arg1 ErrNo:(int)arg2;
- (void)onSilkEndRecording:(AudioRecorderUserData *)arg1;
- (void)onSilkLevelMeter:(AudioRecorderUserData *)arg1 Peak:(float)arg2;
- (void)onSilkPart:(AudioRecorderUserData *)arg1 Offset:(unsigned long)arg2 Len:(unsigned long)arg3 EndFlag:(unsigned long)arg4 ForceDelete:(BOOL)arg5 Duration:(unsigned long)arg6;
- (BOOL)silkCheckIfButtonPressing:(NSString *)arg1;
- (BOOL)silkStopRecord;
@end

