//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MonoServiceMsgHistory : NSObject
{
    NSMutableDictionary *m_msgHistoryDic;
}

- (void).cxx_destruct;
- (void)addHistoryWithMsg:(id)arg1;
- (id)getHistoryMsg:(id)arg1;
- (BOOL)hasHistoryMsg:(id)arg1;
- (id)init;
@property(retain, nonatomic) NSMutableDictionary *m_msgHistoryDic; // @synthesize m_msgHistoryDic;

@end

