//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface MMFreeSpaceCheckConfig : NSObject <PBCoding>
{
    unsigned long m_lastAlertUrgentTime;
    unsigned long m_lastAlertLowTime;
}

+ (void)initialize;
@property(readonly, copy) NSString *description;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned long m_lastAlertLowTime; // @synthesize m_lastAlertLowTime;
@property(nonatomic) unsigned long m_lastAlertUrgentTime; // @synthesize m_lastAlertUrgentTime;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
