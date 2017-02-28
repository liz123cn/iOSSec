//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SimpleAudioState;

@interface SimpleAudioPlayer : NSObject
{
    SimpleAudioState *m_bufferState;
}

+ (void)sprintRetCode:(long)arg1;
- (void).cxx_destruct;
- (BOOL)audioQueueStart;
- (BOOL)audioQueueStop;
- (void)clearBuffer;
- (void)clearQueue;
- (void)dealloc;
- (id)getState;
- (id)init;
@property(retain, nonatomic) SimpleAudioState *m_bufferState; // @synthesize m_bufferState;
- (BOOL)play;
- (void)printRetCode:(long)arg1;
- (void)stop;
- (BOOL)updateBuffer;
- (BOOL)updateDataFormat;
- (BOOL)updateQueue;

@end

