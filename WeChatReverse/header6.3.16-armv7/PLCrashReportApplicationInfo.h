//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface PLCrashReportApplicationInfo : NSObject
{
    NSString *_applicationIdentifier;
    NSString *_applicationVersion;
}

@property(readonly, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(readonly, nonatomic) NSString *applicationVersion; // @synthesize applicationVersion=_applicationVersion;
- (void)dealloc;
- (id)initWithApplicationIdentifier:(id)arg1 applicationVersion:(id)arg2;

@end

