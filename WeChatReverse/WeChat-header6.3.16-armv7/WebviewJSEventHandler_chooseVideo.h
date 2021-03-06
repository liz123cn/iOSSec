//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "WCActionSheetDelegate.h"

@class CaptureVideoInfo, MMLoadingView, NSString, UINavigationController;

@interface WebviewJSEventHandler_chooseVideo : WebviewJSEventHandlerBase <WCActionSheetDelegate>
{
    UINavigationController *m_oVideoPicker;
    CaptureVideoInfo *m_oVideoInfo;
    MMLoadingView *m_loadingView;
    BOOL _isFromPicker;
    unsigned long _maxDuration;
    BOOL _isCameraMode;
    BOOL _isFrontCamera;
}

- (void).cxx_destruct;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingVideoWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)asyncHandleCancel;
- (void)dealloc;
- (void)didTakeVideo;
- (int)getVideoDuration:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)handleVideo:(id)arg1 ImagePicker:(id)arg2;
- (id)init;
- (void)initLoadingView;
- (void)processVideo:(id)arg1;
- (void)processVideoFromPicker:(id)arg1;
- (void)showVideoPickerCameraMode:(BOOL)arg1 isFrontCamera:(BOOL)arg2 maxDuration:(unsigned long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

