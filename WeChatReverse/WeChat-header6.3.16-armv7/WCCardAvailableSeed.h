//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCCardAvailableSeed : MMObject
{
    NSString *_appID;
    unsigned long _shopID;
    unsigned long _canMultiSelect;
    NSString *_cardType;
    NSString *_cardTpID;
    NSString *_signType;
    NSString *_cardSign;
    unsigned long _timeStamp;
    NSString *_nonceStr;
    unsigned long _onlyInvoice;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(nonatomic) unsigned long canMultiSelect; // @synthesize canMultiSelect=_canMultiSelect;
@property(retain, nonatomic) NSString *cardSign; // @synthesize cardSign=_cardSign;
@property(retain, nonatomic) NSString *cardTpID; // @synthesize cardTpID=_cardTpID;
@property(retain, nonatomic) NSString *cardType; // @synthesize cardType=_cardType;
- (void)dealloc;
@property(retain, nonatomic) NSString *nonceStr; // @synthesize nonceStr=_nonceStr;
@property(nonatomic) unsigned long onlyInvoice; // @synthesize onlyInvoice=_onlyInvoice;
@property(nonatomic) unsigned long shopID; // @synthesize shopID=_shopID;
@property(retain, nonatomic) NSString *signType; // @synthesize signType=_signType;
@property(nonatomic) unsigned long timeStamp; // @synthesize timeStamp=_timeStamp;

@end
