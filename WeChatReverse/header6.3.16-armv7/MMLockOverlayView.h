//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray;

@interface MMLockOverlayView : UIView
{
    BOOL _errored;
    NSMutableArray *_pointsToDraw;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) BOOL errored; // @synthesize errored=_errored;
- (void)hightlightError;
- (id)initWithFrame:(struct CGRect)arg1;
@property(retain, nonatomic) NSMutableArray *pointsToDraw; // @synthesize pointsToDraw=_pointsToDraw;
- (void)resetView;

@end

