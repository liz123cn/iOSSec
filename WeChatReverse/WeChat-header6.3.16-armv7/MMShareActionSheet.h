//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, UIView;

@interface MMShareActionSheet : NSObject
{
    NSString *m_title;
    NSString *m_cancelButtonTitle;
    NSMutableArray *m_sections;
    UIView *m_transparentView;
    UIView *m_contentView;
    int m_lastOri;
    BOOL m_dismissAfterSelected;
    id <MMShareActionSheetDelegate> m_delegate;
}

+ (int)getIconActionSheetWidth;
- (void).cxx_destruct;
- (void)OnCancel:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (void)didRotate:(id)arg1;
- (void)dismissAnimate:(BOOL)arg1;
- (void)handleTap:(id)arg1;
- (id)initWithSectionItems:(id)arg1 cancelButtonTitle:(id)arg2 delegate:(id)arg3;
- (id)initWithSectionItems:(id)arg1 cancelButtonTitle:(id)arg2 delegate:(id)arg3 headerView:(id)arg4;
- (id)initWithSectionItems:(id)arg1 cancelButtonTitle:(id)arg2 delegate:(id)arg3 title:(id)arg4;
@property(nonatomic) __weak id <MMShareActionSheetDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) BOOL m_dismissAfterSelected; // @synthesize m_dismissAfterSelected;
- (void)onMMShareActionSheetSection:(id)arg1 didSelectItem:(id)arg2 atPosition:(int)arg3;
- (void)reloadInnerView;
- (void)removeFromView;
- (void)show;

@end

