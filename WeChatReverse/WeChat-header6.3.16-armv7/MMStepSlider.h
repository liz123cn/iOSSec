//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

@class NSArray, UIImageView, UILabel, UIView;

@interface MMStepSlider : UIControl
{
    BOOL _sliderOn;
    UIImageView *_sliderImageView;
    UIView *_trackViewNormal;
    UILabel *_standardLabel;
    unsigned long _value;
    unsigned long _stepCount;
    id <MMStepSliderDelegate> m_delegate;
    NSArray *_scaleTextArray;
    NSArray *_scaleTextSizeArray;
}

- (void).cxx_destruct;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)cancelTrackingWithEvent:(id)arg1;
- (void)commonInit;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)genScaleLabel:(id)arg1:(float)arg2;
- (id)initWithWidth:(float)arg1 StepCount:(int)arg2 TextArray:(id)arg3 TextSizeArray:(id)arg4;
@property(nonatomic) __weak id <MMStepSliderDelegate> m_delegate; // @synthesize m_delegate;
@property(readonly, nonatomic) NSArray *scaleTextArray; // @synthesize scaleTextArray=_scaleTextArray;
@property(readonly, nonatomic) NSArray *scaleTextSizeArray; // @synthesize scaleTextSizeArray=_scaleTextSizeArray;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) unsigned long value; // @synthesize value=_value;
@property(readonly, nonatomic) unsigned long stepCount; // @synthesize stepCount=_stepCount;
- (float)stepMarkerXCloseToX:(int)arg1;
- (void)touchTrackNormalView:(int)arg1;
- (float)xForValue:(unsigned long)arg1;

@end

