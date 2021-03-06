//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class BakChatMsgItem, BakChatMsgList, NSData, NSMutableArray;

@interface BakChatUploadPackageHelperStruct : NSObject <NSCoding>
{
    NSMutableArray *m_usrNameArray;
    unsigned int m_chatSvrID;
    long long m_n64ChatSvrID;
    unsigned int m_curRowIndex;
    unsigned int m_mediaIndex;
    unsigned int m_appRecordMediaIndex;
    BakChatMsgItem *m_msgItem;
    BakChatMsgList *m_msgList;
    unsigned int m_bakChatSvrID;
    unsigned int filterCount;
    BOOL m_bGetAnyOneMessage;
    NSData *encryptKeyData;
    unsigned long uploadData_NetworkType;
    unsigned long uploadData_ErrorCount;
    unsigned long uploadData_PauseCount;
    BOOL uploadData_AllSelected;
}

+ (id)getSameBakChatUploadPackageHelperStruct:(id)arg1;
- (void).cxx_destruct;
- (void)clear;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSData *encryptKeyData; // @synthesize encryptKeyData;
@property(nonatomic) unsigned int filterCount; // @synthesize filterCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned int m_appRecordMediaIndex; // @synthesize m_appRecordMediaIndex;
@property(nonatomic) BOOL m_bGetAnyOneMessage; // @synthesize m_bGetAnyOneMessage;
@property(nonatomic) unsigned int m_bakChatSvrID; // @synthesize m_bakChatSvrID;
@property(nonatomic) unsigned int m_curRowIndex; // @synthesize m_curRowIndex;
@property(nonatomic) unsigned int m_mediaIndex; // @synthesize m_mediaIndex;
@property(retain, nonatomic) BakChatMsgItem *m_msgItem; // @synthesize m_msgItem;
@property(retain, nonatomic) BakChatMsgList *m_msgList; // @synthesize m_msgList;
@property(nonatomic) long long m_n64ChatSvrID; // @synthesize m_n64ChatSvrID;
@property(retain, nonatomic) NSMutableArray *m_usrNameArray; // @synthesize m_usrNameArray;
- (void)setEncryptKey:(id)arg1;
@property(nonatomic) BOOL uploadData_AllSelected; // @synthesize uploadData_AllSelected;
@property(nonatomic) unsigned long uploadData_ErrorCount; // @synthesize uploadData_ErrorCount;
@property(nonatomic) unsigned long uploadData_NetworkType; // @synthesize uploadData_NetworkType;
@property(nonatomic) unsigned long uploadData_PauseCount; // @synthesize uploadData_PauseCount;

@end

