//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMTimer;

@interface LBSSystemCacheUpdater : NSObject
{
    unsigned long m_locationTag;
    MMTimer *m_stopTimer;
    int m_geoMode;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
@property(nonatomic) int m_geoMode; // @synthesize m_geoMode;
@property(nonatomic) unsigned long m_locationTag; // @synthesize m_locationTag;
@property(retain, nonatomic) MMTimer *m_stopTimer; // @synthesize m_stopTimer;
- (void)start;
- (void)stop;

@end

