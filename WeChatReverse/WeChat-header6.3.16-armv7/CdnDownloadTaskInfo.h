//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CdnDownloadTaskInfo : NSObject
{
    NSString *m_nsClientMsgID;
    unsigned long m_uiFileLength;
    NSString *m_nsTransInfo;
    long m_nRetCode;
    unsigned long m_uiScene;
    NSString *m_nsFileID;
    NSString *m_nsExtInfo;
    BOOL m_isPartialEnd;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL m_isPartialEnd; // @synthesize m_isPartialEnd;
@property(nonatomic) long m_nRetCode; // @synthesize m_nRetCode;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
@property(retain, nonatomic) NSString *m_nsExtInfo; // @synthesize m_nsExtInfo;
@property(retain, nonatomic) NSString *m_nsFileID; // @synthesize m_nsFileID;
@property(retain, nonatomic) NSString *m_nsTransInfo; // @synthesize m_nsTransInfo;
@property(nonatomic) unsigned long m_uiFileLength; // @synthesize m_uiFileLength;
@property(nonatomic) unsigned long m_uiScene; // @synthesize m_uiScene;

@end
