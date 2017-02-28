//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "AppDetailDelegate.h"
#import "BadRoomLogicControllerDelegate.h"
#import "BannerToastExt.h"
#import "ChatBackgroundExt.h"
#import "EnterpriseBrandContactSelectViewControllerDelegate.h"
#import "FirstUnReadTipViewDelegate.h"
#import "IMsgExt.h"
#import "IMsgRevokeExt.h"
#import "IVOIPExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "IdleTimerUtilExt.h"
#import "MMInputToolViewDelegate.h"
#import "MMLandscapeInputToolViewDelegate.h"
#import "MMMultiSelectToolViewDelegate.h"
#import "MMReadMailViewDelegate.h"
#import "MMScrollActionSheetDelegate.h"
#import "MessageObserverDelegate.h"
#import "MsgDelegate.h"
#import "MsgImgFullScreenViewControllerDelegate.h"
#import "MsgImgFullScreenWindowDelegate.h"
#import "MsgSearchHelperDelegate.h"
#import "MultiSelectContactsViewControllerDelegate.h"
#import "ShareMessageConfirmLogicHelperDelegate.h"
#import "TipsViewDelegate.h"
#import "TrackRoomTipsViewDelegate.h"
#import "TypingControllerDelgate.h"
#import "UIAlertViewDelegate.h"
#import "UIDocumentInteractionControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCNetworkMediaPlayerDelegate.h"
#import "WXGestureDelegate.h"
#import "contactInfoDelegate.h"
#import "messageNodeViewDelegate.h"
#import "tableViewDelegate.h"

@class BadRoomLogicController, CMessageNodeData, CMessageWrap, FirstUnReadTipView, MMInputToolView, MMLandscapeInputToolView, MMLoadingView, MMMultiSelectToolView, MMScrollActionSheet, MMTableView, MMTimer, MMUIWindow, MsgImgFullScreenWindow, MsgSearchHelper, NSMutableArray, NSMutableDictionary, NSString, ShareMessageConfirmLogicHelper, TipsView, TrackRoomTipsView, UIActivityIndicatorView, UIImageView, UIView, WXGesture;

@interface BaseMsgContentViewController : MMSearchBarDisplayController <MsgSearchHelperDelegate, BannerToastExt, IdleTimerUtilExt, BadRoomLogicControllerDelegate, MsgImgFullScreenViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, UIAlertViewDelegate, UINavigationControllerDelegate, UIDocumentInteractionControllerDelegate, tableViewDelegate, TypingControllerDelgate, messageNodeViewDelegate, contactInfoDelegate, MsgDelegate, MMInputToolViewDelegate, ChatBackgroundExt, ShareMessageConfirmLogicHelperDelegate, MMReadMailViewDelegate, IVOIPExt, AppDetailDelegate, TipsViewDelegate, TrackRoomTipsViewDelegate, IMsgExt, IMsgRevokeExt, MMLandscapeInputToolViewDelegate, IVOIPUILogicMgrExt, WXGestureDelegate, MMMultiSelectToolViewDelegate, MultiSelectContactsViewControllerDelegate, MMScrollActionSheetDelegate, MessageObserverDelegate, FirstUnReadTipViewDelegate, WCNetworkMediaPlayerDelegate, MsgImgFullScreenWindowDelegate, EnterpriseBrandContactSelectViewControllerDelegate>
{
    NSMutableArray *m_arrMessageNodeData;
    unsigned long m_uLastTime;
    unsigned long m_uLastMoreMsgTime;
    BOOL m_bKeyboardShow;
    BOOL m_bToolViewHidden;
    unsigned int m_moreMsgIndex;
    BOOL m_bReadtToLoadMoreMsg;
    id <BaseMsgContentDelgate> m_delegate;
    id <BaseMsgContentInBackgroundThreadDelgate> m_backgroundThreadDelegate;
    Class m_delegateClass;
    MMTimer *m_LockerTimer;
    MMTimer *m_updateTimeLabelTimer;
    MMTableView *m_tableView;
    UIActivityIndicatorView *m_activityView;
    UIView *m_headerView;
    MMInputToolView *_inputToolView;
    MMLandscapeInputToolView *landscapeInputToolView;
    UIView *m_backgroundView;
    NSMutableArray *m_arrDeleteRows;
    UIView *m_deleteContainView;
    BOOL m_bViewDidAppear;
    TrackRoomTipsView *m_trackTipsView;
    struct vector<Class, std::__1::allocator<Class>> m_messageNodeClass;
    BOOL m_bViewUnloaded;
    struct CGPoint m_pTableViewOffset;
    int m_keyboardHeight;
    NSString *m_text;
    int m_inputMode;
    int m_positionMode;
    int m_contentMode;
    float m_fKeyboardAnimationDuration;
    MsgSearchHelper *m_oMsgSearchHelper;
    int m_iInitTableViewContentOffset;
    BOOL m_bNeedAdjustTableViewContentOffset;
    unsigned long m_uiSearchResultNodeViewHeight;
    int m_uiInterfaceOrientation;
    MMLoadingView *m_loadingView;
    ShareMessageConfirmLogicHelper *_shareMessageConfirmLogicHelper;
    WXGesture *_gesture;
    MMMultiSelectToolView *_multiSelectView;
    NSMutableArray *m_arrSelectMsgLocalID;
    UIView *m_msgReceivingTipsView;
    unsigned long m_uiSelectSearchMsgID;
    TipsView *m_chatAddFriend;
    TipsView *m_recommandFriend;
    TipsView *m_securityBanner;
    BOOL m_bChatAddFriendShow;
    BOOL m_bSecurityBannerShow;
    BOOL m_bShouldShowKeyboardAnimation;
    BOOL m_bNeedToUpdateTitle;
    BOOL m_bIsRevokeAdding;
    int m_msgCounerDurOneSync;
    BOOL m_bHightlightedSearchedMsgNode;
    NSMutableDictionary *m_dicMesIdForCellIndex;
    struct CGPoint m_decelerateTarget;
    BOOL m_bViewForcePortrait;
    CMessageWrap *m_firstUnReadMsg;
    FirstUnReadTipView *m_jumpFirstUnReadBtn;
    unsigned int m_unreadCount;
    MMScrollActionSheet *m_scrollActionSheet;
    MMUIWindow *m_fullScreenWindow;
    CMessageNodeData *m_fullScreenNodeData;
    BOOL m_isMsgReceiveTipsJacking;
    unsigned int m_openTrackScene;
    struct timeval m_menuHideTime;
    BOOL m_shouldScrollToBottomAfterRotate;
    BOOL m_resignInputToolViewFirstResponder;
    BOOL m_textFloatPreviewHiding;
    BOOL m_scrollingTableToBottom;
    struct _NSRange m_scrollingInvisibleRange;
    BOOL m_scrollingToFirstUnRead;
    CMessageWrap *m_lastMsgInNewArray;
    BOOL m_needLoadMoreWhenScrollToFistUnRead;
    BOOL m_needHideFirstUnReadBtn;
    BOOL m_isInGestureTransition;
    BOOL m_bMovingToMainFrameTab;
    float m_bannerHeight;
    BOOL m_isPeekPreview;
    MsgImgFullScreenWindow *m_imgFullScreenWnd;
    unsigned long m_uiEnterRoomTime;
    unsigned long m_uiEnterRoomUnreadCount;
    BOOL m_bCloseForViewDetail;
    UIImageView *m_showNewView;
    BOOL _m_bIsInMainFrame;
    NSMutableArray *m_shareContacts;
    int m_searchScene;
    BadRoomLogicController *_m_badRoomLogicController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)AsyncSendMessage:(id)arg1;
- (void)BeginPlaying:(id)arg1 FromTouch:(BOOL)arg2;
- (void)CancelRecording;
- (void)EndPlaying:(id)arg1;
- (id)GetContact;
- (id)GetCurrentViewController;
- (id)GetMessageNodeDataArray;
- (id)GetMessagesWrapArray;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(char *)arg1;
- (void)JumpToViewStreamVideo:(id)arg1;
- (void)MenuControllerWillHide:(id)arg1;
- (void)MenuControllerWillShow:(id)arg1;
- (void)MessageReturn:(unsigned long)arg1 MessageInfo:(id)arg2 Event:(unsigned long)arg3;
- (void)MoreMsgBtnUpdate:(unsigned long)arg1 unReadCount:(unsigned long)arg2;
- (void)OnAppDataPreview:(id)arg1 MsgWrap:(id)arg2;
- (void)OnEndPlaying:(id)arg1;
- (void)OnFinished;
- (void)OnMsgDownloadThumbFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgDownloadThumbOK:(id)arg1 MsgWrap:(id)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2 SysMsg:(id)arg3;
- (void)OnMultiDeleteMessage:(id)arg1;
- (void)OnMultiEmailMessage:(id)arg1;
- (void)OnMultiFavAddMessage;
- (void)OnMultiForwardMessage;
- (void)OnMultiMsgMoreOperation:(id)arg1;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned long)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)OnSendMessageCancel:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(int)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)PlayShortVideo:(id)arg1;
- (void)PlayVideo:(id)arg1;
- (void)PreviewAppNode:(id)arg1 MsgWrap:(id)arg2 Pop:(BOOL)arg3;
- (void)PreviewImage:(id)arg1;
- (id)QueryMsgText:(id)arg1 FromID:(unsigned long)arg2 FromCreateTime:(unsigned long)arg3 Limit:(unsigned long)arg4 LeftCount:(unsigned int *)arg5;
- (void)ReloadView;
- (void)Reset;
- (void)ScrollToBottomAnimated:(BOOL)arg1;
- (void)ScrollToBottomAnimatedAndLoadMoreNode;
- (void)SendEmojiArtMessageToolView:(id)arg1;
- (void)SendEmoticonMesssageToolView:(id)arg1;
- (void)SendTextMessageToolView:(id)arg1;
- (void)SetMsgPlayed:(id)arg1;
- (void)SetVoiceEnabled:(BOOL)arg1;
- (BOOL)ShouldShowKeyboardAnimation;
- (void)ShowEarBackTips;
- (void)ShowEarTips;
- (void)ShowMultiSelectMoreOperation:(id)arg1;
- (void)ShowVolumeTips;
- (void)StartDownloadShortVideo:(id)arg1;
- (void)StartDownloadVideo:(id)arg1;
- (void)StartPlayingNodeView:(unsigned long)arg1;
- (void)StartRecording;
- (void)StartUploadVideo:(id)arg1;
- (void)StopDownloadVideo:(id)arg1;
- (void)StopPlayingNodeView:(unsigned long)arg1;
- (void)StopRecording;
- (void)StopUploadVideo:(id)arg1;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)ToolViewPositionDidChanged:(BOOL)arg1 animated:(BOOL)arg2;
- (BOOL)ToolViewStatusCanSupportAutorotateToInterfaceOrientation:(int)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)addMessageNode:(id)arg1 layout:(BOOL)arg2 addMoreMsg:(BOOL)arg3;
- (void)addReceiveMessageNode:(id)arg1;
- (id)addSplitNode:(id)arg1 addMoreMsg:(BOOL)arg2;
- (void)addTimeNode:(id)arg1 layout:(BOOL)arg2 addMoreMsg:(BOOL)arg3;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)adjustDeleteViewRect;
- (void)adjustTableViewOffset;
- (void)adjustTableViewRect;
- (void)adjustViewAndNavBarRect;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)animateHideFirstUnReadButton;
- (void)animateShowFirstUnReadButton:(float)arg1;
- (void)beginLabelTimer;
- (void)beginLockerTimer;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canShowFavEntry;
- (BOOL)canShowLocation;
- (BOOL)canShowSight;
- (id)captureViewParams;
- (void)changeRect:(BOOL)arg1 animated:(BOOL)arg2 init:(BOOL)arg3;
- (id)chatContactForMessageWrap:(id)arg1;
- (void)checkShowRecommandFriendTip:(BOOL)arg1;
- (void)checkShowSecurityBannerTip:(BOOL)arg1;
- (void)checkTips:(BOOL)arg1;
- (void)clearCaptureViewParams;
- (void)clickLinkToDelChatroomMember:(id)arg1 fromScene:(BOOL)arg2;
- (void)clickLinkToExpose;
- (void)clickReceiveBrandMsg;
- (void)clickShieldBrandMsg;
- (void)contactInfoReturn;
- (id)contactShareMsgFromUser:(id)arg1 toUser:(id)arg2 sharedContact:(id)arg3;
- (void)dealloc;
- (void)deleteAllMessage;
- (void)deleteMail:(id)arg1;
- (void)deleteNode:(id)arg1;
- (void)deleteNode:(id)arg1 withDB:(BOOL)arg2 animated:(BOOL)arg3;
- (void)didExitRoom;
- (void)didFinishedLoading:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)didSelectSearchResultForMessageWrap:(id)arg1;
- (void)didSelectSearchResultForMessageWrap:(id)arg1 indexPath:(id)arg2;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (void)documentInteractionControllerWillBeginPreview:(id)arg1;
- (void)endSearchAndDisplay;
- (void)enterChat:(id)arg1;
- (id)findImageNodeView:(unsigned long)arg1;
- (id)findNodeDataByLocalId:(unsigned long)arg1;
- (id)findNodeDataByView:(id)arg1;
- (unsigned int)findNodeIndexByLocalId:(unsigned long)arg1;
- (id)findSearchedMsgIndexPath;
- (void)fixInputToolViewKeyboard;
@property(retain, nonatomic) WXGesture *gesture; // @synthesize gesture=_gesture;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)gestureWillBeginTransition:(id)arg1;
- (void)gestureWillEndTransition:(id)arg1 isCanceld:(BOOL)arg2;
- (float)getAddFriendTipHeight;
- (id)getAttachmentViewServiceAppList;
- (unsigned int)getCurContentSizeHeight;
- (id)getCurrentChatName;
- (float)getCustomizedAreaWidth;
- (id)getFirstContentMessageNodeFromArray:(id)arg1;
- (unsigned int)getFirstUnReadMessageIndex;
- (unsigned int)getFirstUnReadSplitNodeIndex;
- (id)getHomePageBarButton;
- (struct CGRect)getImageNodeRectInScreen:(unsigned long)arg1;
- (float)getInvisibleHeight;
- (id)getLastContentMessageNodeFromArray:(id)arg1;
- (unsigned int)getLastNodePreContentSizeHeight;
- (id)getLastSentMsg;
- (id)getLeftBarButton;
- (float)getMaxContentHeightForNodeView:(id)arg1;
- (id)getMessageChatContactByMessageWrap:(id)arg1;
- (int)getMessageNodePosition:(id)arg1;
- (unsigned int)getMsgContentSizeHeight:(unsigned long)arg1;
- (unsigned int)getMsgNodeCount;
- (id)getNavigationButton:(id)arg1;
- (id)getNodeDataByIndex:(unsigned int)arg1;
- (struct CGRect)getNodeRectInScreen:(unsigned long)arg1;
- (id)getParentTableView;
- (id)getParentView;
- (id)getRightBarButton;
- (unsigned int)getRowHeight:(id)arg1;
- (float)getSearchBarHeight;
- (float)getSecurityBannerTipHeight;
- (id)getServiceAppList;
- (float)getTableViewVisibleHeightWithOrientation:(int)arg1;
- (float)getTipsHeight;
- (id)getTitleLableViewWithMaxWidth:(float)arg1 title:(id)arg2;
- (id)getViewController;
- (float)getVisibleHeight;
- (struct CGRect)getVisibleRectInScreen:(id)arg1;
- (id)getVoipBarButton;
- (void)handleAfterDeleteAllMessage;
- (void)handleDeleteAllMessage;
- (BOOL)hasCardPkgEntry;
- (BOOL)hasRedEnvelopesEntry;
- (BOOL)hasServiceEntry;
- (void)hasTapReaderNodeView;
- (BOOL)hasTransferMoneyEntry;
- (void)headerImageClicked:(id)arg1;
- (void)hideToolViewAnimated:(BOOL)arg1;
- (void)hideTrackRoomTips;
- (void)highLightSelectSearchCell;
- (id)init;
- (void)initAllowMultiTalk;
- (void)initAllowNameCardFollowRedEnvelope;
- (void)initAllowRecommendApp;
- (void)initAllowVoiceInput;
- (void)initAllowVoip;
- (void)initAllowWxTalk;
- (void)initAllowWxTalkFollowSight;
- (void)initControllers;
- (void)initData;
- (void)initGestureRecognizer;
- (void)initHistroyMessageNodeData;
- (void)initMessageNodeClass;
- (void)initMsgSearchHelper:(int)arg1;
- (void)initMultiSelectToolView;
- (void)initNavigationView;
- (void)initSearchBar;
- (void)initTableHeaderView;
- (void)initTableView;
- (void)initToolEmoticonView;
- (void)initToolView;
- (void)initView;
- (BOOL)isAllowVoiceInput;
- (BOOL)isAllowVoip;
- (BOOL)isAllowWxTalk;
- (BOOL)isContactSizeOverScreen;
- (BOOL)isInputViewPositionDown;
- (BOOL)isLastMsg:(id)arg1;
- (BOOL)isMsgCanRevoke:(id)arg1;
- (BOOL)isMsgLastSend:(id)arg1;
- (BOOL)isPeekPreview;
- (BOOL)isRectVisibleInTableView:(struct CGRect)arg1;
- (BOOL)isScrollOK;
- (BOOL)isScrollToBottom;
- (BOOL)isShowHeadImage:(id)arg1;
- (BOOL)isViewControllerAnimated;
- (void)jumpToDetail:(id)arg1;
- (void)jumpToShakeView:(unsigned long)arg1;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned long)arg3;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned long)arg3 fromBanner:(BOOL)arg4;
- (void)keyboardWillHide;
@property(retain, nonatomic) MMLandscapeInputToolView *landscapeInputToolView; // @synthesize landscapeInputToolView;
- (void)loadingAfterForwardMessageOK;
- (void)locateTableViewWithLocalID:(unsigned long)arg1;
- (void)locateToMsg:(id)arg1;
- (void)lockerTimesup;
- (void)longPressOnHeadImage:(id)arg1;
- (void)longPressOnHeadImageForDebug:(id)arg1;
@property(retain, nonatomic) MMTimer *m_LockerTimer; // @synthesize m_LockerTimer;
@property(nonatomic) BOOL m_bIsInMainFrame; // @synthesize m_bIsInMainFrame=_m_bIsInMainFrame;
@property(nonatomic) __weak id <BaseMsgContentInBackgroundThreadDelgate> m_backgroundThreadDelegate; // @synthesize m_backgroundThreadDelegate;
@property(retain, nonatomic) BadRoomLogicController *m_badRoomLogicController; // @synthesize m_badRoomLogicController=_m_badRoomLogicController;
@property(nonatomic) __weak id <BaseMsgContentDelgate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) UIView *m_msgReceivingTipsView; // @synthesize m_msgReceivingTipsView;
@property(nonatomic) int m_searchScene; // @synthesize m_searchScene;
@property(retain, nonatomic) NSMutableArray *m_shareContacts; // @synthesize m_shareContacts;
@property(retain, nonatomic) MMTimer *m_updateTimeLabelTimer; // @synthesize m_updateTimeLabelTimer;
- (void)makeCell:(id)arg1 row:(unsigned int)arg2;
- (void)msgSearchBarCancel;
- (void)msgSearchBarDoSearch;
- (void)msgSearchBarSearchByName;
- (void)msgSearchBarSearchByTime;
- (void)my_viewDidUnload;
- (void)my_viewWillUnload;
- (void)newMessageFromContactInfo:(id)arg1;
- (id)newMessageNodeViewForMessageWrap:(id)arg1 contact:(id)arg2 chatContact:(id)arg3;
- (int)numberOfSections;
- (void)onBackButtonClicked:(id)arg1;
- (void)onChatBackgroundChanged:(id)arg1;
- (void)onClickFavVideoMenu;
- (void)onClosePlayer;
- (void)onClosePlayerForViewDetail:(id)arg1;
- (void)onCommentOnMessageWrap:(id)arg1;
- (void)onCurrentPageMsgReMoved:(id)arg1;
- (void)onDeleteAllMsg;
- (void)onDeleteMessage:(id)arg1;
- (void)onEditMessage:(id)arg1;
- (void)onEnterpriseSelectBrandContact:(id)arg1 viewController:(id)arg2;
- (void)onFinishMultiSelect:(id)arg1;
- (void)onForwardMessageOK;
- (void)onFullScreenWindowWillHide;
- (void)onHideKeyboard;
- (void)onHideMultiSelectView;
- (void)onIdleTimerUtilVoipQuit;
- (void)onImgMsgLocate:(id)arg1 vc:(id)arg2;
- (void)onJumpToViewDetail:(id)arg1;
- (void)onLoadDownMoreMessage:(id)arg1;
- (void)onLoadMessageFail;
- (void)onLoadMoreMessage;
- (void)onMassSendSendAgain:(id)arg1;
- (void)onMoreOperateWithMsgId:(id)arg1;
- (void)onMsgImgPreviewDataRequired:(id)arg1;
- (void)onMsgImgWindowDidHideToMsg:(id)arg1;
- (void)onMsgImgWindowDidShowFromMsg:(id)arg1;
- (void)onMsgImgWindowWillHideToMsg:(id)arg1;
- (void)onMsgImgWindowWillShowFromMsg:(id)arg1;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiTalkButtonClick;
- (void)onNodeViewChanged;
- (void)onOpenMyCardPkgViewController;
- (void)onOpenTrackRoom:(unsigned int)arg1;
- (void)onPan:(id)arg1;
- (void)onPerformAction:(id)arg1;
- (void)onPerformExposeAction:(id)arg1;
- (void)onPerformIconAction:(id)arg1;
- (void)onPlayAttachVideo:(id)arg1 vc:(id)arg2;
- (void)onPositionModeChangeTo:(int)arg1 Animated:(BOOL)arg2;
- (void)onReceiveSecurityBannerMsg:(id)arg1 withWording:(id)arg2;
- (void)onReturn:(id)arg1;
- (void)onSYncEnd;
- (void)onScrollToBottom;
- (void)onScrollToFirstUnReadMsg;
- (void)onSelectLocation;
- (void)onShareCard;
- (void)onShareVideoToFriend:(id)arg1;
- (void)onShareVideoToTimeline:(BOOL)arg1;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 sentImmediately:(BOOL)arg3;
- (void)onSightPictureTaken:(id)arg1;
- (void)onSightTipsOK;
- (void)onSwipeGestureRecognizer:(id)arg1;
- (void)onTextDeleteAll;
- (void)onTipViewClick:(id)arg1;
- (void)onTipsViewClick:(id)arg1;
- (void)onTipsViewClose:(id)arg1;
- (void)onToolViewBarBottomChanged:(float)arg1;
- (void)onToolViewBarTopChanged:(float)arg1;
- (void)onToolViewDidMoveToWindow;
- (void)onTopBarFrameChanged;
- (void)onTouchDown;
- (void)onTrackRoomTipsViewClick;
- (void)onTrySHowFirstUnReadButton;
- (void)onUpdateTimeLabelTimer:(id)arg1;
- (void)onVideoVoipInvite;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onViewDisappear;
- (void)onVoipInvite;
- (void)openCameraController;
- (void)openChatInfo:(id)arg1;
- (void)openHomePage:(id)arg1;
- (void)openMediaBrowser;
- (void)openMyFavoritesListController;
- (void)openServiceApp:(id)arg1;
- (void)openServiceAppListController;
- (void)openVideoCall;
- (void)openVoiceCall;
- (void)pasteImage:(id)arg1;
- (void)preCreateMessageContentNode:(id)arg1;
- (void)preCreateMessageSplitNode:(id)arg1;
- (void)preCreateMessageTimeNode:(id)arg1;
- (int)preferredInterfaceOrientationForPresentation;
- (id)previewActionItems;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)redEnvelopesLogic;
- (void)reloadBackgroundView;
- (void)reloadMessages;
- (void)reloadMessagesInternal;
- (void)reloadNodeWithMessageWrap:(id)arg1;
- (void)reloadTableHeaderView:(BOOL)arg1;
- (void)reloadTableViewNode;
- (void)removeAllObjectsFromMessageNodeDatas;
- (void)removeLastTimeNode;
- (void)removeObjectsFromMessageNodeDatas:(id)arg1;
- (void)removeVoiceTip;
- (void)removeVoipAndPhoneTip;
- (void)resetMsgSearchHelper;
- (void)resetToolView;
- (void)revokeMsgByNodeView:(id)arg1;
- (void)rotate:(int)arg1 duration:(double)arg2;
- (void)scrollActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)scrollRectToVisiblePosition:(struct CGRect)arg1;
- (void)scrollTableToBottomAnimated:(BOOL)arg1 init:(BOOL)arg2;
- (void)scrollToFirstUnReadMessage:(id)arg1 animated:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)sendCaptruedImage:(id)arg1;
- (void)sendMessageWithMsgWrap:(id)arg1;
- (void)sendMultiMsgToBrandContact:(id)arg1;
- (void)sendShortVideoMsg:(id)arg1 thumbImg:(id)arg2;
- (void)setAddFriendTipShow:(BOOL)arg1 contact:(id)arg2;
- (void)setIsPeekPreview:(BOOL)arg1;
- (void)setSecurityTipShow:(BOOL)arg1;
- (void)setState:(int)arg1 animated:(BOOL)arg2 needKeyboard:(BOOL)arg3;
- (void)setTableViewContentOffset:(id)arg1;
@property(retain, nonatomic) MMInputToolView *toolView; // @synthesize toolView=_inputToolView;
- (void)shareMsgToOpenSDKByNodeView:(id)arg1;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (BOOL)shouldEnableKeyboardInteractivePop;
- (BOOL)shouldHideOrginInputToolView;
- (BOOL)shouldHideToolViewOnKeyboardHide;
- (BOOL)shouldInitWXEmoticonView;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldOtherPreventedAutorotateToInterfaceOrientation;
- (BOOL)shouldShowOpenTrackRoom;
- (void)showAddFriendTip:(BOOL)arg1;
- (void)showAlertTooMany;
- (void)showEarModeTips;
- (void)showExposeViewController;
- (void)showLoadingView;
- (void)showLoadingViewWithText:(id)arg1;
- (void)showMultiTalkMessageInfoWithSessionItem:(id)arg1 msgLocalID:(unsigned int)arg2;
- (void)showMultiTalkSessionInfo:(id)arg1;
- (void)showReceiveMsgTips;
- (BOOL)showTrackExitAlert;
- (void)showTrackRoomTips;
- (void)startReceiveMsgWithTips:(id)arg1;
- (void)startVoiceAnimatingAtNodeId:(unsigned long)arg1;
- (void)statEnterMsgChat;
- (void)stopAllShortVideo;
- (BOOL)stopAtLastVideoFrameWhenPlayEnd;
- (void)stopLabelTimer;
- (void)stopLoading;
- (void)stopLoadingAndShowOk;
- (void)stopLoadingAndShowOkWithText:(id)arg1;
- (void)stopLockerTimesup;
- (void)stopReceiveMsg;
- (void)switchEarMode;
- (void)systemActived:(id)arg1;
- (void)systemResigned:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(int)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tagForActivePage;
- (void)tagLink:(id)arg1 messageWrap:(id)arg2;
- (void)tapAppNodeView:(id)arg1;
- (void)tapFriendCard_NodeView:(id)arg1 WithContact:(id)arg2 WithMsg:(id)arg3;
- (void)tapImage_NodeView:(id)arg1;
- (void)tapLocation_NodeView:(id)arg1;
- (void)tapPushContact_NodeView:(id)arg1;
- (void)tapPushMail_NodeView:(id)arg1 withPushMailWrap:(id)arg2;
- (void)tapReader_NodeView:(id)arg1;
- (void)tapStatus_NodeView:(id)arg1;
- (void)tapText_NodeView:(id)arg1;
- (void)tapVideoStatus_NodeView:(id)arg1;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded_TableView:(id)arg1 withEvent:(id)arg2;
- (void)transferMoneyLogic;
- (void)tryAddUnReadSplitNode;
- (void)tryMoveToMainFrame;
- (void)tryScrollToBottomAnimated:(BOOL)arg1;
- (void)trySetInputToolviewFirstResponder;
- (void)tryShowFirstUnReadButtonAnimated:(BOOL)arg1;
- (void)typingStatusReceived;
- (void)typingStatusSent;
- (void)unHighLightSelectSearchCell;
- (void)updateBanner;
- (void)updateChatRoomData:(id)arg1;
- (void)updateDeleteCount;
- (void)updateFirstUnReadButtonOnShowBanner:(float)arg1;
- (void)updateMessageNodeImageLoadingPercent:(unsigned long)arg1 percent:(unsigned long)arg2;
- (void)updateMessageNodeStatus:(id)arg1;
- (void)updateMessageNodeViewForOrientation:(id)arg1;
- (void)updateOpBtnState:(BOOL)arg1;
- (void)updateRightBar;
- (void)updateTableContentOffsetAnimated:(BOOL)arg1 OffsetDelta:(float)arg2;
- (void)updateTableLayoutAnimateDuration:(double)arg1 Orientation:(int)arg2;
- (void)updateTableViewRowWithLocalID:(unsigned long)arg1;
- (void)updateTimeNodeViewForOrientation:(id)arg1;
- (void)updateTitleView:(id)arg1;
- (void)updateToolViewAnimationCurve:(int)arg1;
- (void)updateToolViewAnimationDuration:(float)arg1;
- (void)updateToolViewOrigin;
- (void)updateTypingTitle:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidPop:(BOOL)arg1;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewDidRotateToPortrait:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillDismiss:(BOOL)arg1;
- (void)viewWillPop:(BOOL)arg1;
- (void)viewWillPresent:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)viewWillRotateToPortrait:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willAppear;
- (void)willDismissAndShow;
- (void)willDisshow;
- (void)willEnterRoom;
- (void)willShow;
- (void)willShowMenuController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
