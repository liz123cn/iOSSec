//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSString;

@interface MMDBRepairBackup : NSObject
{
    NSString *_dbPath;
    NSArray *_repairInfos;
    NSDate *_lastSucceedBackup;
}

- (void).cxx_destruct;
- (id)accquireSortedInfos;
- (BOOL)backup;
- (id)initWithDBPath:(id)arg1;
@property(readonly) NSDate *lastSucceedBackup; // @synthesize lastSucceedBackup=_lastSucceedBackup;
@property(readonly) NSArray *repairInfos; // @synthesize repairInfos=_repairInfos;

@end

