//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCCardAcceptCardInfo : MMObject
{
    unsigned long _succCount;
    unsigned long _retCode;
    NSString *_retMsg;
    NSString *_retJson;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) unsigned long retCode; // @synthesize retCode=_retCode;
@property(retain, nonatomic) NSString *retJson; // @synthesize retJson=_retJson;
@property(retain, nonatomic) NSString *retMsg; // @synthesize retMsg=_retMsg;
@property(nonatomic) unsigned long succCount; // @synthesize succCount=_succCount;

@end

