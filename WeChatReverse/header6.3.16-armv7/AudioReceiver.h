//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "AMRAudioPlayerDelegate.h"
#import "DownloadVoiceDelegate.h"
#import "MMService.h"
#import "MessageObserverDelegate.h"
#import "SPXAudioPlayerDelegate.h"
#import "SilkAudioPlayerDelegate.h"

@class AMRAudioPlayer, CDownloadVoiceMgr, CMainControll, NSString, SPXAudioPlayer, SilkAudioPlayer;

@interface AudioReceiver : MMService <AMRAudioPlayerDelegate, SPXAudioPlayerDelegate, SilkAudioPlayerDelegate, DownloadVoiceDelegate, MessageObserverDelegate, MMService>
{
    AMRAudioPlayer *m_amrplayer;
    SPXAudioPlayer *m_spxplayer;
    SilkAudioPlayer *m_silkPlayer;
    CMainControll *m_mainController;
    CDownloadVoiceMgr *m_download;
}

- (void).cxx_destruct;
- (void)MessageReturn:(unsigned long)arg1 MessageInfo:(id)arg2 Event:(unsigned long)arg3;
- (void)OnAMRBeginPlaying:(id)arg1 ErrNo:(int)arg2;
- (void)OnAMREarTip;
- (BOOL)OnAMREndDontNotifyOtherApp;
- (void)OnAMREndPlaying:(id)arg1 isForceStop:(BOOL)arg2;
- (void)OnAMRLevelMeter:(id)arg1 Peak:(float)arg2;
- (void)OnRecvData:(id)arg1 MesLocalID:(unsigned long)arg2 n64MesSvrID:(long long)arg3 CreateTime:(unsigned long)arg4 VoiceTime:(unsigned long)arg5 Offset:(unsigned long)arg6 Len:(unsigned long)arg7 Data:(id)arg8 EndFlag:(unsigned long)arg9 ErrNo:(unsigned long)arg10;
- (void)OnSPXEarTip;
- (BOOL)OnSPXEndDontNotifyOtherApp;
- (void)OnSPXEndPlaying:(id)arg1 isForceStop:(BOOL)arg2;
- (void)OnSPXLevelMeter:(id)arg1 Peak:(float)arg2;
- (BOOL)StartPlay:(id)arg1 MesLocalID:(unsigned long)arg2;
- (BOOL)StartPlay:(id)arg1 MesLocalID:(unsigned long)arg2 Path:(id)arg3;
- (BOOL)StartPlay:(id)arg1 MesLocalID:(unsigned long)arg2 Path:(id)arg3 forceEarpieceMode:(BOOL)arg4 forceAutoMode:(BOOL)arg5;
- (BOOL)StartPlayTmpAudio:(unsigned long)arg1;
- (BOOL)StartPlayTmpAudio:(unsigned long)arg1 forceEarpieceMode:(BOOL)arg2 forceAutoMode:(BOOL)arg3;
- (BOOL)StartPlayTmpAudioWithAutoMode:(unsigned long)arg1;
- (BOOL)StartPlayTmpAudioWithEarpieceMode:(unsigned long)arg1;
- (BOOL)StartPlayWithAutoMode:(id)arg1 MesLocalID:(unsigned long)arg2;
- (BOOL)StartPlayWithEarpieceMode:(id)arg1 MesLocalID:(unsigned long)arg2;
- (BOOL)StopPlay:(id)arg1 MesLocalID:(unsigned long)arg2;
- (BOOL)StopPlayTmpAudio:(unsigned long)arg1;
- (void)dealloc;
- (void)downloadVoiceMessage:(id)arg1;
- (id)getAudioFileName:(id)arg1 LocalID:(unsigned long)arg2;
- (id)getChatName:(id)arg1;
- (BOOL)getMessageFromDB:(id)arg1;
- (id)init;
- (BOOL)initFacade:(id)arg1;
- (BOOL)isPlaying;
- (void)onSilkBeginPlaying:(id)arg1 ErrNo:(int)arg2;
- (void)onSilkEarTip;
- (BOOL)onSilkEndDontNotifyOtherApp;
- (void)onSilkEndPlaying:(id)arg1 isForceStop:(BOOL)arg2;
- (void)onSilkLevelMeter:(id)arg1 Peak:(float)arg2;
- (BOOL)updateMessageToDB:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

