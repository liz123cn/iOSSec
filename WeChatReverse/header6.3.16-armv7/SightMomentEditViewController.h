//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IVOIPUILogicMgrExt.h"
#import "InputControllerDelegate.h"
#import "MultiSelectContactsViewControllerDelegate.h"
#import "SightMomentGroupSelectDelegate.h"
#import "SightPlayerViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCTimelinePOIPickerViewControllerDelegate.h"

@class EmoticonBoardView, MMGrowTextView, NSMutableArray, NSString, SightPlayerView, UIImage, UIImageView, UILabel, UIView, WCInputController, WCLocationInfo, WCTimelinePOIPickerViewController;

@interface SightMomentEditViewController : MMUIViewController <InputControllerDelegate, SightMomentGroupSelectDelegate, MultiSelectContactsViewControllerDelegate, IVOIPUILogicMgrExt, SightPlayerViewDelegate, WCTimelinePOIPickerViewControllerDelegate, WCActionSheetDelegate>
{
    UIView *m_content;
    UIView *m_background;
    UIImageView *m_blurView;
    MMGrowTextView *_textView;
    EmoticonBoardView *m_emoticonBoardView;
    WCInputController *m_inputController;
    UIView *m_previewContent;
    SightPlayerView *m_playerPreview;
    UIView *m_fullPlayContent;
    UILabel *m_fullPlayLabel;
    UIView *m_toolBar;
    float m_curToolBarY;
    WCTimelinePOIPickerViewController *m_poiPickerViewController;
    BOOL _directClose;
    BOOL _fromDraft;
    float _originHeight;
    UIImage *_thumbImage;
    NSString *_moviePath;
    UIImage *_realThumbImage;
    NSString *_realMoviePath;
    NSString *_realThumbPath;
    NSMutableArray *_arr_MentionContact;
    WCLocationInfo *_m_locationInfo;
}

- (void).cxx_destruct;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
@property(retain, nonatomic) NSMutableArray *arr_MentionContact; // @synthesize arr_MentionContact=_arr_MentionContact;
- (void)dealloc;
@property(nonatomic) BOOL directClose; // @synthesize directClose=_directClose;
- (void)endFullPlay;
- (void)fixKeyboardTextColorForIOS8;
@property(nonatomic) BOOL fromDraft; // @synthesize fromDraft=_fromDraft;
- (void)fullPlay;
- (id)getGroupDesc;
- (float)getVisibleHeight;
- (id)init;
- (void)keyboardWillHide;
- (void)keyboardWillShow;
@property(retain, nonatomic) WCLocationInfo *m_locationInfo; // @synthesize m_locationInfo=_m_locationInfo;
- (void)makeBackground;
- (void)makeEditArea;
- (void)makeEmoticonView;
- (void)makeFullPlayView;
- (void)makeInputController;
- (void)makePreviewContent;
- (void)makePreviewPlayer;
- (void)makeToolBar;
- (void)makeTopBar;
- (void)mentionContactSelect;
@property(retain, nonatomic) NSString *moviePath; // @synthesize moviePath=_moviePath;
- (void)onMultiSelectContactCancelForSns;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onMultiSelectContactReturnForSns:(id)arg1;
- (void)onOtherBtn:(id)arg1;
- (void)onPOIPickerFinished:(id)arg1;
- (BOOL)onPlayEnd:(BOOL)arg1;
- (void)onSelectGroupFinish;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
@property(nonatomic) float originHeight; // @synthesize originHeight=_originHeight;
- (void)poiSelect;
- (void)popSelf;
- (void)privatePrivacyHiddenMentionBtn;
- (void)processUploadTask:(id)arg1;
@property(retain, nonatomic) NSString *realMoviePath; // @synthesize realMoviePath=_realMoviePath;
@property(retain, nonatomic) UIImage *realThumbImage; // @synthesize realThumbImage=_realThumbImage;
@property(retain, nonatomic) NSString *realThumbPath; // @synthesize realThumbPath=_realThumbPath;
- (void)resignInput;
- (void)saveDraftAndQuit;
@property(retain, nonatomic) UIImage *thumbImage; // @synthesize thumbImage=_thumbImage;
- (BOOL)shouldEnableKeyboardInteractivePop;
- (void)showGroupSelection;
- (void)showMutiSelectContactViewController;
- (void)startSentAnim:(struct CGRect)arg1;
- (void)switchEmojiPanel;
- (void)updateGroupBtn;
- (void)updateMentionBtn;
- (void)uploadMoment;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillBeDismissed:(BOOL)arg1;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willAppearanceTransition;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
