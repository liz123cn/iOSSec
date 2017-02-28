//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBaseContact, CContact, CEmoticonWrap, CMessageNodeData, CMessageWrap, ImageInfo, MMInputToolView, MMWebViewController, NSArray, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSURL, ReaderWrap, ServiceAppData, UIBarButtonItem, UIImage, UIView;

@protocol BaseMsgContentDelgate <NSObject>
- (void)AddAtUser:(NSString *)arg1;
- (BOOL)CanAddApp;
- (BOOL)CanLongPressHeadImage;
- (BOOL)CanOpenCamera;
- (BOOL)CanOpenServiceAppList;
- (BOOL)CanOpenTrackRoom;
- (BOOL)CanRotateOrientation;
- (BOOL)CanSelectMyFavoritesItemForSendingMsg;
- (BOOL)CanSend3rdMsg;
- (BOOL)CanSendEmoticonMessage;
- (BOOL)CanSendImageMsg:(UIImage *)arg1;
- (BOOL)CanSendLocationMsg;
- (BOOL)CanSendTextMsg:(NSString *)arg1;
- (BOOL)CanSendVideoMsg;
- (BOOL)CanSendVoiceMsg;
- (BOOL)CanSendVoipMsg;
- (BOOL)CanShowBanner;
- (BOOL)CanShowSight;
- (BOOL)CanWXTalk;
- (void)CancelRecording;
- (void)CustomToolViewEX:(MMInputToolView *)arg1;
- (void)DelMsgWithMsgList:(NSArray *)arg1 DelAll:(BOOL)arg2;
- (void)DeleteAtUserList;
- (BOOL)EnabledOfHeaderButtonAtIndex:(unsigned long)arg1;
- (float)ExtraInputTollViewHeight;
- (CBaseContact *)GetContact;
- (NSMutableArray *)GetDownMessageArray;
- (CMessageWrap *)GetFirstUnReadMessage;
- (NSMutableArray *)GetMessageArray;
- (NSMutableArray *)GetMessageArrayFrom:(unsigned long)arg1 createTime:(unsigned int)arg2;
- (CMessageWrap *)GetMessageFromImage:(UIImage *)arg1;
- (NSString *)GetRightBarButtonImageName;
- (NSString *)GetRightBarButtonTitle;
- (NSMutableArray *)GetSearchedResultContentMessageArray;
- (UIImage *)GetTitleImage;
- (NSString *)GetUsrTitle;
- (NSString *)GetUsrTitleCPKey;
- (NSString *)GetUsrTitleFront;
- (NSString *)GetUsrTitleTail;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(char *)arg1;
- (BOOL)HasCustomToolBar;
- (UIImage *)ImageOfHeaderButtonAtIndex:(unsigned long)arg1;
- (BOOL)IsRecording;
- (unsigned long)NumberOfHeaderButtons;
- (void)OpenChatView:(CContact *)arg1;
- (void)OpenContactInfo:(CBaseContact *)arg1;
- (void)OpenDetailInfo;
- (void)OpenEmoticonToolView:(MMInputToolView *)arg1;
- (void)ResendMessage:(CMessageWrap *)arg1;
- (void)SelectLocation:(BOOL)arg1;
- (void)SendEmojiArtMessage:(NSString *)arg1;
- (void)SendEmoticonMessage:(CEmoticonWrap *)arg1;
- (void)SendImageMessage:(UIImage *)arg1 ImageInfo:(ImageInfo *)arg2;
- (void)SendMessageWrap:(CMessageWrap *)arg1;
- (void)SendTextMessage:(NSString *)arg1;
- (void)ShareCard;
- (BOOL)ShouldShowMultiSelectMode;
- (BOOL)ShouldShowSearchBar;
- (BOOL)ShouldShowSearchCompleteRightBarButton;
- (BOOL)ShouldShowSearchResultMessageArray;
- (BOOL)ShouldShowSearchedAnyMsg;
- (void)ShowReader:(ReaderWrap *)arg1;
- (void)StartPlaying:(CMessageWrap *)arg1 FromTouch:(BOOL)arg2;
- (void)StartRecording;
- (void)StateChanged;
- (void)StopPlaying:(CMessageWrap *)arg1;
- (void)StopRecording;
- (NSString *)TitleOfHeaderButtonsAtIndex:(unsigned long)arg1;
- (void)ViewDidAppear;
- (void)ViewDidInit;
- (void)ViewLocation:(CMessageWrap *)arg1;
- (void)ViewWillAppear;
- (void)ViewWillDisappear;
- (void)ViewWillInit;
- (void)VoiceModeClicked;
- (BOOL)canReloadViewIfMemoryWarning;
- (void)clearDownLeftCount;
- (void)clearLastCreateTime;
- (void)didSelectSearchResultForMessageWrap:(CMessageWrap *)arg1;
- (void)didShowFirstUnReadMessage;
- (unsigned long)getSearchedMsgLocalID;
- (BOOL)isUsrTitleUnsafe;
- (NSString *)nameForHeadImageLongPressed:(CBaseContact *)arg1;
- (void)onBackFromNavigationController;
- (void)onInputPositionChanged;
- (BOOL)onLoadDownMoreMessage;
- (NSMutableArray *)onLoadMoreMessage;
- (void)onMultiTalkButtonClick;
- (void)onOpenCameraController;
- (void)onOpenMediaBrowser;
- (void)onOpenMyCardPkgViewController;
- (void)onOpenMyFavoritesListController;
- (void)onOpenServiceApp:(ServiceAppData *)arg1;
- (void)onOpenServiceAppListController;
- (void)onPopFromNavigationController;
- (void)onRedEnvelopesControlLogic;
- (void)onSaveDraft;
- (void)onSendCaptrueImage:(NSURL *)arg1;
- (void)onTextChange:(NSString *)arg1 selectedRange:(struct _NSRange)arg2;
- (void)onTransferMoneyControlLogic;
- (void)onVideoVoipInvite;
- (void)onVoipInvite;
- (void)onWillPopFromNavigationController;
- (void)onWillPushFromNavigationController;
- (NSArray *)previewActionItems;
- (void)setLastCreateTime:(unsigned int)arg1;
- (void)setNeedUpdateTitle:(char *)arg1;
- (BOOL)shouldPreventViewcontrollerAutorotate;
- (BOOL)shouldSearchedMsgHightlight;

@optional
- (UIBarButtonItem *)GetRightBarBtn;
- (UIImage *)GetTitleTailImage;
- (UIImage *)HighlightedImageOfHeaderButtonAtIndex:(unsigned long)arg1;
- (BOOL)NeedRightButtonRedDot;
- (void)OnTagLink:(NSString *)arg1 messageWrap:(CMessageWrap *)arg2;
- (void)OnVideoPlayEnd:(CMessageWrap *)arg1 isForceStop:(BOOL)arg2;
- (void)RevokeMsg:(CMessageWrap *)arg1;
- (void)SetMsgPlayed:(CMessageWrap *)arg1;
- (void)StartDownloadShortVideo:(CMessageWrap *)arg1;
- (void)StartDownloadVideo:(CMessageWrap *)arg1;
- (void)StartPlayVideo:(CMessageWrap *)arg1;
- (void)StartUploadVideo:(CMessageWrap *)arg1;
- (void)StopDownloadVideo:(CMessageWrap *)arg1;
- (void)StopUploadVideo:(CMessageWrap *)arg1;
- (void)addGameNode:(CMessageNodeData *)arg1;
- (void)addMultiMsgToMyFav:(NSMutableArray *)arg1;
- (BOOL)canShowChatRoomInfo;
- (void)clearAtMeCount;
- (void)customCellContentForMsg:(CMessageNodeData *)arg1;
- (void)delChatroomMember:(CMessageWrap *)arg1 fromScene:(BOOL)arg2;
- (void)exitTracking;
- (NSString *)genMsgSource;
- (UIView *)getBackgroundView;
- (NSMutableDictionary *)getExtraInfo;
- (UIBarButtonItem *)getLeftBarButton;
- (MMWebViewController *)getPreviewForLink:(NSString *)arg1;
- (BOOL)hasDownMoreMsg;
- (BOOL)hasMoreMsg;
- (void)hasTapReaderNodeView;
- (BOOL)isShowHeadImage:(CMessageWrap *)arg1;
- (void)onClickReceiveBrandMsg;
- (void)onClickShieldBrandMsg;
- (void)onInputTextDeleteAll;
- (void)onMassSendSendAgain:(NSArray *)arg1;
- (void)onMultiMsgDelete:(NSMutableArray *)arg1;
- (void)onMultiMsgSelected:(NSMutableArray *)arg1 Username:(NSString *)arg2;
- (void)openTrackRoom:(NSNumber *)arg1;
- (void)resetWithMessageWrap:(CMessageWrap *)arg1;
- (void)sendMultiMsgByMail:(NSMutableArray *)arg1;
- (void)sendMultiMsgBySystemMail:(NSMutableArray *)arg1;
- (void)sendMultiMsgToBrandContact:(NSMutableArray *)arg1 To:(CContact *)arg2;
- (void)sendMultiMsgToFriend:(NSMutableArray *)arg1;
- (void)setExtraInfo;
- (void)shareDataToOpenSDK:(CMessageWrap *)arg1;
- (BOOL)shouldHideToolViewWhenKeyboardHide;
- (void)toBeEditing:(BOOL)arg1;
- (void)viewDidRotateToOrientation:(int)arg1;
- (void)viewWillRotateToOrientation:(int)arg1;
@end

