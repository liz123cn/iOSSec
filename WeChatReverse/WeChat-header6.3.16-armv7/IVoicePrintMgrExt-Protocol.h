//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol IVoicePrintMgrExt <NSObject>

@optional
- (void)OnEndRecord:(BOOL)arg1;
- (void)OnEnviromentCheckModeLevelMeter:(unsigned long)arg1 Peak:(float)arg2;
- (void)OnEnviromentCheckResult:(BOOL)arg1;
- (void)OnGetMatchingResult:(int)arg1 andVoiceId:(unsigned long)arg2;
- (void)OnLevelMeter:(unsigned long)arg1 Peak:(float)arg2;
- (void)OnStartRecord;
- (void)OnUploadError:(int)arg1 andVoiceId:(unsigned long)arg2;
- (void)OnVerifyOkWithRandomKey:(NSString *)arg1 andVoiceId:(unsigned long)arg2;
@end
