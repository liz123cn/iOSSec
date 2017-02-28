//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "AVCaptureAudioDataOutputSampleBufferDelegate.h"
#import "AVCaptureVideoDataOutputSampleBufferDelegate.h"
#import "MMQRCodeScannerDelegate.h"

@class AVCaptureAudioDataOutput, AVCaptureDevice, AVCaptureDeviceInput, AVCaptureMovieFileOutput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, MMQRCodeScanner, NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface SightCameraCapture : MMObject <AVCaptureVideoDataOutputSampleBufferDelegate, AVCaptureAudioDataOutputSampleBufferDelegate, MMQRCodeScannerDelegate>
{
    BOOL m_isActive;
    BOOL m_isAudioActive;
    BOOL m_isFileOutputActive;
    AVCaptureSession *m_captureSession;
    AVCaptureDevice *m_inputCamera;
    AVCaptureDeviceInput *m_videoInput;
    AVCaptureDeviceInput *m_audioInput;
    AVCaptureVideoDataOutput *m_videoOutput;
    AVCaptureAudioDataOutput *m_audioOutput;
    AVCaptureMovieFileOutput *m_fileOutput;
    AVCaptureVideoPreviewLayer *m_previewLayer;
    struct CGSize m_targetVideoSize;
    float m_targetBitRate;
    NSMutableArray *m_movieWriters;
    NSMutableArray *m_moviePreviewers;
    MMQRCodeScanner *m_QRCodeScanner;
    unsigned long m_scannerSkip;
    NSObject<OS_dispatch_queue> *m_callbackQueue;
    BOOL m_needCapturePicture;
    CDUnknownBlockType m_captureBlock;
    BOOL _activeQRScan;
    NSString *_preset;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL activeQRScan; // @synthesize activeQRScan=_activeQRScan;
- (void)addMoviePreviewer:(id)arg1;
- (void)addMovieWriter:(id)arg1;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *callbackQueue;
- (BOOL)canZoom;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)capturePreviewImageWithBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)focusAtPoint:(struct CGPoint)arg1;
- (BOOL)initCaptureSession:(id)arg1;
- (void)initQRCodeScanner;
- (id)initWithPreset:(id)arg1;
- (id)initWithSessionPreset:(id)arg1 cameraPosition:(int)arg2;
@property(nonatomic) BOOL isActive; // @synthesize isActive=m_isActive;
@property(readonly, nonatomic) BOOL isAudioActive; // @synthesize isAudioActive=m_isAudioActive;
- (BOOL)isFileOutputMode;
- (BOOL)isRunning;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)onCameraFailed;
- (void)onNoQRCode;
- (void)onQRCodeScanSuccess:(id)arg1 atPoint:(vector_78818218)arg2 originSize:(struct CGSize)arg3;
@property(nonatomic) NSString *preset; // @synthesize preset=_preset;
@property(readonly, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=m_previewLayer;
- (void)removeFileWriter:(id)arg1;
- (void)removeMoviePreviewer:(id)arg1;
- (void)removeMovieWriter:(id)arg1;
- (void)setMoviePreviwerOutputSizeAndSession:(id)arg1;
- (void)setPreviewReady;
- (void)setZoomLevel:(float)arg1;
- (void)startCameraCapture;
- (BOOL)startCameraCaptureAudioDevice;
- (BOOL)stopCameraCapture;
- (void)stopCameraCaptureAudioDevice;
- (void)switchToFileOutputMode;
- (void)zoom;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
