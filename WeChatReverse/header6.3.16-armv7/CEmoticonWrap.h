//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSString;

@interface CEmoticonWrap : NSObject
{
    unsigned long m_uiType;
    NSString *m_nsMD5;
    BOOL m_bCanDelete;
    unsigned long m_uiGameType;
    NSString *m_nsAppID;
    NSMutableDictionary *m_extInfo;
    NSString *m_nsThumbImgPath;
    NSString *m_packageId;
    unsigned long m_lastUsedTime;
    NSString *m_nsDesignerId;
    NSString *m_nsThumbImgUrl;
    unsigned long m_extFlag;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;
@property(nonatomic) BOOL m_bCanDelete; // @synthesize m_bCanDelete;
@property(nonatomic) unsigned long m_extFlag; // @synthesize m_extFlag;
@property(retain, nonatomic) NSMutableDictionary *m_extInfo; // @synthesize m_extInfo;
@property(nonatomic) unsigned long m_lastUsedTime; // @synthesize m_lastUsedTime;
@property(retain, nonatomic) NSString *m_nsAppID; // @synthesize m_nsAppID;
@property(retain, nonatomic) NSString *m_nsDesignerId; // @synthesize m_nsDesignerId;
@property(retain, nonatomic) NSString *m_nsMD5; // @synthesize m_nsMD5;
@property(retain, nonatomic) NSString *m_nsThumbImgPath; // @synthesize m_nsThumbImgPath;
@property(retain, nonatomic) NSString *m_nsThumbImgUrl; // @synthesize m_nsThumbImgUrl;
@property(retain, nonatomic) NSString *m_packageId; // @synthesize m_packageId;
@property(nonatomic) unsigned long m_uiGameType; // @synthesize m_uiGameType;
@property(nonatomic) unsigned long m_uiType; // @synthesize m_uiType;

@end
