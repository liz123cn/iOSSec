//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface ChatRoomInfoSettingMgr : NSObject
{
    NSMutableDictionary *m_dicInfoSetting;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)load;
- (BOOL)needToShowDisplayNameTip:(id)arg1;
- (BOOL)needToShowPushMsgTip:(id)arg1;
- (void)save;
- (void)setHasShowDisplayNameTip:(id)arg1;
- (void)setHasShowPushMsgTip:(id)arg1;

@end

