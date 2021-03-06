//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIFont, UILabel;

@interface ZCWScrollDigitView : UIView
{
    float _oneDigitHeight;
    unsigned int _digit;
    UIView *backgroundView;
    UILabel *label;
    unsigned int digit;
    UIFont *digitFont;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int _digit; // @synthesize _digit;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView;
- (void)commitChange;
- (void)didConfigFinish;
@property(readonly, nonatomic) unsigned int digit; // @synthesize digit;
@property(retain, nonatomic) UIFont *digitFont; // @synthesize digitFont;
@property(retain, nonatomic) UILabel *label; // @synthesize label;
- (void)setDigit:(unsigned int)arg1 from:(unsigned int)arg2;
- (void)setDigitAndCommit:(unsigned int)arg1;
- (void)setDigitFast:(unsigned int)arg1;
- (void)setDigitFromLast:(unsigned int)arg1;
- (void)setRandomScrollDigit:(unsigned int)arg1 length:(unsigned int)arg2;

@end

