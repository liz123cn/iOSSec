//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWindowViewController.h"

@class MMUILabel, NSMutableArray, NSString, UIButton, UIImageView, UIView, UIViewController;

@interface MMTipsViewController : MMWindowViewController
{
    id <MMTipsViewControllerDelegate> m_delegate;
    unsigned int _tipsType;
    NSString *_tipsTitle;
    NSString *_tipsContent;
    NSString *_tipsImgName;
    NSMutableArray *_btnTitleArray;
    NSMutableArray *_btnArray;
    UIButton *_backgroundBtn;
    UIImageView *_contentBg;
    UIImageView *_tipsImgView;
    UIView *_tipsDesView;
    UIView *_contentView;
    MMUILabel *_tipsTitleLabel;
    MMUILabel *_tipsContentLabel;
    BOOL _isBlurBg;
    UIView *_blurView;
    BOOL bIsForbidCancelBtn;
    BOOL _allButtonVertical;
    BOOL _hideTipsWhenClickedOutOfTips;
    unsigned int m_tipsImageLocation;
    UIViewController *_topViewController;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL allButtonVertical; // @synthesize allButtonVertical=_allButtonVertical;
@property(nonatomic) BOOL bIsForbidCancelBtn; // @synthesize bIsForbidCancelBtn;
- (id)bulidNSAttributedStringText:(id)arg1;
- (void)configBlurBgOnView:(id)arg1;
- (id)create6Or6pFirstLoginView;
- (void)createContainImgTips;
- (id)getBtnAtIndex:(unsigned long)arg1;
- (id)getContentImageView;
- (void)hideTips;
@property(nonatomic) BOOL hideTipsWhenClickedOutOfTips; // @synthesize hideTipsWhenClickedOutOfTips=_hideTipsWhenClickedOutOfTips;
- (id)initIphone6LoginTipsWithTitle:(id)arg1 andContent:(id)arg2 andCancelText:(id)arg3;
- (id)initWithTitle:(id)arg1 andContent:(id)arg2 andBtn:(id)arg3;
- (id)initWithTitle:(id)arg1 andImageName:(id)arg2 andContent:(id)arg3 andCancelText:(id)arg4;
- (id)initWithTitle:(id)arg1 andImageName:(id)arg2 andContent:(id)arg3 andCancelText:(id)arg4 andConfirmText:(id)arg5;
@property(nonatomic) __weak id <MMTipsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_imageName; // @synthesize m_imageName=_tipsImgName;
@property(retain, nonatomic) MMUILabel *m_tipsContentLabel; // @synthesize m_tipsContentLabel=_tipsContentLabel;
@property(nonatomic) unsigned int m_tipsImageLocation; // @synthesize m_tipsImageLocation;
@property(retain, nonatomic) MMUILabel *m_tipsTitleLabel; // @synthesize m_tipsTitleLabel=_tipsTitleLabel;
- (void)onClickBtn:(id)arg1;
- (void)onTopBarFrameChanged;
- (void)onTopBarHiddenChanged:(int)arg1;
- (void)removeAllBtn;
- (void)setButtonsEnable:(BOOL)arg1;
@property(nonatomic) __weak UIViewController *topViewController; // @synthesize topViewController=_topViewController;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)updateSubViewsFrame;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

