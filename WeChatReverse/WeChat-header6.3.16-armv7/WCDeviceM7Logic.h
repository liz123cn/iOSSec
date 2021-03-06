//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class CMStepCounter, NSMutableArray, WCDeviceStepObject;

@interface WCDeviceM7Logic : MMObject
{
    id <WCDeviceM7LogicDelegate> _delegate;
    BOOL m_bStepGetting;
    BOOL m_bHadGetHKStep;
    BOOL m_bHadGetM7Step;
    WCDeviceStepObject *m_oStepObject;
    BOOL m_bHadObserverQuery;
    BOOL m_bDataChanged;
    NSMutableArray *m_aryWhiteList;
    CMStepCounter *_m_cmStepCounter;
}

- (void).cxx_destruct;
- (void)checkCallDelegate;
@property(nonatomic) __weak id <WCDeviceM7LogicDelegate> delegate; // @synthesize delegate=_delegate;
- (int)getCurrM7StepCount;
- (id)getHKSourcePropertyLD;
- (id)getHKSourcePropertyPT;
- (BOOL)getM7OrHealthKitStepCount:(BOOL)arg1;
- (void)getStepCount:(id)arg1;
- (int)getStepFromHealthKit;
- (id)hkSource2ClientSource:(id)arg1;
- (id)init;
- (BOOL)isInWhiteList:(id)arg1;
- (BOOL)loadHKSourceWhiteCache;
@property(retain, nonatomic) NSMutableArray *m_aryWhiteList; // @synthesize m_aryWhiteList;
@property(nonatomic) BOOL m_bDataChanged; // @synthesize m_bDataChanged;
@property(retain, nonatomic) CMStepCounter *m_cmStepCounter; // @synthesize m_cmStepCounter=_m_cmStepCounter;
- (id)pathForHKSourceWhiteCache;
- (BOOL)saveHKSourceWhiteCache;
- (void)tryDoObserverStepQuery;
- (int)tryGetStepFromHealthKit;
- (void)updateSampleSourceList:(id)arg1;

@end

