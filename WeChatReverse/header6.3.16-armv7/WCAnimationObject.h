//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCAnimationObject : NSObject
{
    unsigned int _m_options;
    CDUnknownBlockType _m_animations;
    CDUnknownBlockType _m_completion;
    double _m_duration;
    double _m_delay;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType m_animations; // @synthesize m_animations=_m_animations;
@property(copy, nonatomic) CDUnknownBlockType m_completion; // @synthesize m_completion=_m_completion;
@property(nonatomic) double m_delay; // @synthesize m_delay=_m_delay;
@property(nonatomic) double m_duration; // @synthesize m_duration=_m_duration;
@property(nonatomic) unsigned int m_options; // @synthesize m_options=_m_options;

@end

