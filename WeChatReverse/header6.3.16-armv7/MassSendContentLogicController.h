//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMsgContentLogicController.h"

#import "IUiUtilExt.h"

@class NSString, UIImageView;

@interface MassSendContentLogicController : BaseMsgContentLogicController <IUiUtilExt>
{
    BOOL m_bNeedIntroView;
    UIImageView *_toolView;
}

- (void).cxx_destruct;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)CanOpenServiceAppList;
- (BOOL)CanRotateOrientation;
- (BOOL)CanSelectMyFavoritesItemForSendingMsg;
- (BOOL)CanSend3rdMsg;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned long)arg2 ToID:(unsigned long)arg3;
- (void)CustomToolViewEX:(id)arg1;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned long)arg2 Limit:(unsigned long)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetMsg:(id)arg1 FromID:(unsigned long)arg2 Limit:(unsigned long)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OpenDetailInfo;
- (void)Register;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)StopPlaying;
- (void)UnRegister;
- (void)ViewDidInit;
- (void)ViewWillInit;
- (void)deleteAllMsg;
- (void)handleToolView;
- (void)initIntroView;
- (void)initToolView;
- (BOOL)isShakeEnabled;
- (void)onMassSendSendAgain:(id)arg1;
- (void)onNewMassSend:(id)arg1;
- (void)onPopFromNavigationController;
- (void)onTopBarFrameChanged;
- (void)reloadIntroView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
