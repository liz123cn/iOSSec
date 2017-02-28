//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, WCAddressBaseAddress;

@interface WCProductOrderInfo : NSObject
{
    NSString *productID;
    NSString *skuID;
    NSString *skuInfo;
    unsigned long count;
    NSString *productName;
    NSString *feeType;
    float unitPrice;
    float totalPrice;
    float expressPrice;
    NSString *imageUrl;
    NSString *stockID;
    unsigned long expressID;
    unsigned long flag;
    NSArray *expressList;
    NSString *sourceUrl;
    WCAddressBaseAddress *addressInfo;
    NSArray *skuItemList;
    NSString *thumbUrl;
    unsigned long productSubType;
    unsigned long productType;
    NSString *sellerID;
    NSString *receiptStr;
    NSArray *discountInfoList;
    float discountPrice;
    NSString *userName;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAddressBaseAddress *addressInfo; // @synthesize addressInfo;
@property(nonatomic) unsigned long count; // @synthesize count;
- (void)dealloc;
@property(retain, nonatomic) NSArray *discountInfoList; // @synthesize discountInfoList;
@property(nonatomic) float discountPrice; // @synthesize discountPrice;
@property(nonatomic) unsigned long expressID; // @synthesize expressID;
@property(retain, nonatomic) NSArray *expressList; // @synthesize expressList;
@property(nonatomic) float expressPrice; // @synthesize expressPrice;
@property(retain, nonatomic) NSString *feeType; // @synthesize feeType;
@property(nonatomic) unsigned long flag; // @synthesize flag;
@property(retain, nonatomic) NSString *imageUrl; // @synthesize imageUrl;
@property(retain, nonatomic) NSString *productID; // @synthesize productID;
@property(retain, nonatomic) NSString *productName; // @synthesize productName;
@property(nonatomic) unsigned long productSubType; // @synthesize productSubType;
@property(nonatomic) unsigned long productType; // @synthesize productType;
@property(retain, nonatomic) NSString *receiptStr; // @synthesize receiptStr;
@property(retain, nonatomic) NSString *sellerID; // @synthesize sellerID;
@property(retain, nonatomic) NSString *skuID; // @synthesize skuID;
@property(retain, nonatomic) NSString *skuInfo; // @synthesize skuInfo;
@property(retain, nonatomic) NSArray *skuItemList; // @synthesize skuItemList;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl;
@property(retain, nonatomic) NSString *stockID; // @synthesize stockID;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl;
@property(nonatomic) float totalPrice; // @synthesize totalPrice;
@property(nonatomic) float unitPrice; // @synthesize unitPrice;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;

@end
