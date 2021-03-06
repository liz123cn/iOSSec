//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMTimer, NSString, UIFont, UILabel;

@interface TextFlowView : UIView
{
    BOOL _needFlow;
    MMTimer *_timer;
    int _textAlignment;
    unsigned long _spaceLength;
    UIFont *_font;
    NSString *_text;
    UILabel *_label;
    int _startIndex;
    float _XOffset;
    struct CGSize _textSize;
}

- (void).cxx_destruct;
- (void)cancelRun;
- (struct CGSize)computeTextSize:(id)arg1 Font:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 Font:(id)arg2 Text:(id)arg3;
- (struct CGRect)moveNewPoint:(struct CGPoint)arg1 rect:(struct CGRect)arg2;
- (void)setFont:(id)arg1;
@property(nonatomic) unsigned long spaceLength; // @synthesize spaceLength=_spaceLength;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;
- (void)setTextColor:(id)arg1;
- (void)startRun;
- (void)timerAction;

@end

