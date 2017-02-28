//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

#import "IAudioReceiverExt.h"
#import "ISettingExtChange.h"
#import "IVoiceReminderExt.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel;

@interface VoiceReminderConfirmNodeView : BaseMessageNodeView <WCActionSheetDelegate, IVoiceReminderExt, IAudioReceiverExt, ISettingExtChange, UIAlertViewDelegate>
{
    UIImageView *_bkgImageView;
    UIImageView *_remindStatusImageView;
    UIImageView *_bodyBkgImageView;
    UILabel *_dateLabel;
    UILabel *_timeLabel;
    UILabel *_timeDescLabel;
    UILabel *_descLabel;
    UIButton *_playButton;
    UIButton *_cancelButton;
    UIActivityIndicatorView *_spinner;
    int _playCount;
    BOOL _playing;
    BOOL _deleteing;
}

+ (BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)OnEndPlaying:(unsigned long)arg1 isForceStop:(BOOL)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)becomeHighlighedBackground;
- (void)becomeNormalBackground;
- (void)becomeRemindStatus;
- (void)cancelRemindMsg:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)initData;
- (void)initView;
- (void)layoutSubviewsInternal;
- (void)onCancelButtonClick:(id)arg1;
- (void)onClearResource;
- (void)onDelete:(id)arg1;
- (void)onDeleteRemindMsgsReturn:(BOOL)arg1 msgWrap:(id)arg2;
- (void)onDisappear;
- (void)onLongTouch;
- (void)onMenuItemWillHide;
- (void)onPlayButtonClick;
- (void)onSettingExtChanged:(int)arg1;
- (void)onTouchCancel;
- (void)onTouchDown;
- (void)onTouchDownRepeat;
- (void)onTouchUpInside;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)startPlayVoice;
- (void)stopPlayVoice;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
