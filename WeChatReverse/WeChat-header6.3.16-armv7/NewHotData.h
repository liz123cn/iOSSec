//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSArray, NSString;

@interface NewHotData : MMObject <PBCoding>
{
    NSString *moduleTitle;
    NSArray *gameList;
    NSArray *adList;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *adList; // @synthesize adList;
@property(retain, nonatomic) NSArray *gameList; // @synthesize gameList;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *moduleTitle; // @synthesize moduleTitle;
- (void)parse:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

