//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface GameLibrarySortOption : MMObject <PBCoding>
{
    unsigned int sortType;
    NSString *label;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *label; // @synthesize label;
@property(nonatomic) unsigned int sortType; // @synthesize sortType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

