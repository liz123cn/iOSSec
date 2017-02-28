//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMGrowTextView, NSString;

@protocol InputControllerDelegate <NSObject>

@optional
- (void)MMGrowTextViewBeginEditing:(MMGrowTextView *)arg1;
- (void)MMGrowTextViewHeightDidChanged:(MMGrowTextView *)arg1;
- (void)didCommitEmptyText;
- (void)didCommitText:(NSString *)arg1;
- (float)getVisibleHeight;
- (void)keyboardDidHide;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void)onInputModeChangeTo:(int)arg1 Animated:(BOOL)arg2;
- (void)textViewTextDidChange;
@end

