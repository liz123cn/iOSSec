//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface JSAPIVerifyOverhead : NSObject
{
    struct timeval _startTime;
    NSString *_url;
    int _cgi;
}

- (void).cxx_destruct;
- (void)computeTimeConsumption:(BOOL)arg1 appId:(id)arg2 errCode:(int)arg3;
- (id)initWithUrl:(id)arg1 cgi:(int)arg2;

@end

