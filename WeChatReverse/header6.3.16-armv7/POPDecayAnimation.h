//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "POPPropertyAnimation.h"

@interface POPDecayAnimation : POPPropertyAnimation
{
}

+ (id)animation;
+ (id)animationWithPropertyNamed:(id)arg1;
- (void)_appendDescription:(id)arg1 debug:(BOOL)arg2;
- (void)_ensureComputedProperties;
- (void)_initState;
- (void)_invalidateComputedProperties;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) float deceleration;
@property(readonly, nonatomic) double duration;
- (id)init;
@property(readonly, copy, nonatomic) id originalVelocity;
- (id)reversedVelocity;
- (void)setFromValue:(id)arg1;
- (void)setToValue:(id)arg1;
@property(copy, nonatomic) id velocity; // @dynamic velocity;
- (id)toValue;

@end

