//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSFileHandle;

@interface AudioFile : NSObject
{
    NSFileHandle *m_fhFile;
    unsigned long m_uiDataWrited;
}

- (void).cxx_destruct;
- (void)close;
- (BOOL)create:(id)arg1;
- (void)dealloc;
- (unsigned long)getLength;
- (id)init;
- (BOOL)open:(id)arg1;
- (BOOL)read:(id)arg1;
- (BOOL)readBytes:(unsigned long)arg1 len:(unsigned int *)arg2 buffer:(void *)arg3;
- (unsigned long)seekToEnd;
- (BOOL)writeBytes:(unsigned long)arg1 len:(unsigned long)arg2 buffer:(void *)arg3;

@end

