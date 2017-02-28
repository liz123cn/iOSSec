//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

#import "KitProgressBarDelegate.h"
#import "MFBanner.h"

@class KitProgressBar, MassSendWrap, NSString, SightPlayerView, UIButton, UIView;

@interface MFMassSendBar : UIImageView <KitProgressBarDelegate, MFBanner>
{
    UIView *m_contentView;
    KitProgressBar *m_progressBar;
    UIImageView *m_thumb;
    SightPlayerView *m_player;
    UIButton *m_cancelButton;
    MassSendWrap *_task;
    id <MFMassSendBarDelegate> _delegate;
    int _state;
}

- (void).cxx_destruct;
- (void)cancelTask;
- (void)clearPlayer;
- (void)dealloc;
@property(nonatomic) __weak id <MFMassSendBarDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)onClick;
- (void)onProgressAnimEnd;
- (void)onTaskCanceled;
- (void)onTrig;
- (void)setProgress:(float)arg1;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) MassSendWrap *task; // @synthesize task=_task;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

