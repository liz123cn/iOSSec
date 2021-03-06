//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QAnnotationView.h"

@class UIImageView;

@interface QPinAnnotationView : QAnnotationView
{
    BOOL _animatesDrop;
    unsigned int _pinColor;
    UIImageView *_shadowImageView;
    struct CGRect _validRect;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL animatesDrop; // @synthesize animatesDrop=_animatesDrop;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)changeToLift:(BOOL)arg1;
- (id)dropAnimationWithFromPoint:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (id)imageForPinColor:(unsigned int)arg1;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)liftImageForPinColor:(unsigned int)arg1;
@property(nonatomic) unsigned int pinColor; // @synthesize pinColor=_pinColor;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setDragState:(unsigned int)arg1 animated:(BOOL)arg2;
@property(retain, nonatomic) UIImageView *shadowImageView; // @synthesize shadowImageView=_shadowImageView;
@property(nonatomic) struct CGRect validRect; // @synthesize validRect=_validRect;
- (id)shadowAnimationFromPoint:(struct CGPoint *)arg1 toPoint:(struct CGPoint *)arg2 duration:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (void)willMoveToSuperview:(id)arg1;

@end

