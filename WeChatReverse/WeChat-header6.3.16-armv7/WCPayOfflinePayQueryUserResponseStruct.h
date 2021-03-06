//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface WCPayOfflinePayQueryUserResponseStruct : NSObject <NSCoding>
{
    long long m_uiLimitFee;
    BOOL m_bNeedLoadingAndSuccessInfo;
    BOOL _offlinePayPauseFlag;
    BOOL _offlinePayForceGetToken;
    int _payAmount;
    int _payNumber;
    NSArray *_cardIcons;
    NSString *_offlinePayPauseWord;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *cardIcons; // @synthesize cardIcons=_cardIcons;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) BOOL m_bNeedLoadingAndSuccessInfo; // @synthesize m_bNeedLoadingAndSuccessInfo;
@property(nonatomic) long long m_uiLimitFee; // @synthesize m_uiLimitFee;
@property(nonatomic) BOOL offlinePayForceGetToken; // @synthesize offlinePayForceGetToken=_offlinePayForceGetToken;
@property(nonatomic) BOOL offlinePayPauseFlag; // @synthesize offlinePayPauseFlag=_offlinePayPauseFlag;
@property(copy, nonatomic) NSString *offlinePayPauseWord; // @synthesize offlinePayPauseWord=_offlinePayPauseWord;
@property(nonatomic) int payAmount; // @synthesize payAmount=_payAmount;
@property(nonatomic) int payNumber; // @synthesize payNumber=_payNumber;

@end

