//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCPayOfflinePayFreezeMessageStruct : NSObject <NSCoding>
{
    BOOL m_bFreezeOfflinePay;
    unsigned long m_uiFreezeOfflinePayType;
    NSString *m_nsFreezeOfflinePayMessage;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) BOOL m_bFreezeOfflinePay; // @synthesize m_bFreezeOfflinePay;
@property(retain, nonatomic) NSString *m_nsFreezeOfflinePayMessage; // @synthesize m_nsFreezeOfflinePayMessage;
@property(nonatomic) unsigned long m_uiFreezeOfflinePayType; // @synthesize m_uiFreezeOfflinePayType;

@end
