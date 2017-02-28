//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "BaseEmoticonViewDelegate.h"
#import "EmoticonBoardViewDelegate.h"
#import "MMGrowTextViewDelegate.h"

@class EmoticonBoardView, MMGrowTextView, NSString, UIScrollView, UIView;

@interface WCInputController : MMObject <MMGrowTextViewDelegate, EmoticonBoardViewDelegate, BaseEmoticonViewDelegate>
{
    float _fKeyboardAnimationDuration;
    float _fKeyboardHeight;
    int _iKeyboardAnimationCurve;
    int _eInputMode;
    UIView *_inputView;
    UIScrollView *_scrollView;
    MMGrowTextView *_textView;
    EmoticonBoardView *_emoticonBoardView;
    float _fInputViewY;
    float _fScrollViewY;
    float _fScrollViewOriginY;
    id <InputControllerDelegate> _delegate;
    BOOL _bAnimationCutHeight;
    BOOL _translucentKeyboard;
}

- (void).cxx_destruct;
- (void)AnimationDidStop:(id)arg1;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)OnEmoticonStateDidChanged:(BOOL)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (BOOL)TextViewDidDelete;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (void)UpdateTabbarSendButtonState;
@property(nonatomic) BOOL bAnimationCutHeight; // @synthesize bAnimationCutHeight=_bAnimationCutHeight;
- (void)becomeTextView;
- (void)dealloc;
@property(nonatomic) __weak id <InputControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteEmoticon;
- (void)didSelectorEmoticon:(id)arg1;
- (void)doHideKeybaord;
@property(nonatomic) int eInputMode; // @synthesize eInputMode=_eInputMode;
@property(nonatomic) __weak EmoticonBoardView *emoticonBoardView; // @synthesize emoticonBoardView=_emoticonBoardView;
@property(nonatomic) float fInputViewY; // @synthesize fInputViewY=_fInputViewY;
@property(readonly, nonatomic) float fKeyboardHeight; // @synthesize fKeyboardHeight=_fKeyboardHeight;
@property(nonatomic) float fScrollViewOriginY; // @synthesize fScrollViewOriginY=_fScrollViewOriginY;
@property(nonatomic) float fScrollViewY; // @synthesize fScrollViewY=_fScrollViewY;
- (id)init;
- (void)inputModeChangeButtonClicked;
@property(nonatomic) __weak UIView *inputView; // @synthesize inputView=_inputView;
- (void)keyboardWillHide:(BOOL)arg1;
- (void)keyboardWillShow:(float)arg1;
- (void)onSendButtonClicked;
- (void)onSystemHideKeyboard;
- (void)resignResponder;
- (void)resignTextView;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
- (void)setKeyboardAnimationCurve:(int)arg1;
- (void)setKeyboardAnimationDuration:(float)arg1;
@property(nonatomic) __weak MMGrowTextView *textView; // @synthesize textView=_textView;
@property(nonatomic) BOOL translucentKeyboard; // @synthesize translucentKeyboard=_translucentKeyboard;
- (void)textViewCommit;
- (void)updateScrollViewY:(float)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
