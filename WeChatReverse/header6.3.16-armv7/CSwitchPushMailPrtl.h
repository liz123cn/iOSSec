//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PrtlBase.h"

@class NSString;

@interface CSwitchPushMailPrtl : PrtlBase
{
    unsigned long m_uiSwithPushMailValue;
    NSString *m_nsSecPwd;
}

- (void).cxx_destruct;
- (BOOL)HandleResp:(void *)arg1;
- (void)InitReq:(void *)arg1;
- (id)init;
@property(retain, nonatomic) NSString *m_nsSecPwd; // @synthesize m_nsSecPwd;
@property(nonatomic) unsigned long m_uiSwithPushMailValue; // @synthesize m_uiSwithPushMailValue;

@end
