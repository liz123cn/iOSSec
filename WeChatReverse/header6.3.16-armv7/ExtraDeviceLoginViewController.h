//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PBMessageObserverDelegate.h"

@class MMTimer, MMUILabel, NSString, UIButton, UIImageView;

@interface ExtraDeviceLoginViewController : MMUIViewController <PBMessageObserverDelegate>
{
    BOOL _isFromScan;
    BOOL _isFromReScanBtn;
    id <ExtraDeviceLoginViewControllerDelegate> _delegate;
    UIImageView *_deviceImgView;
    MMUILabel *_tipsLabel;
    UIButton *_confirmBtn;
    UIButton *_cancelBtn;
    NSString *_tipsContent;
    unsigned int _iconType;
    NSString *_confirmBtnTitle;
    NSString *_cancelBtnTitle;
    unsigned int _sessionListLimit;
    unsigned int _confirmTimeout;
    NSString *_warningTips;
    int _respType;
    NSString *_loginUrl;
    MMTimer *_timer;
    long _startTime;
    NSString *_titleStr;
    NSString *_loggedInDeviceTips;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) NSString *cancelBtnTitle; // @synthesize cancelBtnTitle=_cancelBtnTitle;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) NSString *confirmBtnTitle; // @synthesize confirmBtnTitle=_confirmBtnTitle;
@property(nonatomic) unsigned int confirmTimeout; // @synthesize confirmTimeout=_confirmTimeout;
- (void)dealloc;
@property(nonatomic) id <ExtraDeviceLoginViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIImageView *deviceImgView; // @synthesize deviceImgView=_deviceImgView;
- (void)dismissMySelf;
- (id)getConfirmBtnTitle;
- (id)getDeviceImg;
- (id)getTipsContent;
@property(nonatomic) unsigned int iconType; // @synthesize iconType=_iconType;
- (id)initWithTipsContent:(id)arg1 andIconType:(unsigned int)arg2 andConfirmBtnTitle:(id)arg3 andCancelBtnTitle:(id)arg4 andSessionListLimit:(unsigned int)arg5 andConfirmTimeout:(unsigned int)arg6 andRespType:(int)arg7 andLoginUrl:(id)arg8 andIsFromScan:(BOOL)arg9 titleStr:(id)arg10 loggedInDeviceTips:(id)arg11 warningTips:(id)arg12;
- (BOOL)isConfirmGetRequestError;
@property(nonatomic) BOOL isFromReScanBtn; // @synthesize isFromReScanBtn=_isFromReScanBtn;
@property(nonatomic) BOOL isFromScan; // @synthesize isFromScan=_isFromScan;
- (BOOL)isPairLogin;
@property(retain, nonatomic) NSString *loggedInDeviceTips; // @synthesize loggedInDeviceTips=_loggedInDeviceTips;
@property(retain, nonatomic) NSString *loginUrl; // @synthesize loginUrl=_loginUrl;
- (void)onCancelBtnPress:(id)arg1;
- (void)onConfirmBtnPress:(id)arg1;
- (void)onConfirmTimeout;
- (void)onGetLoginCancelResponse:(id)arg1 eventID:(unsigned long)arg2;
- (void)onGetLoginConfirmRespnse:(id)arg1 eventID:(unsigned long)arg2;
- (void)onLeftBarButtonPress:(id)arg1;
- (void)onTimerCheck;
@property(nonatomic) int respType; // @synthesize respType=_respType;
- (void)sendLoginCancelRequest;
- (void)sendLoginConfirmRequest;
@property(nonatomic) unsigned int sessionListLimit; // @synthesize sessionListLimit=_sessionListLimit;
@property(nonatomic) long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) NSString *tipsContent; // @synthesize tipsContent=_tipsContent;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(retain, nonatomic) NSString *warningTips; // @synthesize warningTips=_warningTips;
- (void)setupView;
- (void)startLoadingBlocked;
- (void)updateUIWhenSomethingWrong;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

