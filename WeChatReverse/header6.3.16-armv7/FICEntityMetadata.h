//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface FICEntityMetadata : NSObject <PBCoding>
{
    NSString *entityUUID;
    unsigned int eliminationFactor;
    unsigned int LRUFactor;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(nonatomic) unsigned int LRUFactor; // @synthesize LRUFactor;
@property(nonatomic) unsigned int eliminationFactor; // @synthesize eliminationFactor;
@property(retain, nonatomic) NSString *entityUUID; // @synthesize entityUUID;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (BOOL)isEqual:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
