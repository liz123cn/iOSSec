//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIBarButtonItem.h"

@class MMBarButton;

@interface MMBarButtonItem : UIBarButtonItem
{
    struct CGRect m_standardPortriatFrame;
    MMBarButton *m_btn;
    struct UIEdgeInsets m_standardPortraitEdgeInsets;
    int m_iContentWidth;
    int m_iContentHeight;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMBarButton *m_btn; // @synthesize m_btn;
@property(nonatomic) int m_iContentHeight; // @synthesize m_iContentHeight;
@property(nonatomic) int m_iContentWidth; // @synthesize m_iContentWidth;
@property(nonatomic) struct UIEdgeInsets m_standardPortraitEdgeInsets; // @synthesize m_standardPortraitEdgeInsets;
@property(nonatomic) struct CGRect m_standardPortriatFrame; // @synthesize m_standardPortriatFrame;
- (void)setEnabled:(BOOL)arg1;
- (void)setFitInterfaceOrientation:(int)arg1;

@end

