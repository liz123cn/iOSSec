//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class NSIndexPath, NSMutableArray, UIColor, UIGestureRecognizer, UIImageView, UIView;

@interface MMMultiMenuTableViewCell : MMTableViewCell
{
    UIView *_menuContentView;
    UIView *_actualContentView;
    UIGestureRecognizer *_panGestureRecognizer;
    float _initialTouchPositionX;
    BOOL _shouldDisplayContextMenuView;
    BOOL _contextMenuHidden;
    BOOL _shouldDisplayRightSwipeTips;
    UIImageView *_copyedBackgroundView;
    BOOL m_bIsNeedUpdateMenu;
    BOOL m_bUseDynamicSize;
    BOOL bNotAddDeleteBtn;
    BOOL _contextMenuEnabled;
    NSIndexPath *_indexPath;
    NSMutableArray *_arrMenuItems;
    UIColor *_menuBackgroundColor;
}

- (void).cxx_destruct;
- (id)FindTableView:(id)arg1;
- (id)accessibilityElementAtIndex:(int)arg1;
- (int)accessibilityElementCount;
- (id)animation;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
@property(retain, nonatomic) NSMutableArray *arrMenuItems; // @synthesize arrMenuItems=_arrMenuItems;
- (void)checkAndAddDeleteItem;
- (id)contentView;
@property(nonatomic) BOOL contextMenuEnabled; // @synthesize contextMenuEnabled=_contextMenuEnabled;
- (void)forceHideMenuOptionsAnimated:(BOOL)arg1;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (float)getCurrentWidth;
- (void)handlePan:(id)arg1;
- (void)hideMenuOptionsAnimated:(BOOL)arg1;
- (int)indexOfAccessibilityElement:(id)arg1;
@property(retain, nonatomic) NSIndexPath *indexPath; // @synthesize indexPath=_indexPath;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (BOOL)isMenuHidden;
- (BOOL)isPointInMenu:(struct CGPoint)arg1;
- (void)layoutSubviews;
@property(retain, nonatomic) UIColor *menuBackgroundColor; // @synthesize menuBackgroundColor=_menuBackgroundColor;
- (void)onButtonClicked:(id)arg1;
- (void)onClearBackgroundView;
- (void)prepareForReuse;
- (void)resetActionContentView;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setMenuItemsWithNoDeleteBtn:(id)arg1;
- (void)setMenuOptionsViewHidden:(BOOL)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (void)showRightSwipeTips;
- (void)updateMenuView;

@end
