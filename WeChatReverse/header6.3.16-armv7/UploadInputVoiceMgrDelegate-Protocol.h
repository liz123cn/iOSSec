//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol UploadInputVoiceMgrDelegate <NSObject>

@optional
- (void)OnGetText:(NSString *)arg1 VoiceId:(unsigned long)arg2;
- (void)OnLocalFileOperationError;
- (void)OnNetworkError:(unsigned long)arg1;
@end

