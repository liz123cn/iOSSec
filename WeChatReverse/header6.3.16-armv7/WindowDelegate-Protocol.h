//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSSet, UIEvent;

@protocol WindowDelegate <NSObject>

@optional
- (void)touchesBegan_Window:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesCancelled_Window:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesEnded_Window:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
- (void)touchesMoved_Window:(NSSet *)arg1 withEvent:(UIEvent *)arg2;
@end
