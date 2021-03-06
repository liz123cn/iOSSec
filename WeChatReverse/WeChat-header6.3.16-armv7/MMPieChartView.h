//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@interface MMPieChartView : MMUIView
{
    id <MMPieChartDataSource> _dataSource;
    float _startPieAngle;
    float _animationSpeed;
    float _defaultPieRadius;
    struct CGPoint _pieCenter;
}

- (void).cxx_destruct;
- (void)animationDidStart:(id)arg1;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
@property(nonatomic) float animationSpeed; // @synthesize animationSpeed=_animationSpeed;
- (id)createMMPieLayer;
@property(nonatomic) __weak id <MMPieChartDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) float defaultPieRadius; // @synthesize defaultPieRadius=_defaultPieRadius;
- (id)initWithFrame:(struct CGRect)arg1 radius:(float)arg2;
@property(nonatomic) struct CGPoint pieCenter; // @synthesize pieCenter=_pieCenter;
- (void)reloadData;
@property(nonatomic) float startPieAngle; // @synthesize startPieAngle=_startPieAngle;

@end

