//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, WXCMultiTalkGroup;

@protocol MultiTalkMainViewControllerDelegate <NSObject>

@optional
- (void)onMultiTalkMainViewControllerAcceptWithGroup:(WXCMultiTalkGroup *)arg1;
- (void)onMultiTalkMainViewControllerAddNewMemberArray:(NSArray *)arg1 withGroup:(WXCMultiTalkGroup *)arg2;
- (void)onMultiTalkMainViewControllerCancelJoinWithGroup:(WXCMultiTalkGroup *)arg1;
- (void)onMultiTalkMainViewControllerClickedCollapseButton;
- (void)onMultiTalkMainViewControllerCloseVideoSendAndRecv;
- (void)onMultiTalkMainViewControllerCollapseAnimationDidEnd;
- (void)onMultiTalkMainViewControllerCollapseAnimationWillStart;
- (void)onMultiTalkMainViewControllerExtendFromCollapseAnimationDidEnd;
- (void)onMultiTalkMainViewControllerExtendFromCollapseAnimationWillStart;
- (void)onMultiTalkMainViewControllerFlipCamera;
- (void)onMultiTalkMainViewControllerHangupWithGroup:(WXCMultiTalkGroup *)arg1;
- (void)onMultiTalkMainViewControllerHoldMultiTalkAudio;
- (void)onMultiTalkMainViewControllerMicButtonSeclect:(BOOL)arg1;
- (void)onMultiTalkMainViewControllerQuitAnimationDidEnd;
- (void)onMultiTalkMainViewControllerQuitAnimationWillStart;
- (void)onMultiTalkMainViewControllerReceiveCancelCall:(WXCMultiTalkGroup *)arg1;
- (void)onMultiTalkMainViewControllerReceiveTimeOutWithGroup:(WXCMultiTalkGroup *)arg1;
- (void)onMultiTalkMainViewControllerRecoverVideoOn:(BOOL)arg1;
- (void)onMultiTalkMainViewControllerRejectWithGroup:(WXCMultiTalkGroup *)arg1;
- (BOOL)onMultiTalkMainViewControllerRequestLocalVideoDeviceStatus;
- (struct CGRect)onMultiTalkMainViewControllerRequestMinimizeFrame;
- (void)onMultiTalkMainViewControllerResumeMultiTalkAudio;
- (BOOL)onMultiTalkMainViewControllerShouldBlockReceiveVideo;
- (void)onMultiTalkMainViewControllerSpeakerButtonSeclect:(BOOL)arg1;
- (void)onMultiTalkMainViewControllerUpdateMessageWith:(WXCMultiTalkGroup *)arg1 duration:(unsigned long)arg2 messageId:(unsigned int)arg3;
- (void)onMultiTalkMainViewControllerVideoSelected:(BOOL)arg1;
@end
