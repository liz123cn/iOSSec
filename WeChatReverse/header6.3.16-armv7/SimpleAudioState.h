//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SimpleAudioState : NSObject
{
    BOOL _m_running;
    struct AudioQueueBuffer **m_buffers;
    struct AudioStreamBasicDescription *m_dataFormat;
    unsigned long _m_bufferByteSize;
    unsigned long _m_numPacketsToRead;
    struct OpaqueAudioQueue *_m_queue;
    id <SimpleAudioFillBufferDelegate> _m_delegate;
    long long _m_currentPacket;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
@property(nonatomic) unsigned long m_bufferByteSize; // @synthesize m_bufferByteSize=_m_bufferByteSize;
@property(nonatomic) struct AudioQueueBuffer **m_buffers; // @synthesize m_buffers;
@property(nonatomic) long long m_currentPacket; // @synthesize m_currentPacket=_m_currentPacket;
@property(nonatomic) struct AudioStreamBasicDescription *m_dataFormat; // @synthesize m_dataFormat;
@property(nonatomic) __weak id <SimpleAudioFillBufferDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(nonatomic) unsigned long m_numPacketsToRead; // @synthesize m_numPacketsToRead=_m_numPacketsToRead;
@property(nonatomic) struct OpaqueAudioQueue *m_queue; // @synthesize m_queue=_m_queue;
@property(nonatomic) BOOL m_running; // @synthesize m_running=_m_running;

@end

