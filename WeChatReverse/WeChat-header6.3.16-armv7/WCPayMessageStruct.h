//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayMessageStruct : NSObject
{
    unsigned long m_uiMessageType;
    unsigned long m_uiCreateTime;
    unsigned long m_uiMsgLocalID;
    NSString *m_nsContent;
    NSString *m_nsAppUserName;
    NSString *m_nsAppNickName;
    NSString *m_nsAppHeaderImg;
    NSString *m_nsStatusType;
    NSString *m_nsStatusDesc;
    unsigned long m_uiReadFlag;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) NSString *m_nsAppHeaderImg; // @synthesize m_nsAppHeaderImg;
@property(retain, nonatomic) NSString *m_nsAppNickName; // @synthesize m_nsAppNickName;
@property(retain, nonatomic) NSString *m_nsAppUserName; // @synthesize m_nsAppUserName;
@property(retain, nonatomic) NSString *m_nsContent; // @synthesize m_nsContent;
@property(retain, nonatomic) NSString *m_nsStatusDesc; // @synthesize m_nsStatusDesc;
@property(retain, nonatomic) NSString *m_nsStatusType; // @synthesize m_nsStatusType;
@property(nonatomic) unsigned long m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) unsigned long m_uiMessageType; // @synthesize m_uiMessageType;
@property(nonatomic) unsigned long m_uiMsgLocalID; // @synthesize m_uiMsgLocalID;
@property(nonatomic) unsigned long m_uiReadFlag; // @synthesize m_uiReadFlag;

@end

