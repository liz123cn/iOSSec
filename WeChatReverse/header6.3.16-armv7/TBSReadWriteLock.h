//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBSReadWriteLock : NSObject
{
    struct _opaque_pthread_rwlock_t {
        long __sig;
        char __opaque[124];
    } rwlock;
}

- (int)TBS_ReaderLock;
- (int)TBS_Unlock;
- (int)TBS_WriterLock;
- (void)dealloc;
- (id)init;

@end

