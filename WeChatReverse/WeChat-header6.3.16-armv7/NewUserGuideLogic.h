//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NewUserGuideConfig;

@interface NewUserGuideLogic : NSObject
{
    NSMutableDictionary *m_dicCurrentTips;
    NewUserGuideConfig *m_config;
}

+ (void)createNewUserGuide;
+ (id)getConfigPath;
+ (id)loadConfig;
+ (void)loadNewUserGuide;
+ (void)removeConfig;
+ (void)removeNewUserGuide;
+ (void)saveConfig:(id)arg1;
+ (id)shareLogic;
- (void).cxx_destruct;
- (BOOL)checkEnd;
- (BOOL)existTip:(unsigned int)arg1;
- (id)getConfig;
- (id)initWithConfig:(id)arg1;
- (void)makeAnimate:(id)arg1;
- (id)makeTip:(id)arg1 Left:(BOOL)arg2 Top:(BOOL)arg3 closeSel:(SEL)arg4 target:(id)arg5;
- (void)removeContactsTip:(BOOL)arg1;
- (void)removeMainFrameTip:(BOOL)arg1;
- (void)removeNearByRedDot;
- (void)removeShakeRedDot;
- (void)removeTip:(unsigned int)arg1;
- (void)removeVoiceTip:(BOOL)arg1;
- (void)removeVoipAndPhoneTip:(BOOL)arg1;
- (void)showContactsTip:(id)arg1 frame:(struct CGRect)arg2 sel:(SEL)arg3 target:(id)arg4;
- (void)showMainFrameTip:(id)arg1 frame:(struct CGRect)arg2 sel:(SEL)arg3 target:(id)arg4;
- (BOOL)showNearByRedDot;
- (BOOL)showShakeRedDot;
- (void)showVoiceTip:(id)arg1 frame:(struct CGRect)arg2 sel:(SEL)arg3 target:(id)arg4;
- (void)showVoipAndPhoneTip:(id)arg1 frame:(struct CGRect)arg2 sel:(SEL)arg3 target:(id)arg4;

@end

