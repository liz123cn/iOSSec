//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WeixinContentLogicController.h"

#import "BrandDeviceConnectLogicControllerDelegate.h"
#import "BrandStyleUILogicControllerDelegate.h"
#import "IWCDeviceBrandMgrExt.h"
#import "MsgDelegate.h"

@class BrandActionReportLogicController, BrandDeviceConnectLogicController, BrandPublicWifiReportLogicController, BrandStyleUILogicController, NSString, TipsView;

@interface BrandContentLogicController : WeixinContentLogicController <BrandStyleUILogicControllerDelegate, MsgDelegate, BrandDeviceConnectLogicControllerDelegate, IWCDeviceBrandMgrExt>
{
    TipsView *m_tipsView;
    BrandStyleUILogicController *m_uiLogicController;
    BrandActionReportLogicController *m_reportLogicController;
    BrandDeviceConnectLogicController *m_connectLogicController;
    BrandPublicWifiReportLogicController *m_publicWifiReportLogicController;
    BOOL m_isLastInMenuMode;
    int m_lastInputMode;
    int m_lastPoisitionMode;
    int m_lastContentMode;
    BOOL m_shouldRecordToolViewStatus;
    BOOL m_isShowKeyboardImmediately;
    unsigned int m_stat_beforeUnread;
    unsigned long m_stat_timeStart;
}

- (void).cxx_destruct;
- (BOOL)CanRemoteRecord;
- (BOOL)CanSendMultiImage;
- (BOOL)CanSendOriginalImage;
- (BOOL)CanSendVideoMsg;
- (BOOL)CanSendVoipMsg;
- (BOOL)CanShowSight;
- (BOOL)CanWXTalk;
- (void)CustomToolViewEX:(id)arg1;
- (id)FormImageMsg:(id)arg1 withImage:(id)arg2 withData:(id)arg3;
- (id)GetPossibleContactByName:(id)arg1;
- (id)GetRightBarButtonImageName;
- (id)GetTitleTailImage;
- (void)HasCustomInputToolViewAndDontNeedShowToolView:(char *)arg1;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OpenContactInfo:(id)arg1;
- (void)OpenDetailInfo;
- (void)ViewDidAppear;
- (void)ViewDidInit;
- (void)ViewWillAppear;
- (void)ViewWillDisappear;
- (void)ViewWillInit;
- (BOOL)canAutoplayWhenMessageDownloaded;
- (void)connectDevice;
- (void)createAllLogicForContact:(id)arg1;
- (void)dealloc;
- (void)disconnectDevice;
- (void)displayDeviceListView:(id)arg1;
- (float)getCustomizedAreaWidth;
- (id)getInputToolView;
- (id)getLogicController;
- (unsigned long)getMsgCountToLoad;
- (id)getTitleView:(id)arg1 withSubTitle:(id)arg2;
- (BOOL)hasHardDeviceBrandSubtitle;
- (void)hasTapReaderNodeView;
- (void)hideErrTips;
- (id)init;
- (BOOL)isShakeEnabled;
- (BOOL)isShowHeadImage:(id)arg1;
- (void)onFinishSelectedLocation;
- (void)onModifyContact:(id)arg1;
- (void)onModifyCustomMenu:(id)arg1;
- (void)onPopFromNavigationController;
- (void)onTipsViewClick:(id)arg1;
- (void)onWCDeviceAuthEnd:(int)arg1 DID:(long long)arg2 isHandled:(char *)arg3;
- (void)processImageDidCancel;
- (void)processImageDidFinish;
- (void)processInsertedAsset:(id)arg1;
- (void)recordToolViewStatus;
- (void)resetUILogicController:(id)arg1;
- (void)setNeedUpdateTitle:(char *)arg1;
- (BOOL)shouldHideOrginInputToolView;
- (void)showErrTips:(int)arg1;
- (BOOL)showKeyboardImmediately;
- (void)showKeyboardImmediatelyEnd;
- (void)showKeyboardImmediatelyStart;
- (void)startScan;
- (void)tryStartDownloadWebcacheForLastMsg;
- (void)updateContactFromServer;
- (void)updateSubTitle:(id)arg1;
- (void)updateToolViewStatus;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

