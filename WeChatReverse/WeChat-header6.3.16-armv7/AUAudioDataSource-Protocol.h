//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol AUAudioDataSource <NSObject>
- (int)AudioDevGetData:(char *)arg1 length:(unsigned long)arg2;
- (int)AudioDevPutData:(char *)arg1 length:(unsigned long)arg2;

@optional
- (BOOL)isGetDataReady;
@end

