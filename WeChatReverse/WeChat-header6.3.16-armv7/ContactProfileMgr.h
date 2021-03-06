//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableDictionary, NSString;

@interface ContactProfileMgr : MMService <MMService, PBMessageObserverDelegate>
{
    NSMutableDictionary *m_profiles;
    NSMutableDictionary *m_profileImages;
    BOOL m_isGettingProfile;
    BOOL m_isGettingProfileAndImage;
    unsigned long m_retryCount;
}

- (void).cxx_destruct;
- (void)GetProfiles:(unsigned long)arg1;
- (void)GetQQContactProfile:(id)arg1;
- (void)GetQQContactProfileAndImage:(id)arg1;
- (void)GetQQContactProfileAndImages:(id)arg1;
- (void)GetQQContactProfiles:(id)arg1;
- (void)InternalGetContactProfile:(id)arg1 startNow:(BOOL)arg2;
- (void)InternalGetContactProfileAndImage:(id)arg1 startNow:(BOOL)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)cleanUpContacts:(id)arg1 withOpCode:(unsigned long)arg2;
- (void)dealloc;
- (long long)decodeToInteger:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
- (id)decodeToString:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
- (id)init;
- (void)parseBasicInfo:(id)arg1 basicInfo:(id)arg2;
- (void)parseExtInfo:(id)arg1 extInfo:(id)arg2;
- (id)unpackProfiles:(id)arg1;
- (void)updateContacts:(id)arg1 withOpCode:(unsigned long)arg2 andNames:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

