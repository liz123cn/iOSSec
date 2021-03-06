//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface GameCenterUserRankInfo : MMObject <PBCoding>
{
    BOOL upedByMe;
    NSString *userName;
    unsigned int rank;
    unsigned int score32;
    unsigned int level;
    NSString *label;
    unsigned int upedCount;
    NSString *timeScoreDesc;
    unsigned long long score;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *label; // @synthesize label;
@property(nonatomic) unsigned int level; // @synthesize level;
- (void)parseFromResp:(id)arg1;
@property(nonatomic) unsigned int rank; // @synthesize rank;
@property(nonatomic) unsigned long long score; // @synthesize score;
@property(nonatomic) unsigned int score32; // @synthesize score32;
@property(retain, nonatomic) NSString *timeScoreDesc; // @synthesize timeScoreDesc;
@property(nonatomic) BOOL upedByMe; // @synthesize upedByMe;
@property(nonatomic) unsigned int upedCount; // @synthesize upedCount;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

