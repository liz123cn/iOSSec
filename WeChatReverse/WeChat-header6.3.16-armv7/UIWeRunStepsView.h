//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class CALayer, NSArray, NSMutableArray, UIView;

@interface UIWeRunStepsView : MMUIView
{
    NSMutableArray *m_timeLblAry;
    NSMutableArray *m_stepNumLblAry;
    NSMutableArray *m_pointsAry;
    NSMutableArray *m_alignLineAry;
    CALayer *m_aliginLineLayer;
    int m_highLightedIndex;
    unsigned long m_maxStepLine;
    UIView *m_sView;
    UIView *m_hintView;
    NSArray *m_months;
    BOOL _isMySelf;
    NSArray *_stepItems;
}

- (void).cxx_destruct;
- (float)calPointYWithStepItem:(id)arg1;
- (void)initBezierLine;
- (void)initTimeLineFooter;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL isMySelf; // @synthesize isMySelf=_isMySelf;
- (void)makeAlignLines:(id)arg1;
- (void)makeClickHints:(id)arg1;
- (void)makeDashLine:(id)arg1;
- (void)makeGrientLayerWithPointArray:(id)arg1;
- (void)makeLineFromPoint:(struct CGPoint)arg1 toPoint:(struct CGPoint)arg2 isDash:(BOOL)arg3 lineKey:(id)arg4;
- (void)makeLinePath:(id)arg1 pointArray:(id)arg2;
- (void)makePointsViewWithPointArray:(id)arg1;
- (void)makeStepBtns:(id)arg1;
- (void)makeStepNumOnTop:(id)arg1;
- (void)makeStepsLines:(id)arg1;
- (void)onStepBtnClicked:(id)arg1;
@property(retain, nonatomic) NSArray *stepItems; // @synthesize stepItems=_stepItems;

@end

