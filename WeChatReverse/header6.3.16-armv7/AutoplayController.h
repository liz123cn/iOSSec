//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray;

@interface AutoplayController : MMObject
{
    NSMutableArray *m_arrMesLocalIDs;
    id <AutoplayController> m_delegate;
    BOOL m_bCanPlay;
    BOOL m_bCanStart;
}

- (void).cxx_destruct;
- (void)AddMessageLocalID:(unsigned long)arg1;
- (void)PlayList;
- (void)Register;
- (void)Reset;
- (void)UnRegister;
- (void)dealloc;
- (id)init;
- (BOOL)isPlayOK;
@property(nonatomic) __weak id <AutoplayController> m_delegate; // @synthesize m_delegate;
- (void)onBeginPlayVideo;
- (void)onBeginRecordVideo;
- (void)onBeginStartRecording;
- (void)onEndPlaying:(unsigned long)arg1 isForceStopped:(BOOL)arg2;
- (void)onMessageDownloaded:(unsigned long)arg1;
- (void)onMessagePlayed:(unsigned long)arg1;
- (void)onStartPlaying:(id)arg1;
- (void)onStopPlayingVideo;
- (void)onStopRecording;
- (void)onStopRecordingVideo;
- (void)systemActived:(id)arg1;
- (void)systemResigned:(id)arg1;

@end
