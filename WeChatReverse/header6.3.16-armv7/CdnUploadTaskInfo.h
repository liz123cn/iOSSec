//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CDNUploadMsgImgPrepareResponse, NSString;

@interface CdnUploadTaskInfo : NSObject
{
    NSString *m_nsClientMsgID;
    NSString *m_nsFileId;
    NSString *m_nsAesKey;
    long m_nFileLength;
    NSString *m_nsFileMD5;
    NSString *m_nsTransInfo;
    long m_nRetCode;
    NSString *m_nsChatName;
    NSString *m_nsThumbAesKey;
    long m_nThumbImgLength;
    NSString *m_nsThumbMd5;
    long m_nMidimgLength;
    NSString *m_nsStreamId;
    NSString *m_nsImageUrl;
    NSString *m_nsThumbUrl;
    unsigned long m_uiScene;
    unsigned long m_nHitCacheType;
    BOOL m_bNeedSendMsg;
    unsigned long long m_nSvrMsgId;
    BOOL m_bFileExist;
    CDNUploadMsgImgPrepareResponse *m_pbUploadResp;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) BOOL m_bFileExist; // @synthesize m_bFileExist;
@property(nonatomic) BOOL m_bNeedSendMsg; // @synthesize m_bNeedSendMsg;
@property(nonatomic) long m_nFileLength; // @synthesize m_nFileLength;
@property(nonatomic) unsigned long m_nHitCacheType; // @synthesize m_nHitCacheType;
@property(nonatomic) long m_nMidimgLength; // @synthesize m_nMidimgLength;
@property(nonatomic) long m_nRetCode; // @synthesize m_nRetCode;
@property(nonatomic) unsigned long long m_nSvrMsgId; // @synthesize m_nSvrMsgId;
@property(nonatomic) long m_nThumbImgLength; // @synthesize m_nThumbImgLength;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
@property(retain, nonatomic) NSString *m_nsFileId; // @synthesize m_nsFileId;
@property(retain, nonatomic) NSString *m_nsFileMD5; // @synthesize m_nsFileMD5;
@property(retain, nonatomic) NSString *m_nsImageUrl; // @synthesize m_nsImageUrl;
@property(retain, nonatomic) NSString *m_nsStreamId; // @synthesize m_nsStreamId;
@property(retain, nonatomic) NSString *m_nsThumbAesKey; // @synthesize m_nsThumbAesKey;
@property(retain, nonatomic) NSString *m_nsThumbMd5; // @synthesize m_nsThumbMd5;
@property(retain, nonatomic) NSString *m_nsThumbUrl; // @synthesize m_nsThumbUrl;
@property(retain, nonatomic) NSString *m_nsTransInfo; // @synthesize m_nsTransInfo;
@property(retain, nonatomic) CDNUploadMsgImgPrepareResponse *m_pbUploadResp; // @synthesize m_pbUploadResp;
@property(nonatomic) unsigned long m_uiScene; // @synthesize m_uiScene;

@end

