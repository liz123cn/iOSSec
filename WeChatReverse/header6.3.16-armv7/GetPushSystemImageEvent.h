//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NetCmdEvent.h"

@class NSString;

@interface GetPushSystemImageEvent : NetCmdEvent
{
    NSString *m_url;
    unsigned long m_offset;
    unsigned long m_mode;
}

- (void).cxx_destruct;
- (void)NotifyFromPrtl:(unsigned long)arg1 MessageInfo:(id)arg2;
- (BOOL)SetEventInfo:(id)arg1;
- (BOOL)Start:(unsigned int *)arg1 RetInfo:(id)arg2;
- (void)dealloc;
- (id)init;

@end

