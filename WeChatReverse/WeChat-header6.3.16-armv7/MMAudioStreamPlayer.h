//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMAudioDataReadStreamDelegate.h"
#import "UIAlertViewDelegate.h"

@class MMAudioDataPipe, NSDictionary, NSNotificationCenter, NSString, NSThread;

@interface MMAudioStreamPlayer : NSObject <MMAudioDataReadStreamDelegate, UIAlertViewDelegate>
{
    MMAudioDataPipe *m_dataPipe;
    struct OpaqueAudioQueue *audioQueue;
    struct OpaqueAudioFileStreamID *audioFileStream;
    struct AudioStreamBasicDescription asbd;
    NSThread *internalThread;
    struct AudioQueueBuffer *audioQueueBuffer[16];
    struct AudioStreamPacketDescription packetDescs[512];
    unsigned int fillBufferIndex;
    unsigned long packetBufferSize;
    unsigned long bytesFilled;
    unsigned long packetsFilled;
    _Bool inuse[16];
    int buffersUsed;
    int state;
    int stopReason;
    int errorCode;
    long err;
    _Bool discontinuous;
    struct _opaque_pthread_mutex_t queueBuffersMutex;
    struct _opaque_pthread_cond_t queueBufferReadyCondition;
    NSNotificationCenter *notificationCenter;
    unsigned long bitRate;
    int dataOffset;
    int fileLength;
    unsigned long long audioDataByteCount;
    unsigned long long processedPacketsCount;
    unsigned long long processedPacketsSizeTotal;
    double seekTime;
    BOOL seekWasRequested;
    double requestedSeekTime;
    double sampleRate;
    double packetDuration;
    double lastProgress;
    BOOL pausedByInterruption;
    NSDictionary *streamProperties;
}

+ (unsigned long)hintForFileExtension:(id)arg1;
+ (id)stringForErrorCode:(int)arg1;
- (void).cxx_destruct;
@property unsigned long bitRate; // @synthesize bitRate;
- (double)calculatedBitRate;
- (void)createQueue;
- (void)dealloc;
@property(readonly) double duration;
- (void)enqueueBuffer;
@property int errorCode; // @synthesize errorCode;
- (void)failWithErrorCode:(int)arg1;
- (struct OpaqueAudioQueue *)getAudioQueue;
- (void)handleAudioPackets:(const void *)arg1 numberBytes:(unsigned long)arg2 numberPackets:(unsigned long)arg3 packetDescriptions:(struct AudioStreamPacketDescription *)arg4;
- (void)handleBufferCompleteForQueue:(struct OpaqueAudioQueue *)arg1 buffer:(struct AudioQueueBuffer *)arg2;
- (void)handleInterruptionChangeToState:(unsigned long)arg1;
- (void)handlePropertyChangeForFileStream:(struct OpaqueAudioFileStreamID *)arg1 fileStreamPropertyID:(unsigned long)arg2 ioFlags:(unsigned int *)arg3;
- (void)handlePropertyChangeForQueue:(struct OpaqueAudioQueue *)arg1 propertyID:(unsigned long)arg2;
- (void)handleReadFromStream:(id)arg1 eventType:(unsigned long)arg2;
- (id)initWithDataPipe:(id)arg1;
- (void)internalSeekToTime:(double)arg1;
- (BOOL)isFinishing;
- (BOOL)isIdle;
- (BOOL)isPaused;
- (BOOL)isPlaying;
- (BOOL)isWaiting;
- (void)mainThreadStateNotification;
- (void)onHandleReadEventfromStream:(id)arg1 eventType:(unsigned long)arg2;
- (void)pause;
- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2;
@property(readonly) double progress;
- (void)reportError:(int)arg1;
- (BOOL)runLoopShouldExit;
- (void)seekToTime:(double)arg1;
@property int state; // @synthesize state;
- (void)start;
- (void)startInternal;
- (void)stop;
@property(readonly) NSDictionary *streamProperties; // @synthesize streamProperties;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

