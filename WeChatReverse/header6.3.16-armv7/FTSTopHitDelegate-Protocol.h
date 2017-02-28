//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@protocol FTSTopHitDelegate <NSObject>

@optional
- (NSMutableDictionary *)getAddressBookDictionary;
- (NSMutableDictionary *)getChinesePinyin;
- (NSMutableDictionary *)getContactDictionary;
- (unsigned long)getCreateTimeForUser:(NSString *)arg1;
- (NSMutableDictionary *)getFeatureDictionary;
- (NSString *)getLastQueryText;
- (NSMutableDictionary *)getNickNameToFriendsDictionary;
- (void)onFTSTopHitResultChanged:(unsigned int)arg1 query:(NSString *)arg2;
- (void)sortAddressBookFriends:(NSMutableArray *)arg1 matchTips:(NSMutableDictionary *)arg2;
- (void)sortContacts:(NSMutableArray *)arg1 matchTips:(NSMutableDictionary *)arg2;
- (void)sortFeatures:(NSMutableArray *)arg1 matchTips:(NSMutableDictionary *)arg2;
@end
