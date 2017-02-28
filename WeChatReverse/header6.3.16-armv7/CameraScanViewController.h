//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "BaseScanLogicDelegate.h"
#import "CNetworkStatusExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "MMImagePickerManagerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UIImagePickerControllerDelegate.h"
#import "UINavigationControllerDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMScrollView, NSMutableDictionary, NSString, UIButton, UIImageView, UILabel, UIView;

@interface CameraScanViewController : MMUIViewController <MMImagePickerManagerDelegate, UIAlertViewDelegate, IVOIPUILogicMgrExt, UIGestureRecognizerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, WCActionSheetDelegate, BaseScanLogicDelegate, CNetworkStatusExt>
{
    int _cameraScanType;
    int _cameraScanCodeType;
    BOOL _hideBottomBar;
    BOOL _hideIntroButton;
    NSString *_desc;
    id <CameraScanUIDelegate> _delegate;
    MMScrollView *_bottomScrollView;
    NSMutableDictionary *_logicDict;
    NSMutableDictionary *_buttonDict;
    UIView *_overlayLeftView;
    UIView *_overlayRightView;
    UIView *_overlayTopView;
    UIView *_overlayBottomView;
    UIView *_loadingBgView;
    UIView *_alertBgView;
    UIImageView *_scanLineImgView;
    UIView *_topLineView;
    UIView *_bottomLineView;
    UIView *_leftLineView;
    UIView *_rightLineView;
    UIImageView *_leftTopCropImageView;
    UIImageView *_rightTopCropImageView;
    UIImageView *_leftBottomCropImageView;
    UIImageView *_rightBottomCropImageView;
    UILabel *_infoLabel;
    UILabel *_descLabel;
    UILabel *_alertLabel;
    UILabel *_smallAlertLabel;
    UIButton *_introButton;
    unsigned long _beepSound;
    BOOL _navibarTranslucent;
    BOOL _hasInit;
    BOOL _animating;
}

- (void).cxx_destruct;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)ReachabilityChange:(unsigned long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)addButtonWithTitle:(id)arg1 Icon:(id)arg2 HighlightIcon:(id)arg3 Frame:(struct CGRect)arg4 Action:(SEL)arg5 Tag:(int)arg6;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alignTop:(id)arg1;
@property(readonly, nonatomic) int cameraScanCodeType; // @synthesize cameraScanCodeType=_cameraScanCodeType;
@property(nonatomic) int cameraScanType; // @synthesize cameraScanType=_cameraScanType;
- (void)dealloc;
@property(nonatomic) __weak id <CameraScanUIDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
- (void)didRotateFromInterfaceOrientation:(int)arg1;
- (void)doScanAnimation;
- (void)drawCropAreaRect:(struct CGRect)arg1;
- (void)enterBackground;
- (void)enterForeground;
- (id)getActiveLogicController;
- (float)getBottomBarHeight;
- (id)getButtonByTag:(int)arg1;
- (id)getButtonTitle:(int)arg1;
- (float)getContentHeight;
- (struct CGRect)getContentRect;
- (id)getFunctionTitle:(int)arg1;
- (id)getMainViewController;
- (float)getPreviewScale:(int)arg1;
- (id)getScanBookWording:(id)arg1;
- (id)getScanLogicController:(int)arg1;
- (void)hideAlertWording;
@property(nonatomic) BOOL hideBottomBar; // @synthesize hideBottomBar=_hideBottomBar;
@property(nonatomic) BOOL hideIntroButton; // @synthesize hideIntroButton=_hideIntroButton;
- (void)hideIntroView;
- (id)init;
- (void)initGesture;
- (void)initMember;
- (void)initView;
- (id)initWithCameraScanType:(int)arg1 CodeType:(int)arg2 presentModal:(BOOL)arg3;
- (id)initWithCameraScanType:(int)arg1 presentModal:(BOOL)arg2;
- (void)onButtonDown:(id)arg1;
- (void)onIKnowItBtnClick;
- (void)onIntroButtonClicked;
- (void)onMoreAction:(id)arg1;
- (void)onPlaySound;
- (void)onPopFromStack;
- (void)onPopViewControllerCount:(int)arg1 animated:(BOOL)arg2;
- (void)onPushViewContoller:(id)arg1 animated:(BOOL)arg2;
- (void)onQRCodeAction:(id)arg1;
- (void)onShowAlertWording;
- (void)onShowScanHistory;
- (void)onStartLoading;
- (void)onStartScanAnimation;
- (void)onStopLoading;
- (void)onStopScanAnimation;
- (void)onUpdateWording;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (void)openView:(int)arg1 Animated:(BOOL)arg2;
- (void)playsound;
- (BOOL)preViewControllerIsKindOf:(Class)arg1;
- (void)reportAfterExit;
- (void)scrollButtonToVisible:(int)arg1;
- (void)setNavigationBarTranslucent:(BOOL)arg1;
- (void)setScannerDelegate:(id)arg1 cameraScanType:(int)arg2;
- (void)showAlertWording:(id)arg1 Animated:(BOOL)arg2;
- (void)showImagePicker;
- (void)startLoadingDarkAnimated:(BOOL)arg1;
- (void)startScan;
- (void)startScanAnimation;
- (void)stopLoadingDark;
- (void)stopScan;
- (void)stopScanAnimation;
- (void)switchView:(int)arg1;
- (void)tapAtPoint:(id)arg1;
- (void)updateAnimationStoped;
- (void)updateBottomBarInset;
- (void)updateIntroButton;
- (void)updateScanViewAnimated:(BOOL)arg1;
- (void)updateWording;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidPush:(BOOL)arg1;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillPush:(BOOL)arg1;
- (void)willRotateToInterfaceOrientation:(int)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

