//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString, WCProductPriceRange;

@interface WCProductBaseInfo : NSObject
{
    NSString *name;
    NSArray *categoryList;
    WCProductPriceRange *price;
    NSString *feeType;
    NSArray *imageList;
    NSString *digest;
    NSString *detail;
    NSArray *labelList;
    NSArray *propertyList;
    NSArray *skuTable;
    unsigned long leftBuyQuantity;
    unsigned long totalStock;
    NSArray *tagList;
    NSArray *actionGroupList;
    unsigned long createTime;
    unsigned long modifyTime;
    unsigned long version;
    unsigned long stockID;
    NSString *sourceUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *actionGroupList; // @synthesize actionGroupList;
@property(retain, nonatomic) NSArray *categoryList; // @synthesize categoryList;
@property(nonatomic) unsigned long createTime; // @synthesize createTime;
- (void)dealloc;
@property(retain, nonatomic) NSString *detail; // @synthesize detail;
@property(retain, nonatomic) NSString *digest; // @synthesize digest;
@property(retain, nonatomic) NSString *feeType; // @synthesize feeType;
@property(retain, nonatomic) NSArray *imageList; // @synthesize imageList;
@property(retain, nonatomic) NSArray *labelList; // @synthesize labelList;
@property(nonatomic) unsigned long leftBuyQuantity; // @synthesize leftBuyQuantity;
@property(nonatomic) unsigned long modifyTime; // @synthesize modifyTime;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(retain, nonatomic) WCProductPriceRange *price; // @synthesize price;
@property(retain, nonatomic) NSArray *propertyList; // @synthesize propertyList;
@property(retain, nonatomic) NSArray *skuTable; // @synthesize skuTable;
@property(retain, nonatomic) NSString *sourceUrl; // @synthesize sourceUrl;
@property(nonatomic) unsigned long stockID; // @synthesize stockID;
@property(retain, nonatomic) NSArray *tagList; // @synthesize tagList;
@property(nonatomic) unsigned long totalStock; // @synthesize totalStock;
@property(nonatomic) unsigned long version; // @synthesize version;

@end

