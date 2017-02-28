//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WNNoteItemUtilBase.h"

#import "WNNoteVoicePlayDelegate.h"
#import "WNNoteVoicePlayViewDelegate.h"
#import "WNNoteVoiceRecordDelegate.h"

@class NSString, WNNoteVoiceMgr;

@interface WNNoteVoiceItemUtil : WNNoteItemUtilBase <WNNoteVoiceRecordDelegate, WNNoteVoicePlayDelegate, WNNoteVoicePlayViewDelegate>
{
    WNNoteVoiceMgr *_voiceMgr;
    BOOL _bRecording;
}

- (void).cxx_destruct;
- (void)CancelWNNoteVoiceRecordWithObj:(id)arg1 Code:(unsigned short)arg2;
- (void)CompleteWNNoteVoiceRecordWithObj:(id)arg1 FilePath:(id)arg2 VoiceTime:(float)arg3 VoiceFmt:(unsigned long)arg4;
- (unsigned long)GetTmpAudioTime:(id)arg1;
- (void)StartWNNoteVoiceRecordWithObj:(id)arg1;
- (void)dealloc;
- (id)getIconHLName;
- (id)getIconName;
- (id)getIconSelectedName;
- (id)getTitle;
- (id)init;
- (void)insertItem:(id)arg1 isUpdate:(BOOL)arg2 isConfigData:(BOOL)arg3;
@property(readonly, nonatomic) BOOL isPlaying;
@property(readonly, nonatomic) BOOL isRecording;
- (void)onAddItemBegin:(id)arg1;
- (void)onClickItem:(id)arg1;
- (void)onClosePlayView;
- (void)stopRecord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
