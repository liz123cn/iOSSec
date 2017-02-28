//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface MMDBPerformanceSQLRecord : NSObject <PBCoding>
{
    unsigned int tid;
    NSString *sql;
    unsigned int lastTime;
    unsigned int timeStamp;
}

+ (void)initialize;
- (void).cxx_destruct;
- (unsigned int)calculateSize;
@property(readonly, copy) NSString *description;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int lastTime; // @synthesize lastTime;
@property(retain, nonatomic) NSString *sql; // @synthesize sql;
@property(nonatomic) unsigned int tid; // @synthesize tid;
@property(nonatomic) unsigned int timeStamp; // @synthesize timeStamp;
- (id)sqlContentFromSqlRecord;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

