//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class DeviceRankInfo;

@interface BraceletRankInfoView : MMUIView
{
    DeviceRankInfo *m_rankInfo;
    BOOL m_isBotton;
    BOOL m_isFromFocus;
    id <BraceletRankInfoViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)addSeperateLine;
- (void)initView;
- (id)initWithDeviceRankInfo:(id)arg1 IsBottom:(BOOL)arg2 IsFromFocus:(BOOL)arg3;
@property(nonatomic) __weak id <BraceletRankInfoViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)pressedEvents;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
