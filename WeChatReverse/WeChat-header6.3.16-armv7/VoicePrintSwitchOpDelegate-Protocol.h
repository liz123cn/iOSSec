//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@protocol VoicePrintSwitchOpDelegate <NSObject>

@optional
- (void)OnSwitchOp:(int)arg1 andSwitch:(int)arg2 withScene:(unsigned long)arg3;
- (void)OnSwitchOpErrorWithScene:(unsigned long)arg1 andErrorCode:(int)arg2;
@end

