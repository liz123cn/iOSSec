//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSString;

@protocol IFavAudioRecorderExt

@optional
- (void)OnFavBeginRecording:(int)arg1;
- (void)OnFavEndRecording:(NSString *)arg1 VoiceFmt:(unsigned long)arg2;
- (void)OnFavFinishRecord:(NSString *)arg1 VoiceFmt:(unsigned long)arg2;
- (void)OnFavLevelMeter:(float)arg1;
@end

