//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIImageView;

@interface SightMainframeIconView : UIView
{
    UIView *m_content;
    UIImageView *m_cameraMask;
    BOOL m_trigCamera;
    BOOL m_cameraTargetState;
    BOOL m_delayStopCamera;
    unsigned long m_stopID;
}

- (void).cxx_destruct;
- (void)commonInit;
- (void)dealloc;
- (struct CGPoint)getIcontCenter;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)makeNewCameraMask;
- (void)onCameraReady;
- (void)releaseCameraState;
- (void)setFrame:(struct CGRect)arg1;
- (void)setProgress:(float)arg1;
- (void)stopCamera;
- (void)stopCameraImplement:(unsigned long)arg1;
- (void)trigCamera;
- (void)unTrigIcon;
- (void)updateBlurImage;

@end
