//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface CDirectSend : NSObject
{
    unsigned char m_ucCmdID;
    unsigned char m_ucFlag;
    unsigned long m_uiSeq;
    unsigned short m_usUsrNameLen;
    NSString *m_nsUsrNameList;
    unsigned short m_usDataLen;
    NSData *m_dtData;
}

- (void).cxx_destruct;
- (BOOL)Decode:(id)arg1;
- (id)Encode;
- (id)init;
@property(retain, nonatomic) NSData *m_dtData; // @synthesize m_dtData;
@property(retain, nonatomic) NSString *m_nsUsrNameList; // @synthesize m_nsUsrNameList;
@property(nonatomic) unsigned char m_ucCmdID; // @synthesize m_ucCmdID;
@property(nonatomic) unsigned char m_ucFlag; // @synthesize m_ucFlag;
@property(nonatomic) unsigned long m_uiSeq; // @synthesize m_uiSeq;
@property(nonatomic) unsigned short m_usDataLen; // @synthesize m_usDataLen;
@property(nonatomic) unsigned short m_usUsrNameLen; // @synthesize m_usUsrNameLen;

@end

