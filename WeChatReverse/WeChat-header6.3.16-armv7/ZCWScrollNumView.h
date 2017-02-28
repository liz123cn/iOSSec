//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSMutableArray, UIColor, UIFont;

@interface ZCWScrollNumView : UIView
{
    NSMutableArray *_numberViews;
    unsigned int numberSize;
    unsigned int numberValue;
    UIView *backgroundView;
    UIView *digitBackgroundView;
    UIFont *digitFont;
    float splitSpaceWidth;
    float topAndBottomPadding;
    UIColor *_digitColor;
    unsigned int _randomLength;
    int _dotPos;
    UIView *_dotView;
    id <IZCWScrollNumViewDelegate> _delegate;
}

+ (unsigned int)digitFromNum:(unsigned int)arg1 withIndex:(unsigned int)arg2;
+ (id)dotImageWithColor:(id)arg1 width:(float)arg2 height:(float)arg3;
- (void).cxx_destruct;
- (void)animationDidStop;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView;
@property(nonatomic) __weak id <IZCWScrollNumViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didConfigFinish;
@property(retain, nonatomic) UIView *digitBackgroundView; // @synthesize digitBackgroundView;
@property(retain, nonatomic) UIColor *digitColor; // @synthesize digitColor=_digitColor;
@property(retain, nonatomic) UIFont *digitFont; // @synthesize digitFont;
- (unsigned int)digitIndex:(unsigned int)arg1;
@property(nonatomic) int dotPos; // @synthesize dotPos=_dotPos;
@property(retain, nonatomic) UIView *dotView; // @synthesize dotView=_dotView;
- (float)getBaseLine;
- (id)getDefaultDotView;
- (void)initScrollNumView;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) unsigned int numberSize; // @synthesize numberSize;
@property(readonly, nonatomic) unsigned int numberValue; // @synthesize numberValue;
@property(readonly, nonatomic) NSArray *numberViews; // @synthesize numberViews=_numberViews;
@property(nonatomic) unsigned int randomLength; // @synthesize randomLength=_randomLength;
- (void)setNumber:(unsigned int)arg1 withAnimationType:(int)arg2 animationTime:(double)arg3 stopTimeStep:(double)arg4;
@property(nonatomic) float splitSpaceWidth; // @synthesize splitSpaceWidth;
@property(nonatomic) float topAndBottomPadding; // @synthesize topAndBottomPadding;

@end
