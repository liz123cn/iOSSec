//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseAudioPlayer.h"

@interface SilkAudioPlayer : BaseAudioPlayer
{
    BOOL m_isNeedRestartMusic;
    BOOL m_isNeedRestartAudioTalk;
    double m_smapleRate;
}

- (void)autostop;
- (id)init;
@property(nonatomic) BOOL m_isNeedRestartAudioTalk; // @synthesize m_isNeedRestartAudioTalk;
@property(nonatomic) BOOL m_isNeedRestartMusic; // @synthesize m_isNeedRestartMusic;
- (void)openSilkFile:(id)arg1;
- (void)play;
- (void)prepareBuffers;
- (BOOL)preparePlayNotNotify;
- (BOOL)preparePlayWithSilkFile:(id)arg1;
- (void)replay;
- (void)setDataFormat;
- (void)setDelegate:(id)arg1;
- (void)setSmapleRate:(double)arg1;
- (void)stop;

@end

