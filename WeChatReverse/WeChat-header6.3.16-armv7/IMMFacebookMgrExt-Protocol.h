//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol IMMFacebookMgrExt <NSObject>

@optional
- (void)facebookCheckAccessTokenValidFinished:(BOOL)arg1;
- (void)onBindFacebookFinish:(unsigned long)arg1;
- (void)onExtendTokenFinish:(BOOL)arg1;
- (void)onFBDidLogin;
- (void)onFBDidNotLogin:(BOOL)arg1;
- (void)onLoginFacebookBegan:(NSString *)arg1;
- (void)onUnBindFacebookFinish:(unsigned long)arg1;
@end

