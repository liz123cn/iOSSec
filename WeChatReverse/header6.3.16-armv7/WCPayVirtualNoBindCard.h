//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface WCPayVirtualNoBindCard : NSObject
{
    unsigned long m_uiCardID;
    NSString *m_nsBankType;
    NSString *m_nsBankName;
    unsigned long m_uiCardStatus;
    NSString *m_nsLogoUrl;
    NSString *m_nsBigLogoUrl;
    NSString *m_nsBackgroundLogoUrl;
    unsigned long m_uiCardType;
    NSArray *m_aryEducationList;
    NSString *m_branderUserName;
    NSString *m_branderNickName;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) NSArray *m_aryEducationList; // @synthesize m_aryEducationList;
@property(retain, nonatomic) NSString *m_branderNickName; // @synthesize m_branderNickName;
@property(retain, nonatomic) NSString *m_branderUserName; // @synthesize m_branderUserName;
@property(retain, nonatomic) NSString *m_nsBackgroundLogoUrl; // @synthesize m_nsBackgroundLogoUrl;
@property(retain, nonatomic) NSString *m_nsBankName; // @synthesize m_nsBankName;
@property(retain, nonatomic) NSString *m_nsBankType; // @synthesize m_nsBankType;
@property(retain, nonatomic) NSString *m_nsBigLogoUrl; // @synthesize m_nsBigLogoUrl;
@property(retain, nonatomic) NSString *m_nsLogoUrl; // @synthesize m_nsLogoUrl;
@property(nonatomic) unsigned long m_uiCardID; // @synthesize m_uiCardID;
@property(nonatomic) unsigned long m_uiCardStatus; // @synthesize m_uiCardStatus;
@property(nonatomic) unsigned long m_uiCardType; // @synthesize m_uiCardType;

@end

