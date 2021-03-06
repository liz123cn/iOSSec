//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface WCMallPayProductInfo : NSObject
{
    unsigned long m_uiProductId;
    NSString *m_nsAppId;
    NSString *m_nsProductName;
    NSString *m_nsProductDescrible;
    unsigned long m_uiProductMinPrice;
    unsigned long m_uiProductMaxPrice;
    unsigned long m_uiDiscount;
    BOOL m_bIsInfinite;
    unsigned long m_uiLeftCount;
    BOOL m_bIsShelved;
    BOOL m_bIsDefaultChoose;
    BOOL m_bNeedGetLatestInfo;
    BOOL m_bNeedGetAttribute;
    NSMutableArray *m_arrAttributeList;
    unsigned int m_uiProductType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *m_arrAttributeList; // @synthesize m_arrAttributeList;
@property(nonatomic) BOOL m_bIsDefaultChoose; // @synthesize m_bIsDefaultChoose;
@property(nonatomic) BOOL m_bIsInfinite; // @synthesize m_bIsInfinite;
@property(nonatomic) BOOL m_bIsShelved; // @synthesize m_bIsShelved;
@property(nonatomic) BOOL m_bNeedGetAttribute; // @synthesize m_bNeedGetAttribute;
@property(nonatomic) BOOL m_bNeedGetLatestInfo; // @synthesize m_bNeedGetLatestInfo;
@property(retain, nonatomic) NSString *m_nsAppId; // @synthesize m_nsAppId;
@property(retain, nonatomic) NSString *m_nsProductDescrible; // @synthesize m_nsProductDescrible;
@property(retain, nonatomic) NSString *m_nsProductName; // @synthesize m_nsProductName;
@property(nonatomic) unsigned long m_uiDiscount; // @synthesize m_uiDiscount;
@property(nonatomic) unsigned long m_uiLeftCount; // @synthesize m_uiLeftCount;
@property(nonatomic) unsigned long m_uiProductId; // @synthesize m_uiProductId;
@property(nonatomic) unsigned long m_uiProductMaxPrice; // @synthesize m_uiProductMaxPrice;
@property(nonatomic) unsigned long m_uiProductMinPrice; // @synthesize m_uiProductMinPrice;
@property(nonatomic) unsigned int m_uiProductType; // @synthesize m_uiProductType;

@end

