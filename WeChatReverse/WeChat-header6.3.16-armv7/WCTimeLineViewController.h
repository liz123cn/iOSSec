//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseEmoticonViewDelegate.h"
#import "EGORefreshTableHeaderDelegate.h"
#import "ILinkEventExt.h"
#import "IMMFacebookMgrExt.h"
#import "INewMsgNotifyExt.h"
#import "ITranslateSnsMgrExt.h"
#import "InputControllerDelegate.h"
#import "MMExposeViewControllerDelegate.h"
#import "MMImagePickerManagerDelegate.h"
#import "MMRefreshTableFooterDelegate.h"
#import "MMTipsViewControllerDelegate.h"
#import "NewYearActionSheetDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCAdvertiseActionFloatForABTestDelegate.h"
#import "WCBarMessageWindowDelegate.h"
#import "WCCommentDetailViewControllerFBDelegate.h"
#import "WCCommentStrangerViewControllerDelegate.h"
#import "WCCommitViewAnimationDelegate.h"
#import "WCContentItemViewExt.h"
#import "WCFacadeExt.h"
#import "WCImageFullScreeViewMgrExt.h"
#import "WCListHeaderViewDelegate.h"
#import "WCPlainTextTipFullScreenViewDelegate.h"
#import "WCSetPermissionsViewControllerDelegate.h"
#import "WCSightViewExt.h"
#import "WCTimeLineCellViewDelegate.h"
#import "WCTimeLineCommentCellViewDelegate.h"
#import "WCTimelineCellABTestTipExt.h"
#import "WXGestureDelegate.h"
#import "scrollViewDelegate.h"
#import "tableViewDelegate.h"

@class EmoticonBoardView, MMHeadImageView, MMTableView, MMTipsViewController, MMUILabel, MMURLHandler, NSArray, NSMutableArray, NSMutableDictionary, NSString, UIButton, UIImageView, UIView, WCADPageWrap, WCAdvertiseActionFloatForABTest, WCAdvertiseActionFloatView, WCBarMessageWindow, WCDataItem, WCInputController, WCListHeaderView, WCOperateFloatView, WCPlainTextTipFullScreenView, WCTimeLineFooterView, WCTimeLineHeaderView, WCUserComment, WXGesture;

@interface WCTimeLineViewController : MMUIViewController <tableViewDelegate, BaseEmoticonViewDelegate, WCCommitViewAnimationDelegate, ITranslateSnsMgrExt, INewMsgNotifyExt, MMExposeViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, WCFacadeExt, WCTimeLineCellViewDelegate, EGORefreshTableHeaderDelegate, MMRefreshTableFooterDelegate, InputControllerDelegate, scrollViewDelegate, UIGestureRecognizerDelegate, WCListHeaderViewDelegate, MMTipsViewControllerDelegate, WCCommentStrangerViewControllerDelegate, WCCommentDetailViewControllerFBDelegate, WCTimeLineCommentCellViewDelegate, ILinkEventExt, WCSetPermissionsViewControllerDelegate, IMMFacebookMgrExt, MMImagePickerManagerDelegate, WCPlainTextTipFullScreenViewDelegate, WCSightViewExt, WXGestureDelegate, WCContentItemViewExt, WCImageFullScreeViewMgrExt, WCBarMessageWindowDelegate, WCTimelineCellABTestTipExt, UIAlertViewDelegate, WCAdvertiseActionFloatForABTestDelegate, NewYearActionSheetDelegate>
{
    NSMutableDictionary *m_cellHeightCache;
    NSMutableDictionary *m_cellShowItemCache;
    NSMutableDictionary *m_hasPredownload;
    struct map<int, TimeLineSectionType, std::__1::less<int>, std::__1::allocator<std::__1::pair<const int, TimeLineSectionType>>> m_sectionIndexToType;
    MMTableView *m_tableView;
    WCTimeLineHeaderView *m_headRefreshView;
    WCTimeLineFooterView *m_footerView;
    WCListHeaderView *m_headerView;
    MMTipsViewController *m_introView;
    UIButton *m_messageTipView;
    MMHeadImageView *m_messageHeaderView;
    UIView *m_blackView;
    UIImageView *m_animationView;
    WCInputController *_inputController;
    WCOperateFloatView *m_floatOperateView;
    WCAdvertiseActionFloatView *m_advertiseActionFloatView;
    WCAdvertiseActionFloatForABTest *m_advertiseFloadForABTest;
    UIButton *m_advertiseActionBtn;
    WCPlainTextTipFullScreenView *m_plainTextFullScreenView;
    BOOL m_hasRefrashHead;
    BOOL m_isReflashingHead;
    BOOL m_isNoMoreData;
    BOOL m_isDelayStopFooterLoading;
    BOOL m_bTapHeaderView;
    BOOL m_bLongPressRightButton;
    BOOL m_hasSpeedyLoadView;
    BOOL m_shouldReloadData;
    BOOL m_shouldForbidRealodData;
    UIImageView *_inputView;
    EmoticonBoardView *_emoticonBoardView;
    UIButton *_expressionButton;
    MMUILabel *_remainWordCountLabel;
    WCDataItem *_inputDataItem;
    WCUserComment *_inputRefComment;
    int scrollCount;
    float m_fLastY;
    WCDataItem *_cacheDateItem;
    UIView *_animationView;
    NSArray *m_arrUploadFailItems;
    NSString *m_userName;
    id <WCTimeLineViewControllerDelegate> m_delegate;
    WXGesture *m_gesture;
    BOOL m_hasBeginTimeline;
    float m_preContentOffset;
    WCBarMessageWindow *m_barMessageWindow;
    BOOL m_forbidShowTip;
    BOOL m_needSetToTopCell;
    WCADPageWrap *_floatViewPageWrap;
    WCADPageWrap *_abTestPageWrap;
    BOOL _isReloadingData;
    NSMutableArray *_adReloadIndexPaths;
    NSMutableArray *_adInitIndexPaths;
    int m_commentWordLimit;
    NSMutableDictionary *_needReportViewId2AdInfo;
    NSMutableArray *m_arrWaitHateItemId;
    NSMutableArray *m_arrHiddenDataItem;
    NSMutableArray *m_arrWaitHiddenTipDataItem;
    BOOL m_hasNewPhotoWhenEnter;
    BOOL m_canLogAdContext;
    BOOL m_canLogDataList;
    float m_lastScreenShotContentOffset;
    MMURLHandler *m_urlHandler;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (BOOL)GetIsCommentCellRow:(id)arg1 RowIndex:(int)arg2;
- (BOOL)GetIsLastCommentOrLikeCell:(id)arg1 RowIndex:(int)arg2;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)OnFinishComment:(BOOL)arg1;
- (void)abTestViewHiddenWrap;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)adjustViewAndNavBarRect;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)animationDidEndRemainView:(id)arg1 hintDataItem:(id)arg2;
- (void)animationDidStop:(id)arg1 finished:(id)arg2 context:(void *)arg3;
- (void)cacheInputText;
- (void)calADCellYVisible:(char *)arg1 centerVisible:(char *)arg2 bottomVisible:(char *)arg3 forRowAtIndexPath:(id)arg4;
- (int)calcDataItemIndex:(int)arg1;
- (void)checkDBAutoRecover;
- (void)checkNewMessage;
- (void)cleanCellHeightCache:(id)arg1;
- (void)clearAnimationProperties;
- (void)clearAnimationPropertiesProtection;
- (void)clearWCCache;
- (void)commitAnimationWillStart:(id)arg1;
- (void)dealloc;
- (void)delayReload;
- (void)didAppear;
- (void)didCommitText:(id)arg1;
- (void)didDisshow;
- (void)didReceiveMemoryWarning;
- (void)editBlackList:(id)arg1 forSource:(int)arg2;
- (void)editShield:(id)arg1;
- (void)editShield:(id)arg1 forScene:(int)arg2;
- (BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)ensureInitInputView;
- (void)floatViewHiddenWrap;
- (void)genABTestTipCell:(id)arg1 indexPath:(id)arg2;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (void)genRedHeartCell:(id)arg1 indexPath:(id)arg2;
- (void)genUploadFailCell:(id)arg1 indexPath:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)gestureWillEndTransition:(id)arg1 isCanceld:(BOOL)arg2;
- (id)getAppIdFromUrl:(id)arg1;
- (float)getCellLineContentMarginCurOri;
- (int)getFirstNormalItemIndex;
- (id)getNavigationRightButton:(id)arg1;
- (id)getView;
- (id)getViewController;
- (void)handleABTestTipClickEvent:(id)arg1 actionItem:(id)arg2 dataItem:(id)arg3;
- (void)handleLongPressEx:(id)arg1;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2;
- (void)handleUrl:(id)arg1 backupUrl:(id)arg2 item:(id)arg3;
- (BOOL)hasUnReadMessage;
- (void)hideAlbumListLineViewInCell:(id)arg1;
- (void)hideFloatView;
- (void)hideMenu;
- (id)init;
- (void)initData;
- (void)initEmoticonView;
- (void)initGestureRecognizer;
- (void)initInputToolView;
- (void)jumpToUserProfile:(id)arg1 Displayname:(id)arg2 Scence:(unsigned long)arg3 userData:(id)arg4;
- (void)keyboardDidHide;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
- (void)logUserOpInfoAsScreenShot;
@property(nonatomic) __weak id <WCTimeLineViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) BOOL m_hasNewPhotoWhenEnter; // @synthesize m_hasNewPhotoWhenEnter;
@property(nonatomic) BOOL m_hasRefrashHead; // @synthesize m_hasRefrashHead;
@property(readonly, nonatomic) MMURLHandler *m_urlHandler; // @synthesize m_urlHandler;
- (void)newYearActionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onActionClearCellCacheAndRefreshCellView:(id)arg1;
- (void)onActionLocation:(id)arg1;
- (void)onAdActoin:(id)arg1;
- (void)onAdvertiseAction:(id)arg1 point:(struct CGPoint)arg2;
- (void)onBarTipClicked;
- (void)onBindFacebookFinish:(unsigned long)arg1;
- (void)onClickCommentBtnOnFloatView;
- (void)onClickTipBtn:(id)arg1;
- (void)onClickTipsBtn:(unsigned int)arg1;
- (void)onCommentDataItem:(id)arg1 point:(struct CGPoint)arg2;
- (void)onCommentReturn:(id)arg1;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)onDeleteData;
- (void)onDismissViewController:(id)arg1 userName:(id)arg2;
- (void)onDontLikeWithChoose:(id)arg1;
- (void)onDontLikeWithOtherReason:(id)arg1 QuestionExp:(id)arg2;
- (void)onEditBlackList:(id)arg1;
- (void)onExposeCancel;
- (void)onExposeComplete;
- (void)onExpressionButtonClicked:(id)arg1;
- (void)onHideAdvertise:(id)arg1;
- (void)onHideKeyboard;
- (void)onIKnowItBtnClicked;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3 extraInfo:(id)arg4;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onLinkClickedItem:(id)arg1 url:(id)arg2 backupUrl:(id)arg3 withRect:(struct CGRect)arg4;
- (void)onLoadMore;
- (void)onMenuControllerDidHide:(id)arg1;
- (void)onMenuControllerWillHide:(id)arg1;
- (void)onMenuControllerWillShow:(id)arg1;
- (void)onMessageUnReadCountChanged;
- (void)onNetworkActivityStatusChanged;
- (void)onNoMoreTimelineData;
- (void)onPlayNewMsgNotify;
- (void)onReloadCommentView:(id)arg1 ofDataItem:(id)arg2;
- (void)onReplyComment:(id)arg1 ofDataItem:(id)arg2 ofTouchedView:(id)arg3;
- (void)onRestartUpload;
- (void)onRestoreCommentView:(id)arg1 ofDataItem:(id)arg2;
- (void)onRestoreTimeLineCellView:(id)arg1;
- (void)onReveiceWCMessage:(id)arg1;
- (void)onShowDetailChanged:(id)arg1 bShowDetailBeforeChange:(BOOL)arg2;
- (void)onShowDetailViewForDataItem:(id)arg1;
- (void)onTimeLineCellMoreMenu:(id)arg1;
- (void)onTimeLineCellMoreMenu:(id)arg1 forScene:(unsigned int)arg2;
- (void)onTimeLineViewReturn;
- (void)onTouchDownLikeBtnOnFloatView;
- (void)onTranslateSnsChangedFromPhotoContent:(id)arg1;
- (void)onUpdateDataItem:(id)arg1 oldHeight:(float)arg2 newHeight:(float)arg3;
- (void)onViewAnimationDidHiden;
- (void)onViewAnimationWillHide;
- (void)onViewSightInFullScreen;
- (void)onViewSightOutFullScreen;
- (void)onWCContentItemViewExposeMenu:(id)arg1 scene:(int)arg2;
- (void)onWCContentItemViewInFullScreen;
- (void)onWCContentItemViewMoreMenu:(id)arg1 sender:(id)arg2;
- (void)onWCContentItemViewOutFullScreen;
- (void)onWCGroupModMemberReturn:(BOOL)arg1 group:(id)arg2;
- (void)openCommitViewController:(BOOL)arg1 arrImage:(id)arg2;
- (void)openWriteTextViewController;
- (void)panned:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)recordADBodyEndInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADBodyMiddleInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADBodyStartInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADCommentEndInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADCommentMiddleInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)recordADCommentStartInfo:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)refreshCacheForABTestTip:(id)arg1;
- (void)refreshHead;
- (void)refreshHeadForShowTip;
- (void)refreshWholeView;
- (void)reloadDataWrap;
- (void)reloadExpressionButtonImage:(int)arg1;
- (void)reloadTableView;
- (void)resetAlbumListLineViewsFrameInCell:(id)arg1 indexPath:(id)arg2;
- (void)resetHeaderView;
- (void)resetRightBarItem;
- (void)resetRightButtonStatus;
- (void)resetStatus:(BOOL)arg1;
- (void)scrollTableViewToShowDataItem:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (unsigned int)sectionIndexForDataItemWithTid:(id)arg1;
- (void)setAnimatedImageHidden:(BOOL)arg1;
- (void)setAnimatedImageHidden:(BOOL)arg1 withTimeLineCellView:(id)arg2;
- (void)setToTopCell;
- (BOOL)shouldInteractivePop;
- (BOOL)shouldRotateToInterfaceOrientation:(int)arg1;
- (void)shouldUpdateMessageButton:(id)arg1;
- (void)showABTestAlert:(id)arg1 dataItem:(id)arg2;
- (void)showAnimationToImageView;
- (void)showBarButton:(id)arg1;
- (void)showComment:(id)arg1 refComment:(id)arg2 touchedView:(id)arg3;
- (void)showContactInfo;
- (void)showDetailView:(id)arg1;
- (void)showDetailViewForDataItem:(id)arg1;
- (void)showImagePicker:(int)arg1;
- (void)showMessageList;
- (void)showPhotoAlert:(id)arg1;
- (void)showUploadOption:(id)arg1;
- (void)startLogBrowseInfo:(BOOL)arg1;
- (void)stopRefreshHeaderView;
- (unsigned int)supportedInterfaceOrientations;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)textViewTextDidChange;
- (float)totalHeightFromTopToSection:(unsigned int)arg1;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded_TableView:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved_TableView:(id)arg1 withEvent:(id)arg2;
- (void)tryLogABTestResult:(id)arg1;
- (void)tryLogThumbImageLoadedEffiency:(id)arg1;
- (void)tryReportAdCell:(id)arg1;
- (void)tryResumeStatus;
- (void)updateContentOffset;
- (void)updateNetworkStatus;
- (void)updateWordCnt:(int)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (id)visibleTimeLineCellViewWithTid:(id)arg1;
- (void)willAppear;
- (void)willDisappear;
- (void)willDisshow;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)willShow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
