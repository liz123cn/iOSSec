//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSData, NSString;

@interface MMPatternLockBufferData : NSObject <PBCoding>
{
    unsigned long uin;
    unsigned long version;
    NSData *svrPatternHash;
    unsigned long lockStatus;
    NSData *sign;
}

+ (void)initialize;
- (void).cxx_destruct;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned long lockStatus; // @synthesize lockStatus;
@property(retain, nonatomic) NSData *sign; // @synthesize sign;
@property(retain, nonatomic) NSData *svrPatternHash; // @synthesize svrPatternHash;
@property(nonatomic) unsigned long uin; // @synthesize uin;
@property(nonatomic) unsigned long version; // @synthesize version;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

