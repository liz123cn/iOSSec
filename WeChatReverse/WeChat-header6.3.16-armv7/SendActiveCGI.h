//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBMessageObserverDelegate.h"

@interface SendActiveCGI : NSObject <PBMessageObserverDelegate>
{
}

- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)dealloc;
- (id)init;
- (void)sendActiveRequest;
- (void)sendRequestWithActive:(BOOL)arg1;
- (void)sendUnActiveRequest;

@end

