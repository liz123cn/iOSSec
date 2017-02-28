//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSDate, NSString;

@interface WCPayCardBinInfo : NSObject <NSCoding>
{
    NSString *m_cardBankType;
    NSString *m_cardBankName;
    NSString *m_cardType;
    NSString *m_cardTypeName;
    NSString *m_cardNumber;
    NSString *m_cardLogoUrl;
    NSString *m_bankPhone;
    NSString *m_nsForbidWord;
    NSArray *m_arrSupCredInfo;
    BOOL m_isBankUsable;
    BOOL m_isConfidentTrue;
    BOOL m_needUsrNameInfo;
    BOOL m_needUsrIDInfo;
    BOOL m_needValidDate;
    BOOL m_needCVVNumber;
    BOOL m_needUsrPhoneNumber;
    BOOL m_needPayMoneyAfferBind;
    BOOL m_canBindReturnMoney;
    BOOL m_needFirstName;
    BOOL m_needLastName;
    BOOL m_needCountry;
    BOOL m_needArea;
    BOOL m_needAddress;
    BOOL m_needPhoneNumber;
    BOOL m_needEmail;
    BOOL m_needZip;
    BOOL m_bSupportOfflinePay;
    unsigned long m_cardBankTag;
    unsigned long m_cardAuthMode;
    NSString *m_nsBrandUserName;
    NSString *m_nsBrandTips;
    NSDate *m_ndFetchArriveTime;
    NSString *m_nsAvailableSaveInfo;
    NSString *m_usrName;
    NSString *m_nsFetchArriveTimeWording;
    NSString *_m_arriveType;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSArray *m_arrSupCredInfo; // @synthesize m_arrSupCredInfo;
@property(retain, nonatomic) NSString *m_arriveType; // @synthesize m_arriveType=_m_arriveType;
@property(nonatomic) BOOL m_bSupportOfflinePay; // @synthesize m_bSupportOfflinePay;
@property(retain, nonatomic) NSString *m_bankPhone; // @synthesize m_bankPhone;
@property(nonatomic) BOOL m_canBindReturnMoney; // @synthesize m_canBindReturnMoney;
@property(nonatomic) unsigned long m_cardAuthMode; // @synthesize m_cardAuthMode;
@property(retain, nonatomic) NSString *m_cardBankName; // @synthesize m_cardBankName;
@property(nonatomic) unsigned long m_cardBankTag; // @synthesize m_cardBankTag;
@property(retain, nonatomic) NSString *m_cardBankType; // @synthesize m_cardBankType;
@property(retain, nonatomic) NSString *m_cardLogoUrl; // @synthesize m_cardLogoUrl;
@property(retain, nonatomic) NSString *m_cardNumber; // @synthesize m_cardNumber;
@property(retain, nonatomic) NSString *m_cardType; // @synthesize m_cardType;
@property(retain, nonatomic) NSString *m_cardTypeName; // @synthesize m_cardTypeName;
@property(nonatomic) BOOL m_isBankUsable; // @synthesize m_isBankUsable;
@property(nonatomic) BOOL m_isConfidentTrue; // @synthesize m_isConfidentTrue;
@property(retain, nonatomic) NSDate *m_ndFetchArriveTime; // @synthesize m_ndFetchArriveTime;
@property(nonatomic) BOOL m_needAddress; // @synthesize m_needAddress;
@property(nonatomic) BOOL m_needArea; // @synthesize m_needArea;
@property(nonatomic) BOOL m_needCVVNumber; // @synthesize m_needCVVNumber;
@property(nonatomic) BOOL m_needCountry; // @synthesize m_needCountry;
@property(nonatomic) BOOL m_needEmail; // @synthesize m_needEmail;
@property(nonatomic) BOOL m_needFirstName; // @synthesize m_needFirstName;
@property(nonatomic) BOOL m_needLastName; // @synthesize m_needLastName;
@property(nonatomic) BOOL m_needPayMoneyAfferBind; // @synthesize m_needPayMoneyAfferBind;
@property(nonatomic) BOOL m_needPhoneNumber; // @synthesize m_needPhoneNumber;
@property(nonatomic) BOOL m_needUsrIDInfo; // @synthesize m_needUsrIDInfo;
@property(nonatomic) BOOL m_needUsrNameInfo; // @synthesize m_needUsrNameInfo;
@property(nonatomic) BOOL m_needUsrPhoneNumber; // @synthesize m_needUsrPhoneNumber;
@property(nonatomic) BOOL m_needValidDate; // @synthesize m_needValidDate;
@property(nonatomic) BOOL m_needZip; // @synthesize m_needZip;
@property(retain, nonatomic) NSString *m_nsAvailableSaveInfo; // @synthesize m_nsAvailableSaveInfo;
@property(retain, nonatomic) NSString *m_nsBrandTips; // @synthesize m_nsBrandTips;
@property(retain, nonatomic) NSString *m_nsBrandUserName; // @synthesize m_nsBrandUserName;
@property(retain, nonatomic) NSString *m_nsFetchArriveTimeWording; // @synthesize m_nsFetchArriveTimeWording;
@property(retain, nonatomic) NSString *m_nsForbidWord; // @synthesize m_nsForbidWord;
@property(retain, nonatomic) NSString *m_usrName; // @synthesize m_usrName;

@end

