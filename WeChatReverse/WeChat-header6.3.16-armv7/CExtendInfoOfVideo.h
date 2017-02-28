//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMessageWrapExt.h"
#import "IMsgExtendOperation.h"
#import "NSCopying.h"

@class CMessageWrap, NSString;

@interface CExtendInfoOfVideo : NSObject <IMessageWrapExt, IMsgExtendOperation, NSCopying>
{
    unsigned long m_uiVideoLen;
    unsigned long m_uiVideoTime;
    unsigned long m_uiUploadStatus;
    unsigned long m_uiVideoOffset;
    unsigned long m_uiCameraType;
    unsigned long m_uiVideoSource;
    NSString *m_nsAesKey;
    NSString *m_nsMsgDataUrl;
    NSString *m_nsMsgThumbUrl;
    NSString *m_nsMsgThumbAesKey;
    unsigned long m_uiMsgThumbSize;
    unsigned long m_uiMsgThumbWidth;
    unsigned long m_uiMsgThumbHeight;
    NSString *m_nsStatExtStr;
    NSString *m_nsCommentUrl;
    NSString *m_nsFileParam;
    NSString *m_nsStreamVideoUrl;
    unsigned long m_uiStreamVideoTime;
    NSString *m_nsStreamVideoTitle;
    NSString *m_nsStreamVideoWording;
    NSString *m_nsStreamVideoWebUrl;
    NSString *m_nsStreamVideoThumbUrl;
    NSString *m_nsStreamVideoPublishId;
    NSString *m_nsStreamVideoAdUxInfo;
    CMessageWrap *m_refMessageWrap;
}

+ (void)CreateExtendInfoWithType:(unsigned long)arg1 retExtendInfo:(id *)arg2;
+ (void)CreateVideoMsg:(id)arg1 ToUsr:(id)arg2 VideoInfo:(id)arg3 MsgType:(unsigned long)arg4 retMessageWrap:(id *)arg5;
- (void).cxx_destruct;
- (void)ChangeForBackup;
- (void)ChangeForDisplay;
- (id)GetDownloadThumbPath;
- (id)GetThumbPath;
- (BOOL)IsDownloadEnded;
- (BOOL)IsUnPlayed;
- (void)SetPlayed;
- (void)UpdateContent:(id)arg1;
- (void)UpdateVideoStatus:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsCommentUrl; // @synthesize m_nsCommentUrl;
@property(retain, nonatomic) NSString *m_nsFileParam; // @synthesize m_nsFileParam;
@property(retain, nonatomic) NSString *m_nsMsgDataUrl; // @synthesize m_nsMsgDataUrl;
@property(retain, nonatomic) NSString *m_nsMsgThumbAesKey; // @synthesize m_nsMsgThumbAesKey;
@property(retain, nonatomic) NSString *m_nsMsgThumbUrl; // @synthesize m_nsMsgThumbUrl;
@property(retain, nonatomic) NSString *m_nsStatExtStr; // @synthesize m_nsStatExtStr;
@property(retain, nonatomic) NSString *m_nsStreamVideoAdUxInfo; // @synthesize m_nsStreamVideoAdUxInfo;
@property(retain, nonatomic) NSString *m_nsStreamVideoPublishId; // @synthesize m_nsStreamVideoPublishId;
@property(retain, nonatomic) NSString *m_nsStreamVideoThumbUrl; // @synthesize m_nsStreamVideoThumbUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoTitle; // @synthesize m_nsStreamVideoTitle;
@property(retain, nonatomic) NSString *m_nsStreamVideoUrl; // @synthesize m_nsStreamVideoUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWebUrl; // @synthesize m_nsStreamVideoWebUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWording; // @synthesize m_nsStreamVideoWording;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(nonatomic) unsigned long m_uiCameraType; // @synthesize m_uiCameraType;
@property(nonatomic) unsigned long m_uiMsgThumbHeight; // @synthesize m_uiMsgThumbHeight;
@property(nonatomic) unsigned long m_uiMsgThumbSize; // @synthesize m_uiMsgThumbSize;
@property(nonatomic) unsigned long m_uiMsgThumbWidth; // @synthesize m_uiMsgThumbWidth;
@property(nonatomic) unsigned long m_uiStreamVideoTime; // @synthesize m_uiStreamVideoTime;
@property(nonatomic) unsigned long m_uiUploadStatus; // @synthesize m_uiUploadStatus;
@property(nonatomic) unsigned long m_uiVideoLen; // @synthesize m_uiVideoLen;
@property(nonatomic) unsigned long m_uiVideoOffset; // @synthesize m_uiVideoOffset;
@property(nonatomic) unsigned long m_uiVideoSource; // @synthesize m_uiVideoSource;
@property(nonatomic) unsigned long m_uiVideoTime; // @synthesize m_uiVideoTime;
- (void)parseStreamVideoNode:(struct XmlReaderNode_t *)arg1;
- (id)xmlOfStreamVideo;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
