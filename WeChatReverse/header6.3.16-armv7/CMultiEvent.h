//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBaseEvent.h"

#import "NotifyFromEventDelegate.h"

@class MMTimer, NSMutableArray, NSMutableDictionary, NSOperationQueue;

@interface CMultiEvent : CBaseEvent <NotifyFromEventDelegate>
{
    NSMutableArray *m_arrEvent;
    MMTimer *m_oTimerCheckEvent;
    NSMutableDictionary *m_dicThreadEvent;
    NSOperationQueue *m_operationQueuEvent;
}

- (void).cxx_destruct;
- (void)ClearStopEvent;
- (id)FindEvent:(unsigned long)arg1;
- (id)GetLock;
- (BOOL)IsEventRunning:(unsigned long)arg1;
- (unsigned long)IsEventTypeExist:(unsigned long)arg1;
- (void)NotifyFromEvent:(id)arg1 Message:(unsigned long)arg2 MessageInfo:(id)arg3;
- (BOOL)SetEvent:(id)arg1 EventInfo:(id)arg2 Start:(BOOL)arg3 Ret:(unsigned int *)arg4 RetInfo:(id)arg5;
- (BOOL)Start:(unsigned int *)arg1 RetInfo:(id)arg2;
- (BOOL)StartEvent:(id)arg1 Ret:(unsigned int *)arg2 RetInfo:(id)arg3;
- (void)Stop;
- (void)StopEvent:(unsigned long)arg1;
- (void)TimerCheckEvent;
- (void)dealloc;
- (id)init;

@end

