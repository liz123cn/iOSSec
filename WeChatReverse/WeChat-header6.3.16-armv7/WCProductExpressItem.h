//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCProductExpressItem : NSObject
{
    unsigned long expressID;
    NSString *name;
    float price;
    NSString *expressDesc;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) NSString *expressDesc; // @synthesize expressDesc;
@property(nonatomic) unsigned long expressID; // @synthesize expressID;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) float price; // @synthesize price;

@end
