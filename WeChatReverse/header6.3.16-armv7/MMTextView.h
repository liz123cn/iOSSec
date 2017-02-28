//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUITextView.h"

#import "MMInputAccessoryViewDelegate.h"

@class MMInputAccessoryView, NSString, UIColor, UIResponder;

@interface MMTextView : MMUITextView <MMInputAccessoryViewDelegate>
{
    NSString *placeholder;
    BOOL _shouldDrawPlaceholder;
    id <textViewDelegate> m_delegate;
    float _fForceY;
    UIResponder *_overrideNextResponder;
    BOOL _externalKeyboardAttatched;
    MMInputAccessoryView *_accessoryView;
    UIColor *_placeHolderColor;
    float _textViewOriginHeight;
}

- (void).cxx_destruct;
- (void)_textChanged:(id)arg1;
- (void)_updateShouldDrawPlaceholder;
- (BOOL)becomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)copy:(id)arg1;
- (void)cut:(id)arg1;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg1;
@property(nonatomic) float fForceY; // @synthesize fForceY=_fForceY;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isExtenalKeyboardAttatched;
- (void)keyboardWillShow:(id)arg1;
- (void)layoutSubviews;
@property(nonatomic) __weak id <textViewDelegate> m_delegate; // @synthesize m_delegate;
- (id)nextResponder;
- (void)onAccessoryViewFrameChanged:(struct CGRect)arg1;
@property(nonatomic) __weak UIResponder *overrideNextResponder; // @synthesize overrideNextResponder=_overrideNextResponder;
- (void)paste:(id)arg1;
@property(retain, nonatomic) UIColor *placeHolderColor; // @synthesize placeHolderColor=_placeHolderColor;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder;
- (BOOL)resignFirstResponder;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setText:(id)arg1;
@property(nonatomic) float textViewOriginHeight; // @synthesize textViewOriginHeight=_textViewOriginHeight;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
