//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "EmoticonBackupOperateMgrExt.h"
#import "MMTipsViewControllerDelegate.h"
#import "StoreEmotionExchangeEmotionPackCgiDelegate.h"

@class AddEmoticonWrap, MMToastViewController, NSString, StoreEmotionExchangeEmotionPackCgi;

@interface EmoticonCustomManageAddLogic : MMObject <MMTipsViewControllerDelegate, StoreEmotionExchangeEmotionPackCgiDelegate, EmoticonBackupOperateMgrExt>
{
    BOOL m_isAdding;
    BOOL m_isExchanging;
    AddEmoticonWrap *m_emoticonWrap;
    MMToastViewController *m_toastView;
    StoreEmotionExchangeEmotionPackCgi *m_exchangePackCgi;
    id <MMUIViewControllerDelegate><EmoticonCustomManageAddLogicDelegate> _delegate;
}

+ (id)extInfoForAppid:(id)arg1 DesignerId:(id)arg2 thumbImgUrl:(id)arg3;
+ (id)typeNumberForImageData:(id)arg1;
- (void).cxx_destruct;
- (BOOL)checkTotalCountLimit;
- (void)dealloc;
@property(nonatomic) __weak id <MMUIViewControllerDelegate><EmoticonCustomManageAddLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
@property(readonly, nonatomic) BOOL isAdding;
- (void)onAddBackupEmoticonFailed:(id)arg1 isOverLimit:(BOOL)arg2;
- (void)onAddBackupEmoticonOK:(id)arg1;
- (void)onClickTipsBtn:(id)arg1 Index:(int)arg2;
- (void)onExchangeEmotionPackCgiFailedForNoResponseWithPid:(id)arg1;
- (void)onExchangeEmotionPackCgiFailedWithPid:(id)arg1 AndRet:(int)arg2;
- (void)onExchangeEmotionPackCgiOkWithPid:(id)arg1 DownloadInfo:(id)arg2;
- (void)showComfirmTipsWithWording:(id)arg1;
- (void)showExtendLimitTipsWithWording:(id)arg1;
- (void)showSavedTips;
- (BOOL)startAddEmoticonWithWrap:(id)arg1;
- (BOOL)startAddEmoticonWithWrap:(id)arg1 NeedCheckTotalCountLimit:(BOOL)arg2;
- (BOOL)startExchangePackAndAddEmoticonWithWrap:(id)arg1;
- (void)tryDownloadThumbImage;
- (void)trySaveThumbImage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

