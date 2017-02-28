//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "JSEventExt.h"
#import "MMWebImageViewDelegate.h"
#import "MMWebViewDelegate.h"
#import "ScanTVDelegate.h"
#import "SendAppMsgHandleDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "tableViewDelegate.h"

@class MMAnimationTipView, MMTableView, MMWebImageView, MMWebViewController, NSMutableArray, NSString, ScanTVHelper, SendAppMsgHandler, ShakeTvItem, UIActivityIndicatorView, UIButton, UILabel, UIView;

@interface ShakeTvViewController : MMUIViewController <tableViewDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, SendAppMsgHandleDelegate, MMWebViewDelegate, MMWebImageViewDelegate, ScanTVDelegate, JSEventExt>
{
    BOOL _canShareToFriend;
    BOOL _canShareToWC;
    BOOL _canAddToFav;
    BOOL _canEditTag;
    BOOL _canDelete;
    id _userdata;
    BOOL _isVideoPlaying;
    ScanTVHelper *m_tvHelper;
    MMTableView *_tableView;
    int m_uiShakeTvViewControllerShowStyle;
    BOOL _isModal;
    ShakeTvItem *_tvItem;
    UIView *_infoView;
    UIButton *_playBtn;
    UIButton *_actionBtn;
    MMWebImageView *_videoThumbImgView;
    MMWebViewController *_videoWebView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIActivityIndicatorView *_activityIndicatorView;
    SendAppMsgHandler *_sendAppMsgHandler;
    MMAnimationTipView *_tipView;
    NSMutableArray *seperatorLines;
    UIView *footerLine;
}

- (void).cxx_destruct;
- (void)OnSendAppMsgOK;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
@property(nonatomic) BOOL canAddToFav; // @synthesize canAddToFav=_canAddToFav;
@property(nonatomic) BOOL canDelete; // @synthesize canDelete=_canDelete;
@property(nonatomic) BOOL canEditTag; // @synthesize canEditTag=_canEditTag;
@property(nonatomic) BOOL canShareToFriend; // @synthesize canShareToFriend=_canShareToFriend;
@property(nonatomic) BOOL canShareToWC; // @synthesize canShareToWC=_canShareToWC;
- (void)dealloc;
- (id)getCommentId;
- (id)getMessageWrap:(id)arg1;
- (id)getThumbImageData;
- (id)getUpLoadTask:(id)arg1;
- (void)initFooterView;
- (void)initHeaderView:(int)arg1;
- (void)initNotificationObservers;
- (void)initTableView;
- (void)initView;
- (id)initWithExtContent:(id)arg1 Scence:(unsigned long)arg2;
- (id)initWithShakeTvItem:(id)arg1 andModal:(BOOL)arg2 Style:(int)arg3;
- (void)jsSetPageState:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onAction:(id)arg1;
- (void)onDeleteTV;
- (void)onEditTVTag;
- (void)onGetTVItem:(id)arg1 TVItem:(id)arg2;
- (void)onGetTVItemFail:(id)arg1;
- (void)onLoadImageOK:(id)arg1;
- (void)onPlayerEnterFullscreen;
- (void)onPlayerExitFullscreen;
- (void)onReturn;
- (void)openActionUrl;
- (void)openPlayUrl;
- (void)setSeperatorHidden:(id)arg1 IndexPath:(id)arg2 Hidden:(BOOL)arg3;
@property(retain, nonatomic) id userdata; // @synthesize userdata=_userdata;
- (void)startLoading;
- (void)stopLoading;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didUnhighlightRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
