//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface GoogleContactLocalCacheImpl : NSObject <PBCoding>
{
    NSMutableArray *m_contactList;
    NSString *m_googleContactName;
    NSMutableDictionary *m_nickNameDic;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)clearCacheForKey:(id)arg1;
- (void)dealloc;
- (id)getContactListForKey:(id)arg1;
- (id)getGoogleContactLocalCachePath;
- (id)getGoogleContactLocalCacheRootDir;
- (id)getGoogleNickNameForGmail:(id)arg1 forKey:(id)arg2;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
- (id)loadContactForKey:(id)arg1;
@property(retain, nonatomic) NSMutableArray *m_contactList; // @synthesize m_contactList;
@property(retain, nonatomic) NSString *m_googleContactName; // @synthesize m_googleContactName;
@property(retain, nonatomic) NSMutableDictionary *m_nickNameDic; // @synthesize m_nickNameDic;
- (BOOL)saveContactToFile:(id)arg1 forKey:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
