//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface DeviceFollowItem : MMObject <PBCoding>
{
    NSString *nsUserName;
    unsigned long uiStep;
    unsigned long uiIndex;
}

+ (void)initialize;
- (void).cxx_destruct;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(copy, nonatomic) NSString *nsUserName; // @synthesize nsUserName;
@property(nonatomic) unsigned long uiIndex; // @synthesize uiIndex;
@property(nonatomic) unsigned long uiStep; // @synthesize uiStep;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

