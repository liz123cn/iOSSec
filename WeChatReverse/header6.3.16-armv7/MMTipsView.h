//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton;

@interface MMTipsView : UIView
{
    UIButton *m_persistentLabel;
    BOOL m_showPersistentLabel;
    UIButton *m_label;
}

+ (void)fadeOutButton:(id)arg1 WithDelegate:(id)arg2 WithFadeTime:(float)arg3;
+ (id)genLabelButton;
+ (void)updateButton:(id)arg1 WithWidth:(float)arg2 WithHeight:(float)arg3;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)hideLabel;
- (void)hidePersistentString;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) UIButton *m_label; // @synthesize m_label;
@property(retain, nonatomic) UIButton *m_persistentLabel; // @synthesize m_persistentLabel;
@property(nonatomic) BOOL m_showPersistentLabel; // @synthesize m_showPersistentLabel;
- (void)setLabelBackGroundImage:(id)arg1;
- (void)showLabelWithString:(id)arg1 WithFadeTime:(float)arg2;
- (void)showPersistentString:(id)arg1;

@end

