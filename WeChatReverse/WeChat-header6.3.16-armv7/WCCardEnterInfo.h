//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCCardEnterInfo : MMObject
{
    NSString *_cardIdOrTpId;
    NSString *_cardExt;
    unsigned long _fromScene;
    NSString *_fromUserName;
    NSString *_chatName;
    NSString *_webUrl;
    NSString *_appID;
    unsigned long _statScene;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appID; // @synthesize appID=_appID;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt=_cardExt;
@property(retain, nonatomic) NSString *cardIdOrTpId; // @synthesize cardIdOrTpId=_cardIdOrTpId;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName=_chatName;
- (void)dealloc;
@property(nonatomic) unsigned long fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName=_fromUserName;
@property(nonatomic) unsigned long statScene; // @synthesize statScene=_statScene;
@property(retain, nonatomic) NSString *webUrl; // @synthesize webUrl=_webUrl;

@end

