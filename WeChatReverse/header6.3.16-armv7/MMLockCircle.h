//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@interface MMLockCircle : UIView
{
    BOOL _selected;
    BOOL _skiped;
    BOOL _errored;
}

- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) BOOL errored; // @synthesize errored=_errored;
- (void)highlightCell;
- (void)hightlightErrorCell;
- (id)initWithRadius:(float)arg1;
- (void)resetCell;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
@property(nonatomic) BOOL skiped; // @synthesize skiped=_skiped;

@end

