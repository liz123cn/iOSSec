//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface CContactOPLog : NSObject
{
    NSMutableDictionary *m_dicSkipContacts;
}

- (void).cxx_destruct;
- (BOOL)add_DeleteChatContact:(id)arg1 sync:(BOOL)arg2;
- (BOOL)add_DeleteChatMsg:(id)arg1 sync:(BOOL)arg2;
- (BOOL)add_ModifyContact:(id)arg1 addScene:(unsigned long)arg2 sync:(BOOL)arg3;
- (BOOL)add_ModifyContact:(id)arg1 sync:(BOOL)arg2;
- (BOOL)add_ModifyNotifyStatus:(id)arg1 withStatus:(unsigned long)arg2 NeedSync:(BOOL)arg3;
- (void)add_SkipContact:(id)arg1;
- (id)init;
- (BOOL)isSkipContact:(id)arg1;

@end
