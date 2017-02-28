//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IRadarSearchExt.h"
#import "PBMessageObserverDelegate.h"
#import "UIScrollViewDelegate.h"

@class MMScrollView, NSMutableArray, NSString, UIActivityIndicatorView, UIButton, UIImageView, UILabel, UITextField, UIView;

@interface RadarCreateRoomViewController : MMUIViewController <PBMessageObserverDelegate, IRadarSearchExt, UIScrollViewDelegate>
{
    NSMutableArray *m_arrHeads;
    NSMutableArray *m_arrWillShowMember;
    NSString *m_nsTicket;
    UILabel *m_titleLabel;
    UIView *m_topLine;
    UIView *m_bottomLine;
    UIView *m_blurView;
    MMScrollView *m_scrollView;
    UIButton *m_enterBtn;
    UIImageView *m_emptyHead;
    UILabel *m_labelSmallTip;
    UIView *m_keyBoard;
    UILabel *m_labelTip;
    UIActivityIndicatorView *m_activityIndicatorView;
    UIView *m_code;
    UITextField *m_hiddenTextField;
    BOOL m_bShowingHeads;
    BOOL m_bConfirming;
    BOOL m_bEnabled;
    BOOL m_bWaitingForLocation;
    BOOL m_bWaitingForClearNumber;
    BOOL m_bWaitingForClearAll;
    BOOL m_bDonotQuit;
    BOOL m_bRetry;
    BOOL m_bEntering;
    BOOL m_bIsNeedToReport;
}

- (void).cxx_destruct;
- (void)HandleCheckPwdResp:(id)arg1 Event:(unsigned long)arg2;
- (void)HandleCreateChatRoomResp:(id)arg1 Event:(unsigned long)arg2;
- (void)HandleEnterRoomResp:(id)arg1 Event:(unsigned long)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)OnRadarSearchCreateRoomCancel;
- (void)OnRetrieveLocationError:(int)arg1;
- (void)OnRetrieveLocationOk;
- (void)OnRetrieveLocationTimeout;
- (void)addChar:(id)arg1;
- (void)checkPwd;
- (void)clearChar;
- (void)clickBtn;
- (void)dealloc;
- (void)deleteChar;
- (void)enterConfirmView:(id)arg1;
- (void)genNumberBtnSpaceLine;
- (void)genNumberBtnWithIndex:(unsigned long)arg1;
- (void)genNumberLabelWithIndex:(unsigned long)arg1;
- (struct CGRect)getFrameAtIndex:(unsigned long)arg1;
- (struct CGRect)getNumberBtnFrameAt:(unsigned long)arg1;
- (void)getPreEnterRoomMemberList;
- (void)iniCodeView;
- (id)init;
- (void)initConfirmView;
- (void)initCreateRoomView;
- (void)initKeyBoard;
- (BOOL)isEqualMember:(id)arg1 withMember:(id)arg2;
- (void)joinChatRoom;
- (void)onRadarSearchViewClose:(BOOL)arg1;
- (void)onTextFieldChanged;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)sendRequest:(unsigned long)arg1;
- (void)setControlEnable:(BOOL)arg1;
- (void)setControlEnabled;
- (void)showMember:(id)arg1;
- (void)showOneMember;
- (void)showTipView:(id)arg1 title:(id)arg2 withLoading:(BOOL)arg3;
- (void)showTipView:(id)arg1 withLoading:(BOOL)arg2;
- (void)startCreateRoom;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateConfirmView;
- (void)updateCreateRoomView;
- (void)updateNumberLabels;
- (BOOL)useCustomNavibar;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

