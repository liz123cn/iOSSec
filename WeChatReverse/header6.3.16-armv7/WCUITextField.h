//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextField.h"

@interface WCUITextField : UITextField
{
    BOOL m_bRestrictShareMenu;
    float m_fPlaceholderFontSize;
}

- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)drawPlaceholderInRect:(struct CGRect)arg1;
- (id)init;
@property(nonatomic) BOOL m_bRestrictShareMenu; // @synthesize m_bRestrictShareMenu;
@property(nonatomic) float m_fPlaceholderFontSize; // @synthesize m_fPlaceholderFontSize;

@end

