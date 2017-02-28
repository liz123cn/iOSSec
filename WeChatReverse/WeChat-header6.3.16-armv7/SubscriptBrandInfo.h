//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "PBCoding.h"

@class NSString;

@interface SubscriptBrandInfo : NSObject <PBCoding, NSCoding>
{
    unsigned long m_brandListCount;
    unsigned long m_brandListVersion;
}

+ (void)initialize;
- (void)encodeWithCoder:(id)arg1;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned long m_brandListCount; // @synthesize m_brandListCount;
@property(nonatomic) unsigned long m_brandListVersion; // @synthesize m_brandListVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
