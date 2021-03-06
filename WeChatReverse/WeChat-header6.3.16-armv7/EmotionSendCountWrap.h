//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface EmotionSendCountWrap : MMObject <PBCoding>
{
    BOOL hasRewarded;
    unsigned int totalSendTimes;
    unsigned int lastShowTipsTime;
    int retryTimes;
}

+ (void)initialize;
@property(readonly, copy) NSString *description;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) BOOL hasRewarded; // @synthesize hasRewarded;
- (id)init;
@property(nonatomic) unsigned int lastShowTipsTime; // @synthesize lastShowTipsTime;
@property(readonly, nonatomic) BOOL needShowTips;
@property(nonatomic) int retryTimes; // @synthesize retryTimes;
@property(nonatomic) unsigned int totalSendTimes; // @synthesize totalSendTimes;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

