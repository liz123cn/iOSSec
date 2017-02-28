//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSRecursiveLock;

@interface ChatRoomData : NSObject
{
    NSMutableDictionary *m_dicData;
    unsigned long m_maxMemberCount;
    unsigned long m_chatRoomVersion;
    BOOL isSimplify;
    NSRecursiveLock *_lock;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long chatRoomVersion; // @synthesize chatRoomVersion=m_chatRoomVersion;
- (id)getDataDescription;
- (id)getDataForUserName:(id)arg1 key:(id)arg2;
- (id)getDataXml;
- (id)getDislayNameForUserName:(id)arg1;
- (unsigned long)getXmlNodeIntValue:(struct XmlReaderNode_t *)arg1 forName:(const char *)arg2;
- (id)init;
- (id)initWithChatRoomData:(id)arg1;
- (id)initWithNewChatRoomData:(id)arg1;
- (BOOL)isShowDislayName;
@property(nonatomic) BOOL isSimplify; // @synthesize isSimplify;
- (BOOL)isUndeliverCountOpen;
@property(nonatomic) unsigned long maxMemberCount; // @synthesize maxMemberCount=m_maxMemberCount;
- (void)merge:(id)arg1;
- (void)mergeOldDetail:(id)arg1;
- (void)parseData:(id)arg1;
- (void)setDataForUserName:(id)arg1 key:(id)arg2 value:(id)arg3;
- (void)setDislayName:(id)arg1 forUserName:(id)arg2;
- (void)setShowDislayName:(BOOL)arg1;
- (void)setUndeliverCountOpen:(BOOL)arg1;
- (void)updateChatRoomData:(struct XmlReaderNode_t *)arg1;
- (void)updateDicData:(struct XmlReaderNode_t *)arg1;

@end

