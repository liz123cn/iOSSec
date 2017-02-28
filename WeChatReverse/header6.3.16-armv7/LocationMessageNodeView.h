//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

#import "ILocationMgrExt.h"
#import "ILocationThumbMgrExt.h"
#import "UIAlertViewDelegate.h"

@class MMImageView, MMLoadingView, NSString, UIActivityIndicatorView, UILabel;

@interface LocationMessageNodeView : BaseMessageNodeView <ILocationThumbMgrExt, ILocationMgrExt, UIAlertViewDelegate>
{
    CDStruct_2c43369c m_coordinate;
    unsigned long m_geotag;
    MMLoadingView *m_oImageLoadingView;
    MMImageView *m_oImageView;
    MMImageView *m_oContentCoverView;
    MMImageView *m_oLabelBkgImageView;
    UILabel *m_oLocationLabel;
    UIActivityIndicatorView *m_oLoadingView;
}

+ (BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)OnLocationThumbMgrError:(int)arg1 Task:(id)arg2;
- (void)OnUpdateLocationThumb:(id)arg1 Task:(id)arg2;
- (void)createNewRequest;
- (void)dealloc;
- (id)getBorderImage;
- (id)getCoverImage;
- (id)getMoreMainInfomationAccessibilityDescription;
- (struct CGPoint)getSendOKViewOrgin;
- (void)layoutSubviewsInternal;
- (void)onClearResource;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long)arg2;
- (void)onDisappear;
- (void)onFavoriteAdd:(id)arg1;
- (void)onForward:(id)arg1;
- (void)onLongTouch;
- (void)onMenuItemWillHide;
- (void)onMoreOperate:(id)arg1;
- (void)onTouchCancel;
- (void)onTouchDown;
- (void)onTouchDownRepeat;
- (void)onTouchUpInside;
- (void)showOpearation;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;
- (void)updateBkgImage:(BOOL)arg1;
- (void)updateStatus:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

