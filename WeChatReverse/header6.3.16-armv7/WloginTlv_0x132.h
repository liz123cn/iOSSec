//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WloginTlv.h"

@class NSData;

@interface WloginTlv_0x132 : WloginTlv
{
    NSData *accessToken;
    unsigned int dwExpireTime;
    NSData *openId;
}

@property(retain) NSData *accessToken; // @synthesize accessToken;
- (void)dealloc;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
@property unsigned int dwExpireTime; // @synthesize dwExpireTime;
@property(copy) NSData *openId; // @synthesize openId;

@end

