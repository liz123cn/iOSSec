//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImage;

@interface BottleButton : UIView
{
    BOOL mIsEnabled;
    BOOL mIsSelected;
    id <NSObject> targetor;
    SEL selector;
    UIImage *normalImage;
    UIImage *highlightImage;
    UIImage *highlightLabelImage;
    UIImage *selectedLabelImage;
    NSString *text;
}

- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)cancelSelected;
- (BOOL)checkTouchPoint:(struct CGPoint)arg1 IfInView:(id)arg2;
- (void)dealloc;
- (void)genBottleButton;
- (void)highlight;
@property(retain, nonatomic) UIImage *highlightImage; // @synthesize highlightImage;
@property(retain, nonatomic) UIImage *highlightLabelImage; // @synthesize highlightLabelImage;
- (void)initView;
- (BOOL)isEnabeld;
- (BOOL)isSelected;
- (void)normal;
@property(retain, nonatomic) UIImage *normalImage; // @synthesize normalImage;
- (void)selected;
@property(retain, nonatomic) UIImage *selectedLabelImage; // @synthesize selectedLabelImage;
- (void)setBadgeCount:(int)arg1;
- (void)setEnabled:(BOOL)arg1;
@property(retain, nonatomic) NSString *text; // @synthesize text;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
