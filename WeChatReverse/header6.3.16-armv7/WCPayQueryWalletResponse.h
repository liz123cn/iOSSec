//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayQueryWalletResponse : NSObject
{
    unsigned long _m_errCode;
    NSString *_m_errMsg;
    NSString *_m_walletUrl;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) unsigned long m_errCode; // @synthesize m_errCode=_m_errCode;
@property(retain, nonatomic) NSString *m_errMsg; // @synthesize m_errMsg=_m_errMsg;
@property(retain, nonatomic) NSString *m_walletUrl; // @synthesize m_walletUrl=_m_walletUrl;

@end
