//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CMultiEvent.h"

@class NSString;

@interface CGetSxEvent : CMultiEvent
{
    unsigned long m_uiSyncCount;
    NSString *m_nsLastSyncKeyMD5;
}

- (void).cxx_destruct;
- (BOOL)CreateSyncEvent;
- (void)NotifyFromEvent:(id)arg1 Message:(unsigned long)arg2 MessageInfo:(id)arg3;
- (BOOL)SetEventInfo:(id)arg1;
- (BOOL)Start:(unsigned int *)arg1 RetInfo:(id)arg2;
- (void)Stop;
- (void)TimerCheckEvent;
- (void)dealloc;
- (id)init;

@end
