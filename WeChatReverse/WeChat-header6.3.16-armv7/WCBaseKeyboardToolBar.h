//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "MMTableViewInfoDelegate.h"
#import "UIGestureRecognizerDelegate.h"

@class NSMutableArray, NSString, UIBarButtonItem, UIScrollView, UIToolbar;

@interface WCBaseKeyboardToolBar : NSObject <UIGestureRecognizerDelegate, MMTableViewInfoDelegate>
{
    UIBarButtonItem *m_PreviousButtonItem;
    UIBarButtonItem *m_NextButtonItem;
    UIBarButtonItem *m_SpaceButtonItem;
    UIBarButtonItem *m_FinishButtonItem;
    UIToolbar *m_toolBar;
    UIScrollView *m_scrollView;
    struct CGRect m_keyboardRect;
    NSMutableArray *m_arrItem;
    int m_uiCurrentItemIndex;
    BOOL m_bTouchHide;
    BOOL m_bNoAutoPostion;
    BOOL m_bScrollChangedResignFirstResponder;
    SEL m_scrollChangedAction;
    id m_scrollChangedTarget;
}

- (void).cxx_destruct;
- (void)OnNextItem;
- (void)OnPreviousItem;
- (void)UpdateBarButtonItem;
- (void)addItem:(id)arg1;
- (void)changeKeyBoardSize:(id)arg1;
- (void)dealloc;
- (void)done;
- (BOOL)findCurrentActiveItem;
- (id)getView;
- (id)init;
- (void)initBtnItem;
- (void)initNotification;
- (void)initToolBar;
- (void)keyboardDidChangeFrame:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (void)keyboardWillChangeFrame:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)positionWhenBecameFirstResponder:(id)arg1 withAnimated:(BOOL)arg2;
- (void)removeAllItem;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)setCurrentActiveItem:(id)arg1;
- (void)setNavigateBtnHidden:(BOOL)arg1;
- (void)setNoAutoPostion:(BOOL)arg1;
- (void)setScrollChangedResignFirstResponder:(BOOL)arg1 Action:(SEL)arg2 Target:(id)arg3;
- (void)setScrollView:(id)arg1;
- (void)setScrollViewSize:(struct CGSize)arg1;
- (void)setTouchHide:(BOOL)arg1;
- (void)sizeWhenBecameFirstResponder;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

