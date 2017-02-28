//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "MultitalkMinimizeViewControllerDelegate.h"

@class NSString, SequenceAnimationObject, VoipMinimizeViewController;

@interface VoipMinimizeWindow : MMUIWindow <MultitalkMinimizeViewControllerDelegate>
{
    BOOL m_isMinimizeMode;
    SequenceAnimationObject *m_animationObject;
    VoipMinimizeViewController *m_viewController;
    id <VoipMinimizeWindowDelegate> _m_delegate;
    SequenceAnimationObject *_m_animationObjectForAlpha;
    int _m_startOrientation;
}

- (void).cxx_destruct;
- (struct CGRect)fullScreenRect;
- (void)hideMinimizeWindow;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)init;
- (BOOL)isAudioMode;
- (BOOL)isMinimizeMode;
@property(retain, nonatomic) SequenceAnimationObject *m_animationObject; // @synthesize m_animationObject;
@property(retain, nonatomic) SequenceAnimationObject *m_animationObjectForAlpha; // @synthesize m_animationObjectForAlpha=_m_animationObjectForAlpha;
@property(nonatomic) __weak id <VoipMinimizeWindowDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) BOOL m_isMinimizeMode; // @synthesize m_isMinimizeMode;
@property(nonatomic) int m_startOrientation; // @synthesize m_startOrientation=_m_startOrientation;
@property(retain, nonatomic) VoipMinimizeViewController *m_viewController; // @synthesize m_viewController;
- (void)onMultitalkMinimizeViewControllerTap;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)showGrayDesc:(id)arg1;
- (void)showGreenDesc:(id)arg1;
- (void)showMinimizeWindow;
- (void)startTimer;
- (struct CGRect)vaildFrame;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
