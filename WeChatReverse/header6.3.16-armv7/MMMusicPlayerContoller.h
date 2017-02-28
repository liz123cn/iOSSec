//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "IMusicPlayerExt.h"
#import "MMMusicPlayerExt.h"

@class MMMusicInfo, NSString, UIImage;

@interface MMMusicPlayerContoller : UIButton <MMMusicPlayerExt, IMusicPlayerExt>
{
    MMMusicInfo *m_musicInfo;
    UIImage *m_imgForIdle;
    UIImage *m_imgForIdleHL;
    UIImage *m_imgForPlaying;
    UIImage *m_imgForPlayingHL;
    id <MMMusicPlayerContollerDelegate> m_playDelegate;
    NSString *m_key;
    int m_playerSource;
    NSString *m_title;
    NSString *m_photoUrl;
    NSString *m_url;
    NSString *m_lowBandUrl;
    NSString *m_webUrl;
    NSString *m_singer;
}

- (void).cxx_destruct;
- (void)addMusicItem;
- (void)dealloc;
- (id)getMusicInfo;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isCurrentControllForPlayer;
@property(retain, nonatomic) UIImage *m_imgForIdle; // @synthesize m_imgForIdle;
@property(retain, nonatomic) UIImage *m_imgForIdleHL; // @synthesize m_imgForIdleHL;
@property(retain, nonatomic) UIImage *m_imgForPlaying; // @synthesize m_imgForPlaying;
@property(retain, nonatomic) UIImage *m_imgForPlayingHL; // @synthesize m_imgForPlayingHL;
@property(retain, nonatomic) NSString *m_key; // @synthesize m_key;
@property(retain, nonatomic) NSString *m_lowBandUrl; // @synthesize m_lowBandUrl;
@property(retain, nonatomic) MMMusicInfo *m_musicInfo; // @synthesize m_musicInfo;
@property(retain, nonatomic) NSString *m_photoUrl; // @synthesize m_photoUrl;
@property(nonatomic) __weak id <MMMusicPlayerContollerDelegate> m_playDelegate; // @synthesize m_playDelegate;
@property(nonatomic) int m_playerSource; // @synthesize m_playerSource;
@property(retain, nonatomic) NSString *m_singer; // @synthesize m_singer;
@property(retain, nonatomic) NSString *m_title; // @synthesize m_title;
@property(retain, nonatomic) NSString *m_url; // @synthesize m_url;
@property(retain, nonatomic) NSString *m_webUrl; // @synthesize m_webUrl;
- (void)onClickOnMe;
- (void)onLevelMeterPeak:(float)arg1;
- (void)onMusicPlayStatusChanged;
- (void)setImage:(id)arg1 HLImage:(id)arg2 forPlayerState:(int)arg3;
- (void)setKey:(id)arg1;
- (void)setLowBandUrl:(id)arg1;
- (void)setMusicInfo:(id)arg1;
- (void)setMusicListSource:(int)arg1;
- (void)setMusicPhotoUrl:(id)arg1;
- (void)setMusicSinger:(id)arg1;
- (void)setMusicTitle:(id)arg1;
- (void)setMusicWebUrl:(id)arg1;
- (void)setPlayerSource:(int)arg1;
- (void)setUrl:(id)arg1;
- (void)updateButtonImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
