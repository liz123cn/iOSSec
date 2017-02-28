//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface SingleItemWrapper : NSObject
{
    NSMutableDictionary *keychainItemData;
    NSMutableDictionary *genericPasswordQuery;
}

- (void)dealloc;
- (id)dictionaryToSecItemFormat:(id)arg1;
@property(retain) NSMutableDictionary *genericPasswordQuery; // @synthesize genericPasswordQuery;
- (id)initWithIdentifier:(id)arg1 accessGroup:(id)arg2;
@property(retain) NSMutableDictionary *keychainItemData; // @synthesize keychainItemData;
- (id)objectForKey:(id)arg1;
- (void)resetKeychainItem;
- (id)secItemFormatToDictionary:(id)arg1;
- (BOOL)setObject:(id)arg1 forKey:(id)arg2;
- (void)writeToKeychain;

@end

