//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MusicLogInfo : NSObject
{
    unsigned int _playerType;
    NSString *_musicId;
    NSString *_musicTitle;
    NSString *_singer;
    NSString *_appID;
    unsigned int _musicDuaration;
    unsigned int _duarationToPlay;
    unsigned int _duarationOnForeground;
    BOOL _bTakeScreenShotAtFirstPage;
    BOOL _bTakeScreenShotAtFullLyricPage;
    unsigned int _musicPlayerEntranceType;
    BOOL _bSwipeToNext;
    BOOL _bSwipeToPrevious;
    unsigned int _playModeWhenStop;
    BOOL _bShowFullLyricPage;
    BOOL _bShowFirstPage;
    BOOL _bEasterEggToPlayAll;
    BOOL _bEasterEggToPlayOne;
    NSString *_albumName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) BOOL bEasterEggToPlayAll; // @synthesize bEasterEggToPlayAll=_bEasterEggToPlayAll;
@property(nonatomic) BOOL bEasterEggToPlayOne; // @synthesize bEasterEggToPlayOne=_bEasterEggToPlayOne;
@property(nonatomic) BOOL bShowFirstPage; // @synthesize bShowFirstPage=_bShowFirstPage;
@property(nonatomic) BOOL bShowFullLyricPage; // @synthesize bShowFullLyricPage=_bShowFullLyricPage;
@property(nonatomic) BOOL bSwipeToNext; // @synthesize bSwipeToNext=_bSwipeToNext;
@property(nonatomic) BOOL bSwipeToPrevious; // @synthesize bSwipeToPrevious=_bSwipeToPrevious;
@property(nonatomic) BOOL bTakeScreenShotAtFirstPage; // @synthesize bTakeScreenShotAtFirstPage=_bTakeScreenShotAtFirstPage;
@property(nonatomic) BOOL bTakeScreenShotAtFullLyricPage; // @synthesize bTakeScreenShotAtFullLyricPage=_bTakeScreenShotAtFullLyricPage;
@property(nonatomic) unsigned int duarationOnForeground; // @synthesize duarationOnForeground=_duarationOnForeground;
@property(nonatomic) unsigned int duarationToPlay; // @synthesize duarationToPlay=_duarationToPlay;
- (id)genLogInfo;
- (id)genLogInfo13044;
- (BOOL)hasSildeVertical;
- (BOOL)hasSwiped;
- (id)init;
@property(nonatomic) unsigned int musicDuaration; // @synthesize musicDuaration=_musicDuaration;
@property(retain, nonatomic) NSString *musicId; // @synthesize musicId=_musicId;
@property(nonatomic) unsigned int musicPlayerEntranceType; // @synthesize musicPlayerEntranceType=_musicPlayerEntranceType;
@property(retain, nonatomic) NSString *musicTitle; // @synthesize musicTitle=_musicTitle;
@property(nonatomic) unsigned int playModeWhenStop; // @synthesize playModeWhenStop=_playModeWhenStop;
@property(nonatomic) unsigned int playerType; // @synthesize playerType=_playerType;
- (void)resetLogStat;
- (void)resetMusicPlayerEntranceType;
@property(retain, nonatomic) NSString *singer; // @synthesize singer=_singer;

@end

