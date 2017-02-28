//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSData, NSMutableArray, NSString, WXCMultiTalkGroup;

@protocol WXCMultiTalkApiDelegate
- (void)OnSysCallNotifyInterrupt:(int)arg1;
- (void)OnVideoStateChange:(BOOL)arg1 VideoOn:(BOOL)arg2;
- (void)onAddMultiTalkMemberResult:(BOOL)arg1 groupInfo:(WXCMultiTalkGroup *)arg2;
- (void)onCancelCreateMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onCreateMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onEnterMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onErr:(int)arg1;
- (void)onInviteMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onMemberChange:(WXCMultiTalkGroup *)arg1;
- (void)onMultiTalkAudioDevicePlugin;
- (void)onMultiTalkAudioDeviceUnPlugin;
- (void)onMultiTalkDeviceLauchSuccess;
- (void)onMultiTalkReady;
- (void)onMultiTalkRedirectOk;
- (void)onMuteStateChange:(BOOL)arg1;
- (void)onOtherDeviceHandleTalk:(NSString *)arg1;
- (void)onReawakeFriendOrSendPokerToFriendResult:(BOOL)arg1;
- (void)onReceiveMissMultiTalk:(WXCMultiTalkGroup *)arg1;
- (void)onReceiveMutilTalkPokerMsg;
- (void)onReceiveReawakeOrPokerMsg:(WXCMultiTalkGroup *)arg1 extData:(NSData *)arg2;
- (void)onReceiveVideoMemberChangeMsg:(WXCMultiTalkGroup *)arg1 extArray:(NSMutableArray *)arg2;
- (void)onRespActiveGroupBriefInfoList:(NSArray *)arg1 isSuccess:(BOOL)arg2;
- (void)onSpeakerStateChange:(BOOL)arg1;
- (void)onVideoData:(unsigned long)arg1 Bgra:(char *)arg2 Width:(unsigned long)arg3 Height:(unsigned long)arg4 frontCamera:(BOOL)arg5;
@end

