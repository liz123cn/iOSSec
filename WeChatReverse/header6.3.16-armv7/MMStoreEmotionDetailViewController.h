//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonButtonDescExt.h"
#import "EmotionStoreDetailRewardEntranceDelegate.h"
#import "IEmoticonPackageStateMgrExt.h"
#import "IStoreEmotionRewardExt.h"
#import "SessionSelectControllerDelegate.h"
#import "StoreEmotionDeleteCgiDelegate.h"
#import "UIAlertViewDelegate.h"

@class EmoticonStoreDetailCoverImageView, EmoticonStoreDetailRewardEntranceView, EmoticonStoreGridView, EmoticonStoreItem, EmotionProgressView, EmotionRewardResponseInfo, EmotionStoreDetailDesignerContainerView, MMUIScrollView, NSMutableArray, NSString, StoreEmotionDeleteCgi, StoreEmotionPageShareLogic, UIButton, UIImageView, UILabel, UIView, WCDataItem;

@interface MMStoreEmotionDetailViewController : MMUIViewController <EmoticonButtonDescExt, StoreEmotionDeleteCgiDelegate, IStoreEmotionRewardExt, EmotionStoreDetailRewardEntranceDelegate, IEmoticonPackageStateMgrExt, UIAlertViewDelegate, SessionSelectControllerDelegate>
{
    int _type;
    int _scene;
    BOOL _needScrollToBottom;
    BOOL _m_isGettingRewardInfo;
    NSString *m_storeSession;
    EmoticonStoreItem *m_storeItem;
    NSMutableArray *m_arrEmoticon;
    MMUIScrollView *m_tableView;
    UIButton *m_button;
    EmotionProgressView *m_progressView;
    UIView *m_downLoadStateView;
    UIButton *m_cancelButton;
    unsigned long m_extrance;
    UILabel *m_priceLabel;
    EmoticonStoreDetailCoverImageView *m_coverImageView;
    UILabel *m_nameLabel;
    UILabel *m_timeLabel;
    UILabel *m_copyrightLabel;
    UIButton *m_statementButton;
    EmoticonStoreGridView *m_thumbGridView;
    UIView *m_previewTipsLabel;
    UILabel *m_descLabel;
    UIImageView *m_animationImageView;
    UIImageView *m_animationView;
    UIView *m_packDescContainView;
    UIButton *m_useButton;
    NSString *m_clickRegionDesc;
    UILabel *m_serverDescLabel;
    UILabel *m_previewDescLabel;
    unsigned long m_scence;
    unsigned long m_clickFlag;
    WCDataItem *_m_dataItem;
    UIButton *_m_complainButton;
    UILabel *_m_animationLabel;
    StoreEmotionDeleteCgi *_m_deleteCgi;
    EmoticonStoreDetailRewardEntranceView *_rewardView;
    EmotionRewardResponseInfo *_m_rewardInfo;
    EmotionStoreDetailDesignerContainerView *_designerContainerView;
    UIView *_statementContainerView;
    StoreEmotionPageShareLogic *_shareLogic;
}

+ (id)genProductIdFromTimelineUserData:(id)arg1;
- (void).cxx_destruct;
- (void)OnBuyItemCancel:(id)arg1;
- (void)OnBuyItemFailed:(id)arg1;
- (void)OnBuyItemSuccess:(id)arg1;
- (void)OnCancelModalView:(id)arg1;
- (void)OnDownloadProgressChanged:(id)arg1 CurrLength:(unsigned int)arg2 TotalLength:(unsigned int)arg3;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnUpdateEmoticonPackageState:(id)arg1 toState:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)checkEmoticonBuyRet:(int)arg1;
- (BOOL)checkMsgControllerFrom:(id)arg1;
- (void)clickDesignerCell;
- (void)dealloc;
@property(retain, nonatomic) EmotionStoreDetailDesignerContainerView *designerContainerView; // @synthesize designerContainerView=_designerContainerView;
- (BOOL)hasNecessaryShareInfo;
- (void)initData;
- (void)initScrollView;
- (void)initView;
- (id)initWithPid:(id)arg1 Scence:(unsigned long)arg2;
- (id)initWithStoreSession:(id)arg1 StoreItem:(id)arg2 Scence:(unsigned long)arg3;
@property(retain, nonatomic) UIImageView *m_animationImageView; // @synthesize m_animationImageView;
@property(retain, nonatomic) UILabel *m_animationLabel; // @synthesize m_animationLabel=_m_animationLabel;
@property(retain, nonatomic) UIImageView *m_animationView; // @synthesize m_animationView;
@property(retain, nonatomic) NSMutableArray *m_arrEmoticon; // @synthesize m_arrEmoticon;
@property(retain, nonatomic) UIButton *m_button; // @synthesize m_button;
@property(retain, nonatomic) UIButton *m_cancelButton; // @synthesize m_cancelButton;
@property(nonatomic) unsigned long m_clickFlag; // @synthesize m_clickFlag;
@property(retain, nonatomic) NSString *m_clickRegionDesc; // @synthesize m_clickRegionDesc;
@property(retain, nonatomic) UIButton *m_complainButton; // @synthesize m_complainButton=_m_complainButton;
@property(retain, nonatomic) UILabel *m_copyrightLabel; // @synthesize m_copyrightLabel;
@property(retain, nonatomic) EmoticonStoreDetailCoverImageView *m_coverImageView; // @synthesize m_coverImageView;
@property(retain, nonatomic) WCDataItem *m_dataItem; // @synthesize m_dataItem=_m_dataItem;
@property(retain, nonatomic) StoreEmotionDeleteCgi *m_deleteCgi; // @synthesize m_deleteCgi=_m_deleteCgi;
@property(retain, nonatomic) UILabel *m_descLabel; // @synthesize m_descLabel;
@property(retain, nonatomic) UIView *m_downLoadStateView; // @synthesize m_downLoadStateView;
@property(nonatomic) unsigned long m_extrance; // @synthesize m_extrance;
@property(nonatomic) BOOL m_isGettingRewardInfo; // @synthesize m_isGettingRewardInfo=_m_isGettingRewardInfo;
@property(retain, nonatomic) UILabel *m_nameLabel; // @synthesize m_nameLabel;
@property(retain, nonatomic) UIView *m_packDescContainView; // @synthesize m_packDescContainView;
@property(retain, nonatomic) UILabel *m_previewDescLabel; // @synthesize m_previewDescLabel;
@property(retain, nonatomic) UIView *m_previewTipsLabel; // @synthesize m_previewTipsLabel;
@property(retain, nonatomic) UILabel *m_priceLabel; // @synthesize m_priceLabel;
@property(retain, nonatomic) EmotionProgressView *m_progressView; // @synthesize m_progressView;
@property(retain, nonatomic) EmotionRewardResponseInfo *m_rewardInfo; // @synthesize m_rewardInfo=_m_rewardInfo;
@property(nonatomic) unsigned long m_scence; // @synthesize m_scence;
@property(retain, nonatomic) UILabel *m_serverDescLabel; // @synthesize m_serverDescLabel;
@property(retain, nonatomic) UIButton *m_statementButton; // @synthesize m_statementButton;
@property(retain, nonatomic) EmoticonStoreItem *m_storeItem; // @synthesize m_storeItem;
@property(retain, nonatomic) NSString *m_storeSession; // @synthesize m_storeSession;
@property(retain, nonatomic) MMUIScrollView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) EmoticonStoreGridView *m_thumbGridView; // @synthesize m_thumbGridView;
@property(retain, nonatomic) UILabel *m_timeLabel; // @synthesize m_timeLabel;
@property(retain, nonatomic) UIButton *m_useButton; // @synthesize m_useButton;
- (void)makeBuyButton:(id)arg1 item:(id)arg2;
- (struct CGPoint)makeContainerView:(id)arg1 item:(id)arg2;
- (struct CGPoint)makeCopyRightCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)makeCoverImage:(id)arg1 item:(id)arg2;
- (struct CGPoint)makeCoverImageCell:(id)arg1;
- (struct CGPoint)makeDescCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)makeDesignerCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)makeEmoticonsCell:(id)arg1 rowEmoticons:(id)arg2 Previews:(id)arg3 marginPoint:(struct CGPoint)arg4;
- (void)makePackNameLabel:(id)arg1 item:(id)arg2;
- (void)makePackPriceLabel:(id)arg1 item:(id)arg2;
- (void)makePackTimeLabel:(id)arg1 item:(id)arg2;
- (void)makePackTypeLabel:(id)arg1 item:(id)arg2;
- (struct CGPoint)makePreviewTipCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)makeRewardCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (void)makeServerDescLabel:(id)arg1 item:(id)arg2;
- (struct CGPoint)makeStatementCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (void)makeUseButton:(id)arg1 item:(id)arg2;
- (BOOL)needJudgeClickFlag;
@property(nonatomic) BOOL needScrollToBottom; // @synthesize needScrollToBottom=_needScrollToBottom;
- (void)onCancelDownloadBtnClick;
- (void)onClickComplainButton;
- (void)onGetEmoticonDownloadFlag:(unsigned long)arg1 andButtonDesc:(id)arg2;
- (void)onGetEmotionRewardFinishedWithPid:(id)arg1 RewardInfo:(id)arg2;
- (void)onLawBtnClick;
- (void)onOperate:(id)arg1;
- (void)onPurchaseBtnClick;
- (void)onRewardButtonClick;
- (void)onShowAllDonorsButtonClick;
- (void)onState:(int)arg1;
- (void)onStoreEmotionDeleteCgiFailed:(id)arg1;
- (void)onStoreEmotionDeleteCgiOK:(id)arg1;
- (void)onStoreEmotionRewardCompleteOkWithPid:(id)arg1 RewardInfo:(id)arg2;
- (BOOL)recurisiveCheckMsgControllerToRootFrom:(id)arg1;
- (void)refreshPriceLabelString;
- (void)reportDownload;
@property(retain, nonatomic) EmoticonStoreDetailRewardEntranceView *rewardView; // @synthesize rewardView=_rewardView;
- (void)setScene:(int)arg1 andType:(int)arg2;
@property(retain, nonatomic) StoreEmotionPageShareLogic *shareLogic; // @synthesize shareLogic=_shareLogic;
@property(retain, nonatomic) UIView *statementContainerView; // @synthesize statementContainerView=_statementContainerView;
- (BOOL)showExpiredButton;
- (BOOL)showServerDescLabel;
- (void)tryGetRewardInfo;
- (struct CGPoint)updateBuyButton:(struct CGPoint)arg1;
- (struct CGPoint)updateContainerView:(struct CGPoint)arg1;
- (struct CGPoint)updateCopyRight:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)updateCoverImageView:(struct CGPoint)arg1;
- (struct CGPoint)updateDescCell:(id)arg1 marginPoint:(struct CGPoint)arg2;
- (struct CGPoint)updateDescView:(struct CGPoint)arg1;
- (struct CGPoint)updateDesignerView:(struct CGPoint)arg1;
- (struct CGPoint)updateGridView:(id)arg1 WithEmoticons:(id)arg2 Previews:(id)arg3;
- (struct CGPoint)updateNameLabel:(struct CGPoint)arg1;
- (struct CGPoint)updatePackNameLabel:(id)arg1 item:(id)arg2 marginPoint:(struct CGPoint)arg3;
- (struct CGPoint)updatePackTimeLabel:(id)arg1 item:(id)arg2 marginPoint:(struct CGPoint)arg3;
- (void)updatePackTypeView:(struct CGPoint)arg1;
- (struct CGPoint)updatePreviewGridView:(struct CGPoint)arg1;
- (struct CGPoint)updatePreviewTipCell:(struct CGPoint)arg1;
- (struct CGPoint)updatePreviewTipsView:(struct CGPoint)arg1;
- (struct CGPoint)updatePriceLabel:(struct CGPoint)arg1;
- (void)updateReportButton;
- (struct CGPoint)updateRewardViewWithMarginPoint:(struct CGPoint)arg1;
- (void)updateRightBarButton;
- (void)updateScrollView;
- (struct CGPoint)updateServerDescLabel:(struct CGPoint)arg1;
- (struct CGPoint)updateStatementMarginPoint:(struct CGPoint)arg1;
- (void)updateSubViewsMarginWithContainViewHeight:(float)arg1;
- (struct CGPoint)updateTimeLabel:(struct CGPoint)arg1;
- (struct CGPoint)updateTypeLabel:(struct CGPoint)arg1;
- (struct CGPoint)updateUseButton:(struct CGPoint)arg1;
- (void)useThisEmoticon;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillBePoped:(BOOL)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

