//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface DeviceRankItem : MMObject <PBCoding>
{
    NSString *_nsRankId;
    NSString *_nsRankTitle;
    unsigned long _uiRankNum;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *nsRankId; // @synthesize nsRankId=_nsRankId;
@property(retain, nonatomic) NSString *nsRankTitle; // @synthesize nsRankTitle=_nsRankTitle;
@property(nonatomic) unsigned long uiRankNum; // @synthesize uiRankNum=_uiRankNum;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

