//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CdnRecordMediaInfo : NSObject
{
    NSString *m_nsClientMsgID;
    NSString *m_nsFilePath;
    NSString *m_nsUsername;
    NSString *m_nsFileID;
    NSString *m_nsAesKey;
    unsigned long m_uiFileTotalLen;
    unsigned long m_uiScene;
    NSString *m_nsExtInfo;
    unsigned long m_uiFileType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsClientMsgID; // @synthesize m_nsClientMsgID;
@property(retain, nonatomic) NSString *m_nsExtInfo; // @synthesize m_nsExtInfo;
@property(retain, nonatomic) NSString *m_nsFileID; // @synthesize m_nsFileID;
@property(retain, nonatomic) NSString *m_nsFilePath; // @synthesize m_nsFilePath;
@property(retain, nonatomic) NSString *m_nsUsername; // @synthesize m_nsUsername;
@property(nonatomic) unsigned long m_uiFileTotalLen; // @synthesize m_uiFileTotalLen;
@property(nonatomic) unsigned long m_uiFileType; // @synthesize m_uiFileType;
@property(nonatomic) unsigned long m_uiScene; // @synthesize m_uiScene;

@end

