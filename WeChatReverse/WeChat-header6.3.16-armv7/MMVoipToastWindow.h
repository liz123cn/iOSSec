//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIWindow.h"

@class MMStringToastView;

@interface MMVoipToastWindow : MMUIWindow
{
    MMStringToastView *m_stringView;
    struct CGRect m_fixRect;
}

- (void).cxx_destruct;
- (void)addScrollingString:(id)arg1 withDisplayTime:(float)arg2;
- (void)changeOriginY:(float)arg1;
- (void)clearCurrentString;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) struct CGRect m_fixRect; // @synthesize m_fixRect;
@property(retain, nonatomic) MMStringToastView *m_stringView; // @synthesize m_stringView;
- (void)rotateToOrientation:(int)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)statusBarDidRotate;

@end
