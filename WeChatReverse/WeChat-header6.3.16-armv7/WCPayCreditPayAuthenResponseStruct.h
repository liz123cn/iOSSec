//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayCreditPayAuthenResponseStruct : NSObject
{
    NSString *m_nsSessionKey;
    BOOL m_bZXBankUser;
    NSString *m_nsPhoneNumMask;
    BOOL m_bNeedBindCard;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) BOOL m_bNeedBindCard; // @synthesize m_bNeedBindCard;
@property(nonatomic) BOOL m_bZXBankUser; // @synthesize m_bZXBankUser;
@property(retain, nonatomic) NSString *m_nsPhoneNumMask; // @synthesize m_nsPhoneNumMask;
@property(retain, nonatomic) NSString *m_nsSessionKey; // @synthesize m_nsSessionKey;

@end

