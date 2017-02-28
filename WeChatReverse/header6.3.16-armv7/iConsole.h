//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITextFieldDelegate.h"
#import "WCActionSheetDelegate.h"

@class NSString;

@interface iConsole : MMUIViewController <UITextFieldDelegate, WCActionSheetDelegate>
{
}

+ (void)doNSLog:(id)arg1;
+ (void)initialize;
+ (void)logToConsoleWithColor:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 message:(id)arg6;
+ (void)logToFile:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 message:(id)arg6;
+ (void)logWithLevel:(int)arg1 module:(const char *)arg2 errorCode:(unsigned long)arg3 file:(const char *)arg4 line:(int)arg5 func:(const char *)arg6 format:(id)arg7;
+ (void)logWithLevel:(int)arg1 module:(const char *)arg2 errorCode:(unsigned long)arg3 file:(const char *)arg4 line:(int)arg5 func:(const char *)arg6 message:(id)arg7;
+ (void)printLog:(int)arg1 module:(const char *)arg2 file:(const char *)arg3 line:(int)arg4 func:(const char *)arg5 log:(id)arg6;
+ (void)purelog:(id)arg1;
+ (void)purelog:(id)arg1 arguments:(void *)arg2 isCommand:(_Bool)arg3;
+ (BOOL)shouldEnableDebugLog;
+ (BOOL)shouldLog:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

