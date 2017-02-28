//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMGrowTextView, NSNotification, NSString, UIImage, UITextView, UIView;

@protocol MMGrowTextViewDelegate <NSObject>

@optional
- (void)MMGrowTextView:(UIView *)arg1 pasteImage:(UIImage *)arg2;
- (BOOL)MMGrowTextView:(UIView *)arg1 shouldPasteImage:(UIImage *)arg2;
- (void)MMGrowTextViewBeginEditing:(MMGrowTextView *)arg1;
- (void)TextDidChanged:(UITextView *)arg1 selectedRange:(struct _NSRange)arg2;
- (BOOL)TextViewDidDelete;
- (void)TextViewDidDeleteToNil;
- (void)TextViewDidEnter:(NSString *)arg1;
- (void)TextViewHeightDidChanged:(UITextView *)arg1;
- (void)UITextViewTextDidChangeNotification:(NSNotification *)arg1;
- (void)keyboardDidShow:(float)arg1;
- (void)keyboardWillHide:(BOOL)arg1;
- (void)keyboardWillShow:(float)arg1;
- (void)onAccessoryViewFrameChanged:(struct CGRect)arg1;
- (void)setKeyboardAnimationCurve:(int)arg1;
- (void)setKeyboardAnimationDuration:(float)arg1;
@end

