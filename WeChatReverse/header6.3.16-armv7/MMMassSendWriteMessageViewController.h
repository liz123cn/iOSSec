//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IMassSendExt.h"
#import "IMsgExt.h"
#import "ImageControllerDelegate.h"
#import "MMInputToolViewDelegate.h"
#import "RecordControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "tableViewDelegate.h"

@class ImageController, MMInputToolView, MMLoadingView, MMTableView, MMTimer, NSArray, NSMutableArray, NSString, RecordController, UIView;

@interface MMMassSendWriteMessageViewController : MMUIViewController <MMInputToolViewDelegate, UITableViewDelegate, UITableViewDataSource, tableViewDelegate, ImageControllerDelegate, IMsgExt, IMassSendExt, RecordControllerDelegate, UIAlertViewDelegate, WCActionSheetDelegate>
{
    MMTableView *_tableView;
    UIView *_receiverView;
    MMInputToolView *_inputToolView;
    NSMutableArray *_arrContacts;
    ImageController *_imageController;
    RecordController *_recordController;
    MMLoadingView *_loadingView;
    unsigned long _uiTmpRecordID;
    MMTimer *m_popBackTimer;
    unsigned long _iFromSendAgain;
    unsigned long m_currentRecordFormat;
}

- (void).cxx_destruct;
- (void)CameraControllerDidTakeVideo:(id)arg1;
- (BOOL)CanSendMultiImage;
- (BOOL)CanSendOriginalImage;
- (BOOL)CanSendVideoMsg;
- (void)CancelRecording;
- (struct CGPoint)CheckVoiceBtnPressLocation;
- (unsigned long)CheckVoiceBtnState;
- (id)GetContactName;
- (id)GetCurrentViewController;
- (void)HideRecordTips;
- (void)MassSend:(id)arg1;
- (void)OnMassSendFail:(unsigned long)arg1 WithErrorMsg:(id)arg2;
- (void)OnMassSendOK;
- (void)PopBack;
- (void)SendEmojiArtMessageToolView:(id)arg1;
- (void)SendEmoticonMesssageToolView:(id)arg1;
- (void)SendRecording;
- (void)SendTextMessageToolView:(id)arg1;
- (void)SetPeakPower:(float)arg1;
- (void)SetVoiceEnabled:(BOOL)arg1;
- (BOOL)ShouldShowKeyboardAnimation;
- (void)ShowAlert;
- (void)ShowRecording;
- (void)ShowTooLongTips;
- (void)ShowTooShortTips;
- (void)StartRecording;
- (void)StopRecording;
- (void)ToolViewPositionDidChanged:(BOOL)arg1 animated:(BOOL)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)adjustSubviewRects;
@property(retain, nonatomic) NSArray *arrContacts; // @synthesize arrContacts=_arrContacts;
- (void)dealloc;
- (id)getAllUsrName;
- (id)getNavigationController;
- (id)getViewController;
- (void)hideToolViewAnimated:(BOOL)arg1;
@property(nonatomic) unsigned long iFromSendAgain; // @synthesize iFromSendAgain=_iFromSendAgain;
- (id)init;
- (void)initAllowRecommendApp;
- (void)initAllowVoiceInput;
- (void)initAllowVoip;
- (void)initAllowWxTalk;
- (void)initLoadingView;
- (void)initReceiverView;
- (void)initTableView;
- (void)initToolView;
- (void)onAddApp;
- (void)onBack:(id)arg1;
- (void)onPositionModeChangeTo:(int)arg1 Animated:(BOOL)arg2;
- (void)onSelectLocation;
- (void)onShareAppMsg:(id)arg1;
- (void)onShareCard;
- (void)onVoipInvite;
- (void)onWXTalk;
- (void)openCameraController;
- (void)openMediaBrowser;
- (void)openMyFavoritesListController;
- (void)openNewMediaBrowser:(id)arg1;
- (void)openServiceAppListController;
- (void)processInsertedImage:(id)arg1 ImageInfo:(id)arg2;
- (void)processInsertedImage:(id)arg1 withData:(id)arg2 ImageInfo:(id)arg3;
- (void)scrollViewWillBeginDragging:(id)arg1;
@property(retain, nonatomic) MMInputToolView *toolView; // @synthesize toolView=_inputToolView;
- (void)stopLoadingAndShowError:(id)arg1 withDelay:(float)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willDisappear;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

