//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt.h"
#import "ITranslateSnsMgrExt.h"
#import "RichTextLayoutDelegate.h"

@class MMHeadImageView, NSString, RichTextView, UIButton, UIImageView, UILabel, UINavigationController, UrlLabel, WCUserComment;

@interface WCCommentView : MMUIView <ILinkEventExt, ITranslateSnsMgrExt, RichTextLayoutDelegate>
{
    MMHeadImageView *_headImageView;
    UIImageView *_likeImageView;
    RichTextView *_contentView;
    BOOL _isLongPressHandled;
    id <WCCommentViewDelegate> _commentDelegate;
    RichTextView *_translateView;
    UIButton *_translateStatusView;
    UIImageView *_translateLineView;
    int eTranslateStatus;
    float fTranslateViewHeight;
    UILabel *_timeLabel;
    UrlLabel *_nameLabel;
    id <ILinkEventExt> _urlLabelDelegate;
    WCUserComment *_commentUserInfo;
    float _fMaxWidth;
    UINavigationController *navigationController;
    NSString *m_dataItemTid;
}

+ (id)genShowContentUserStr:(id)arg1 nickname:(id)arg2;
+ (id)genTranslateContentStrPrefix:(id)arg1;
+ (id)genTranslateContentUserStr:(id)arg1 nickname:(id)arg2;
+ (id)makeDataWrapForWCTranslateOfComment:(id)arg1 andDataItemTid:(id)arg2;
- (void).cxx_destruct;
- (id)GetTranslateSnsKeyID;
- (BOOL)canBecomeFirstResponder;
@property(nonatomic) __weak id <WCCommentViewDelegate> commentDelegate; // @synthesize commentDelegate=_commentDelegate;
- (void)createSubviews;
- (void)dealloc;
- (void)delayedTouchesEnded:(id)arg1;
@property(nonatomic) float fMaxWidth; // @synthesize fMaxWidth=_fMaxWidth;
- (id)genContentStrPrefix:(id)arg1;
- (id)genContentUserStr:(id)arg1 nickname:(id)arg2 isHBComment:(BOOL)arg3;
- (float)getVisibleHeight;
- (float)initContentTranslateView:(id)arg1;
- (void)initContentView;
- (float)initTranslateStatusButton:(BOOL)arg1 withTitle:(id)arg2;
- (id)initWithCommentUserInfo:(id)arg1 andDataItemTid:(id)arg2;
- (BOOL)isTouchEnable;
- (void)layoutSubviews;
@property(retain, nonatomic) NSString *m_dataItemTid; // @synthesize m_dataItemTid;
- (void)makeTranslateShowAnimation;
@property(nonatomic) __weak UINavigationController *navigationController; // @synthesize navigationController;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onPhoneClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onPhoneLongPressed:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onTranslate:(id)arg1;
- (void)onTranslateSnsChanged:(id)arg1;
- (void)onTranslateSnsFailed:(id)arg1 errTip:(id)arg2;
- (void)onViewLongPressed;
- (void)resetNormal;
- (void)setHighlightedColor;
- (void)setNormalColor;
@property(nonatomic) __weak id <ILinkEventExt> urlLabelDelegate; // @synthesize urlLabelDelegate=_urlLabelDelegate;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2;
- (void)showWC;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

