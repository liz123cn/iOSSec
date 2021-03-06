//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSString, WCPayCredInfo;

@interface WCPayBindCardInfo : NSObject <NSCoding>
{
    NSString *m_cardBankName;
    NSString *m_cardBankType;
    NSString *m_cardType;
    NSString *m_cardTypeName;
    NSString *m_creditTypeID;
    unsigned long m_cardBankTag;
    NSString *m_cardNumber;
    NSString *m_cardTail;
    NSString *m_cardLogoUrl;
    NSString *m_cardHolder;
    NSString *m_bindSerial;
    NSString *m_bindPhoneNumber;
    NSString *m_bankPhone;
    WCPayCredInfo *m_oWCPayCredInfo;
    unsigned long m_virtualSingalTranscationLimit;
    unsigned long m_virtualDayTranscationLimit;
    unsigned long m_physicalSignalTranscationLimit;
    unsigned long m_physicalDayTranscationLimit;
    BOOL m_bankFlag;
    BOOL m_expiredFlag;
    BOOL m_bNeedMoneyToResetPwd;
    BOOL m_bCanReturnMoneyAfterResetPwd;
    BOOL m_bIsSupportOfflinePay;
    BOOL m_bIsWXCredit;
    NSString *m_nsForbidWord;
    NSString *m_nsRepayUrl;
    NSDate *m_ndFetchPreArriveTime;
    NSString *m_nsFetchPreArriveTime;
    unsigned long m_uiCvvLength;
    NSString *m_nsAvailableSavedDetail;
    NSString *m_nsTips;
    BOOL _m_bISFullFetchDirect;
    NSString *m_arriveType;
    NSString *m_nsOfflinePayNotSupportWord;
    unsigned long _m_uiFetchChargeRate;
    NSString *_m_nsFetchChargeInfo;
    unsigned long _m_uiFullFetchChargeFee;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *m_arriveType; // @synthesize m_arriveType;
@property(nonatomic) BOOL m_bCanReturnMoneyAfterResetPwd; // @synthesize m_bCanReturnMoneyAfterResetPwd;
@property(nonatomic) BOOL m_bISFullFetchDirect; // @synthesize m_bISFullFetchDirect=_m_bISFullFetchDirect;
@property(nonatomic) BOOL m_bIsSupportOfflinePay; // @synthesize m_bIsSupportOfflinePay;
@property(nonatomic) BOOL m_bIsWXCredit; // @synthesize m_bIsWXCredit;
@property(nonatomic) BOOL m_bNeedMoneyToResetPwd; // @synthesize m_bNeedMoneyToResetPwd;
@property(nonatomic) BOOL m_bankFlag; // @synthesize m_bankFlag;
@property(retain, nonatomic) NSString *m_bankPhone; // @synthesize m_bankPhone;
@property(retain, nonatomic) NSString *m_bindPhoneNumber; // @synthesize m_bindPhoneNumber;
@property(retain, nonatomic) NSString *m_bindSerial; // @synthesize m_bindSerial;
@property(retain, nonatomic) NSString *m_cardBankName; // @synthesize m_cardBankName;
@property(nonatomic) unsigned long m_cardBankTag; // @synthesize m_cardBankTag;
@property(retain, nonatomic) NSString *m_cardBankType; // @synthesize m_cardBankType;
@property(retain, nonatomic) NSString *m_cardHolder; // @synthesize m_cardHolder;
@property(retain, nonatomic) NSString *m_cardLogoUrl; // @synthesize m_cardLogoUrl;
@property(retain, nonatomic) NSString *m_cardNumber; // @synthesize m_cardNumber;
@property(retain, nonatomic) NSString *m_cardTail; // @synthesize m_cardTail;
@property(retain, nonatomic) NSString *m_cardType; // @synthesize m_cardType;
@property(retain, nonatomic) NSString *m_cardTypeName; // @synthesize m_cardTypeName;
@property(retain, nonatomic) NSString *m_creditTypeID; // @synthesize m_creditTypeID;
@property(nonatomic) BOOL m_expiredFlag; // @synthesize m_expiredFlag;
@property(retain, nonatomic) NSDate *m_ndFetchPreArriveTime; // @synthesize m_ndFetchPreArriveTime;
@property(retain, nonatomic) NSString *m_nsAvailableSavedDetail; // @synthesize m_nsAvailableSavedDetail;
@property(retain, nonatomic) NSString *m_nsFetchChargeInfo; // @synthesize m_nsFetchChargeInfo=_m_nsFetchChargeInfo;
@property(retain, nonatomic) NSString *m_nsFetchPreArriveTime; // @synthesize m_nsFetchPreArriveTime;
@property(retain, nonatomic) NSString *m_nsForbidWord; // @synthesize m_nsForbidWord;
@property(retain, nonatomic) NSString *m_nsOfflinePayNotSupportWord; // @synthesize m_nsOfflinePayNotSupportWord;
@property(retain, nonatomic) NSString *m_nsRepayUrl; // @synthesize m_nsRepayUrl;
@property(retain, nonatomic) NSString *m_nsTips; // @synthesize m_nsTips;
@property(retain, nonatomic) WCPayCredInfo *m_oWCPayCredInfo; // @synthesize m_oWCPayCredInfo;
@property(nonatomic) unsigned long m_physicalDayTranscationLimit; // @synthesize m_physicalDayTranscationLimit;
@property(nonatomic) unsigned long m_physicalSignalTranscationLimit; // @synthesize m_physicalSignalTranscationLimit;
@property(nonatomic) unsigned long m_uiCvvLength; // @synthesize m_uiCvvLength;
@property(nonatomic) unsigned long m_uiFetchChargeRate; // @synthesize m_uiFetchChargeRate=_m_uiFetchChargeRate;
@property(nonatomic) unsigned long m_uiFullFetchChargeFee; // @synthesize m_uiFullFetchChargeFee=_m_uiFullFetchChargeFee;
@property(nonatomic) unsigned long m_virtualDayTranscationLimit; // @synthesize m_virtualDayTranscationLimit;
@property(nonatomic) unsigned long m_virtualSingalTranscationLimit; // @synthesize m_virtualSingalTranscationLimit;

@end

