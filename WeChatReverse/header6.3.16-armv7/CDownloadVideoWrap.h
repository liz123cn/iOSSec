//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface CDownloadVideoWrap : NSObject
{
    NSString *m_nsFromUsrName;
    NSString *m_nsToUsrName;
    unsigned long m_uiLocalID;
    long long m_n64SvrID;
    unsigned long m_uiVideoTotalLen;
    unsigned long m_uiVideoStartPos;
    NSData *m_dtVideo;
    unsigned long m_uiNetwork;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;
@property(retain, nonatomic) NSData *m_dtVideo; // @synthesize m_dtVideo;
@property(nonatomic) long long m_n64SvrID; // @synthesize m_n64SvrID;
@property(retain, nonatomic) NSString *m_nsFromUsrName; // @synthesize m_nsFromUsrName;
@property(retain, nonatomic) NSString *m_nsToUsrName; // @synthesize m_nsToUsrName;
@property(nonatomic) unsigned long m_uiLocalID; // @synthesize m_uiLocalID;
@property(nonatomic) unsigned long m_uiNetwork; // @synthesize m_uiNetwork;
@property(nonatomic) unsigned long m_uiVideoStartPos; // @synthesize m_uiVideoStartPos;
@property(nonatomic) unsigned long m_uiVideoTotalLen; // @synthesize m_uiVideoTotalLen;

@end

