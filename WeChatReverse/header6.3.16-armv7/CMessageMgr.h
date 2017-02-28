//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IAudioToMessageExt.h"
#import "IClearDataMgrExt.h"
#import "IEmoticonExt.h"
#import "IMessageWrapImgExt.h"
#import "IMsgExt.h"
#import "IVideoExt.h"
#import "MMKernelExt.h"
#import "MMService.h"
#import "MessageObserverDelegate.h"
#import "MessageWrapImgDelegate.h"
#import "OpenDownloadCDNMgrDelegate.h"
#import "OpenUploadCDNMgrDelegate.h"
#import "OpenUploadMgrDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "RecordUploadCDNMgrDelegate.h"
#import "UploadImageCDNMgrDelegate.h"

@class CDownloadVideoMgr, CEmoticonDownloadMgr, CEmoticonUploadMgr, CMessageDB, CUploadVideoMgr, DownloadImageCDNMgr, DownloadImageMgr, DownloadVideoCDNMgr, MessagePatternCacheMgr, NSDate, NSMutableDictionary, NSObject<OS_dispatch_semaphore>, NSString, OpenDownloadCDNMgr, OpenDownloadMgr, OpenUploadCDNMgr, OpenUploadMgr, RecordDownloadCDNMgr, RecordUploadCDNMgr, ShortVideoDownloadMgr, ThumbDownloadMgr, UploadImageCDNMgr, UploadImageMgr, UploadVideoCDNMgr;

@interface CMessageMgr : MMService <IMessageWrapImgExt, IClearDataMgrExt, MessageWrapImgDelegate, MessageObserverDelegate, MMService, IAudioToMessageExt, IVideoExt, IEmoticonExt, PBMessageObserverDelegate, MMKernelExt, IMsgExt, UploadImageCDNMgrDelegate, OpenDownloadCDNMgrDelegate, OpenUploadMgrDelegate, OpenUploadCDNMgrDelegate, RecordUploadCDNMgrDelegate>
{
    CMessageDB *m_oMsgDB;
    CUploadVideoMgr *m_oUploadVideoMgr;
    CDownloadVideoMgr *m_oDownloadVideoMgr;
    CEmoticonUploadMgr *m_oEmoticonUploadMgr;
    CEmoticonDownloadMgr *m_oEmoticonDownloadMgr;
    BOOL m_bCheckQueue;
    OpenUploadMgr *m_oOpenUploadMgr;
    OpenDownloadMgr *m_oOpenDownloadMgr;
    MessagePatternCacheMgr *m_oMessagePatternMgr;
    UploadImageMgr *m_oUploadImageMgr;
    DownloadImageMgr *m_oDownloadImageMgr;
    UploadImageCDNMgr *m_oUploadImageCdnMgr;
    DownloadImageCDNMgr *m_oDownloadImageCdnMgr;
    ThumbDownloadMgr *m_oThumbDownloadMgr;
    UploadVideoCDNMgr *m_oUploadVideoCdnMgr;
    DownloadVideoCDNMgr *m_oDownloadVideoCdnMgr;
    ShortVideoDownloadMgr *m_oShortVideoDownloadMgr;
    OpenUploadCDNMgr *m_oOpenUploadCDNMgr;
    OpenDownloadCDNMgr *m_oOpenDownloadCDNMgr;
    RecordUploadCDNMgr *m_oRecordUploadCDNMgr;
    RecordDownloadCDNMgr *m_oRecordDownloadCDNMgr;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSDate *m_dateLastNotifySentFail;
    NSMutableDictionary *m_dicSentFailMsg;
    BOOL _m_bIsMacHelperHasNewChanges;
}

+ (id)GetPathOfOpenUploadCDNFile;
+ (id)GetPathOfOpenUploadFile;
- (void).cxx_destruct;
- (void)AddAppMsg:(id)arg1 MsgWrap:(id)arg2 Data:(id)arg3 Scene:(unsigned long)arg4;
- (void)AddAppMsg:(id)arg1 MsgWrap:(id)arg2 DataPath:(id)arg3 Scene:(unsigned long)arg4;
- (BOOL)AddBackupMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddEmoticonMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddFloatBottle:(id)arg1 MsgWrap:(id)arg2;
- (void)AddHelloMsg:(id)arg1 MsgWrap:(id)arg2 HelloUser:(id)arg3 OpCode:(unsigned long)arg4 DES:(unsigned long)arg5 checkCreateTime:(BOOL)arg6 status:(unsigned long)arg7;
- (void)AddHelloMsgList:(id)arg1 MsgList:(id)arg2;
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 fixTime:(BOOL)arg3 NewMsgArriveNotify:(BOOL)arg4;
- (void)AddLocalMsg:(id)arg1 MsgWrap:(id)arg2 fixTime:(BOOL)arg3 NewMsgArriveNotify:(BOOL)arg4 Unique:(BOOL)arg5;
- (void)AddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddMsgPattern:(id)arg1;
- (void)AddPimMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddRecordMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddShortVideoLocalMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3 MsgType:(unsigned long)arg4;
- (void)AddShortVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3;
- (void)AddUniqueLocalMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AddVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3;
- (void)AddVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3 MsgType:(unsigned long)arg4;
- (void)AsyncOnAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AsyncOnAddMsgForSession:(id)arg1 MsgWrap:(id)arg2;
- (void)AsyncOnAddMsgForSession:(id)arg1 MsgWrap:(id)arg2 NewMsgArriveNotify:(BOOL)arg3;
- (void)AsyncOnAddMsgListForSession:(id)arg1 NotifyUsrName:(id)arg2;
- (void)AsyncOnCheckQQ;
- (void)AsyncOnDelMsg:(id)arg1;
- (void)AsyncOnDelMsg:(id)arg1 DelAll:(BOOL)arg2;
- (void)AsyncOnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AsyncOnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AsyncOnMsgNotAddDBSession:(id)arg1 MsgList:(id)arg2;
- (void)AsyncOnNotAddDBMessage:(id)arg1 MsgWrap:(id)arg2;
- (void)AsyncOnPreAddMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)AsyncOnPushMsg:(id)arg1;
- (void)AsyncOnSendVoiceError:(id)arg1 MsgWrap:(id)arg2 ErroNO:(unsigned long)arg3;
- (void)AsyncOnSpecialSession:(id)arg1 MsgList:(id)arg2;
- (void)AsyncOnUnReadChange:(id)arg1;
- (void)BackGroundAddHelloMsg:(id)arg1;
- (BOOL)BeginTransaction;
- (void)CheckMessageStatus:(id)arg1 Msg:(id)arg2;
- (void)CheckQQPwd;
- (void)CheckQueue;
- (BOOL)ClearHelloUnRead:(id)arg1 HelloUser:(id)arg2;
- (void)ClearUnRead:(id)arg1 FromID:(unsigned long)arg2 ToID:(unsigned long)arg3;
- (void)ClearUnreadForSync:(id)arg1 CreateTime:(unsigned long)arg2;
- (BOOL)CommitTransaction;
- (id)DBContext;
- (void)DelHelloMsg:(id)arg1 HelloUser:(id)arg2;
- (void)DelMsg:(id)arg1 MsgList:(id)arg2 DelAll:(BOOL)arg3;
- (void)DelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)DelMsgPatten:(id)arg1 MsgWrap:(id)arg2;
- (void)DropChatTable:(id)arg1;
- (unsigned long)GetAllMesCount:(id)arg1;
- (id)GetAppMsgList:(id)arg1 AfterID:(unsigned long)arg2 CreateTime:(unsigned long)arg3 Limit:(unsigned long)arg4;
- (id)GetAppMsgList:(id)arg1 FromID:(unsigned long)arg2 CreateTime:(unsigned long)arg3 Limit:(unsigned long)arg4;
- (unsigned long)GetCountInHello:(id)arg1;
- (id)GetDownMsg:(id)arg1 FromID:(unsigned long)arg2 Limit:(unsigned long)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetDownMsgByCreateTime:(id)arg1 FromID:(unsigned long)arg2 FromCreateTime:(unsigned long)arg3 Limit:(unsigned long)arg4 LeftCount:(unsigned int *)arg5;
- (unsigned long)GetDownloadImagePartLen:(id)arg1;
- (unsigned long)GetDownloadImageTotalLen:(id)arg1;
- (unsigned long)GetDownloadThumbStatus:(id)arg1;
- (id)GetFirstMsgByCreateTime:(id)arg1 FromID:(unsigned long)arg2 FromCreateTime:(unsigned long)arg3 Limit:(unsigned long)arg4 LeftCount:(unsigned int *)arg5;
- (id)GetFirstUnreadMsg:(id)arg1;
- (id)GetHelloMsg:(id)arg1 HelloUser:(id)arg2 Limit:(unsigned long)arg3 OnlyTo:(BOOL)arg4;
- (id)GetHelloUsers:(id)arg1 Limit:(unsigned long)arg2 OnlyUnread:(BOOL)arg3;
- (id)GetImgAndVideoMsgList:(id)arg1;
- (id)GetImgLastMsg:(id)arg1;
- (id)GetImgLastMsg:(id)arg1 FromID:(unsigned long)arg2 CreateTime:(unsigned long)arg3;
- (unsigned long)GetImgMsgCount:(id)arg1;
- (unsigned long)GetImgMsgCount:(id)arg1 FromID:(unsigned long)arg2 CreateTime:(unsigned long)arg3;
- (id)GetImgMsgList:(id)arg1;
- (id)GetImgNextMsg:(id)arg1 FromID:(unsigned long)arg2 CreateTime:(unsigned long)arg3;
- (id)GetImgOrVideoLastMsg:(id)arg1;
- (unsigned long)GetImgOrVideoMsgCount:(id)arg1;
- (unsigned long)GetImgOrVideoMsgCount:(id)arg1 FromID:(unsigned long)arg2 CreateTime:(unsigned long)arg3;
- (id)GetImgOrVideoOrAppLastMsg:(id)arg1 FromID:(unsigned long)arg2 CreateTime:(unsigned long)arg3 Limit:(unsigned long)arg4;
- (id)GetImgOrVideoOrAppNextMsg:(id)arg1 FromID:(unsigned long)arg2 CreateTime:(unsigned long)arg3 Limit:(unsigned long)arg4;
- (id)GetLastInsertMsg:(id)arg1;
- (id)GetLastMsg:(id)arg1;
- (id)GetLastMsgByCreateTime:(id)arg1 FromID:(unsigned long)arg2 FromCreateTime:(unsigned long)arg3 Limit:(unsigned long)arg4 LeftCount:(unsigned int *)arg5;
- (id)GetLastMsgFromUsr:(id)arg1;
- (id)GetLastMsgToUsr:(id)arg1;
- (unsigned long)GetMesCount:(id)arg1 MesType:(unsigned long)arg2;
- (id)GetMsg:(id)arg1 BizMsgClientID:(id)arg2;
- (id)GetMsg:(id)arg1 FromID:(unsigned long)arg2 Limit:(unsigned long)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetMsg:(id)arg1 LocalID:(unsigned long)arg2;
- (id)GetMsg:(id)arg1 n64SvrID:(long long)arg2;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned long)arg2 FromCreateTime:(unsigned long)arg3 Limit:(unsigned long)arg4 LeftCount:(unsigned int *)arg5;
- (id)GetMsgByCreateTime:(id)arg1 FromID:(unsigned long)arg2 FromCreateTime:(unsigned long)arg3 Limit:(unsigned long)arg4 LeftCount:(unsigned int *)arg5 FromSequence:(unsigned long)arg6;
- (id)GetRealChatName:(id)arg1;
- (id)GetRevokeMsgBySvrId:(long long)arg1;
- (unsigned long)GetSayHelloStatus:(id)arg1 LocalID:(unsigned long)arg2;
- (id)GetTextMsg:(id)arg1 FromID:(unsigned long)arg2 Limit:(unsigned long)arg3 LeftCount:(unsigned int *)arg4 LeftUnreadCount:(unsigned int *)arg5;
- (id)GetTextMsg:(id)arg1 FromID:(unsigned long)arg2 ToID:(unsigned long)arg3;
- (unsigned long)GetTextMsgCount:(id)arg1 FromID:(unsigned long)arg2 ToID:(unsigned long)arg3;
- (unsigned long)GetUnReadCount:(id)arg1;
- (unsigned long)GetUnReadCountInHello:(id)arg1;
- (unsigned long)GetUploadPercent:(id)arg1;
- (void)HandleMsgList:(id)arg1 MsgList:(id)arg2;
- (void)HandleSvrCmd:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)InAppAttachDownloading:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)InAppAttachDownloading:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3;
- (void)InitMsgMgr:(id)arg1 Lock:(id)arg2;
- (BOOL)InternalStartDownloadShortVideo:(id)arg1 AutoDownload:(BOOL)arg2;
- (BOOL)IsImageMsgUploadIng:(id)arg1;
- (BOOL)IsRecordMsgDownloading:(id)arg1;
- (BOOL)IsRecordMsgUploading:(id)arg1;
- (BOOL)IsVideoMsgUploadIng:(id)arg1;
- (BOOL)IsVideoMsgdDownloadIng:(id)arg1;
- (void)MainThreadNotifyToExt:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)MessageReturn:(unsigned long)arg1 MessageInfo:(id)arg2 Event:(unsigned long)arg3;
- (void)ModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned long)arg3;
- (void)ModMsgWithoutNotify:(id)arg1 MsgWrap:(id)arg2;
- (void)ModVoipMsgStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnAddMessageByReceiver:(id)arg1;
- (void)OnAddMessageBySender:(id)arg1;
- (void)OnErrorByReceiver:(id)arg1 ErrNo:(int)arg2;
- (void)OnErrorBySender:(id)arg1 ErrNo:(int)arg2;
- (void)OnMessageSentBySender:(id)arg1;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (id)QueryMsgFromChat:(id)arg1 queryText:(id)arg2 FromID:(unsigned long)arg3 FromCreateTime:(unsigned long)arg4 Limit:(unsigned long)arg5 LeftCount:(unsigned int *)arg6;
- (void)ResendMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ResendRecordMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)ResendSightMsg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)RevokeMsg:(id)arg1 MsgWrap:(id)arg2 Counter:(unsigned long)arg3;
- (BOOL)RollbackTransaction;
- (BOOL)SaveMesImg:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)SaveMesVoice:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)SaveMsgThumb:(id)arg1 MsgWrap:(id)arg2;
- (void)SetEmoticonGameEnd:(id)arg1 MsgWrap:(id)arg2;
- (void)SetGetLocationEnd:(id)arg1 MsgWrap:(id)arg2;
- (BOOL)SetSayHelloStatus:(id)arg1 LocalID:(unsigned long)arg2 Status:(unsigned long)arg3;
- (void)StartDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2;
- (void)StartDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2 AttachId:(id)arg3 AttachDataSize:(unsigned long)arg4 AttachFileExt:(id)arg5;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2;
- (void)StartDownloadByRecordData:(id)arg1 DataId:(id)arg2 thumb:(BOOL)arg3 data:(BOOL)arg4;
- (void)StartDownloadByRecordMsg:(id)arg1;
- (void)StartDownloadEmoticon:(id)arg1 MsgWrap:(id)arg2;
- (void)StartDownloadImage:(id)arg1 HD:(BOOL)arg2 AutoDownload:(BOOL)arg3;
- (void)StartDownloadShortVideo:(id)arg1;
- (BOOL)StartDownloadThumb:(id)arg1;
- (void)StartDownloadVideo:(id)arg1 MsgWrap:(id)arg2;
- (void)StartUploadAppMsg:(id)arg1 MsgWrap:(id)arg2 Scene:(unsigned long)arg3;
- (void)StartUploadVideo:(id)arg1 MsgWrap:(id)arg2;
- (void)StopDownloadAppAttach:(id)arg1 MsgWrap:(id)arg2;
- (void)StopDownloadImage:(id)arg1;
- (void)StopDownloadRecordMsg:(id)arg1;
- (void)StopDownloadVideo:(id)arg1 MsgWrap:(id)arg2;
- (void)StopDownloadVideoByChatName:(id)arg1;
- (void)StopUploadRecordMsg:(id)arg1;
- (void)StopUploadRecordMsgByUsername:(id)arg1;
- (void)StopUploadVideo:(id)arg1 MsgWrap:(id)arg2;
- (void)StopUploadVideoByChatName:(id)arg1;
- (void)UpdateEmoticonMsg:(id)arg1;
- (void)UpdateMessage:(id)arg1 MsgWrap:(id)arg2;
- (void)UpdateVideoMsg:(id)arg1;
- (void)UpdateVideoStatus:(id)arg1;
- (void)UpdateVoiceMessage:(id)arg1 MsgWrap:(id)arg2;
- (void)UpdateVoiceStatus:(id)arg1 LocalID:(unsigned long)arg2 DownloadStatus:(unsigned long)arg3;
- (void)addAutoCleanTask;
- (id)backupGetMsg:(id)arg1 n64SvrID:(long long)arg2;
- (BOOL)backupMsgSrvIDExit:(id)arg1 MsgWrap:(id)arg2;
- (void)dealloc;
- (void)enterBackground;
- (void)enterForeground;
- (id)escapeKeywordForQueryString:(id)arg1;
- (id)getSemaphore;
- (id)getSentFailMsgs;
- (id)init;
- (BOOL)isChatStatusNotifyOpenForMsgWrap:(id)arg1;
- (BOOL)isContact:(id)arg1 ConfirmToQueryString:(id)arg2;
@property(nonatomic) BOOL m_bIsMacHelperHasNewChanges; // @synthesize m_bIsMacHelperHasNewChanges=_m_bIsMacHelperHasNewChanges;
- (void)onAuthOK;
- (void)onDiskStorageWarningCleanedSize:(unsigned int *)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned int *)arg1 CacheMask:(unsigned long)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned int *)arg1 subQueue:(id)arg2;
- (void)onDownOpenMsgModMsg:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned long)arg3;
- (void)onGetBigImageErrorWithWrap:(id)arg1;
- (void)onGetBigImageResultWithWrap:(id)arg1 image:(id)arg2 imageData:(id)arg3 isSaveImgOK:(char *)arg4;
- (id)onGetMsg:(id)arg1 LocalID:(unsigned long)arg2 Wrap:(id)arg3;
- (void)onModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned long)arg3;
- (void)onRevokeMsg:(id)arg1;
- (void)onRevokeMsgCgiReturn:(id)arg1;
- (void)onServiceClearData;
- (void)onServiceInit;
- (BOOL)onServiceMemoryWarning;
- (void)onUploadAppMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned long)arg3;
- (void)onUploadCDNAppMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned long)arg3;
- (void)onUploadCDNRecordMsgModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned long)arg3;
- (void)onUploadImageCheckQQ;
- (void)onUploadImageModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)onUploadImageModMsgByBitSet:(id)arg1 MsgWrap:(id)arg2 BitSet:(unsigned long)arg3;
- (void)onUploadImageRequestWithWrap:(id)arg1;
- (void)reSendAllMsgFromNotificationDone;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

