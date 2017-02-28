//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GameCenterMsgBubbleInfo, NSString;

@interface GameCenterNotifyContent : NSObject
{
    int _badgeDisplayType;
    NSString *_entranceText;
    NSString *_entranceIconUrl;
    GameCenterMsgBubbleInfo *_bubbleInfo;
    NSString *_floatLayerUrl;
    int _type;
    unsigned long _localId;
    NSString *_svrMsgId;
    NSString *_appId;
    NSString *_noticeId;
    NSString *_originMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) int badgeDisplayType; // @synthesize badgeDisplayType=_badgeDisplayType;
@property(retain, nonatomic) GameCenterMsgBubbleInfo *bubbleInfo; // @synthesize bubbleInfo=_bubbleInfo;
@property(retain, nonatomic) NSString *entranceIconUrl; // @synthesize entranceIconUrl=_entranceIconUrl;
@property(retain, nonatomic) NSString *entranceText; // @synthesize entranceText=_entranceText;
@property(retain, nonatomic) NSString *floatLayerUrl; // @synthesize floatLayerUrl=_floatLayerUrl;
@property(nonatomic) unsigned long localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(retain, nonatomic) NSString *originMsg; // @synthesize originMsg=_originMsg;
@property(retain, nonatomic) NSString *svrMsgId; // @synthesize svrMsgId=_svrMsgId;
@property(nonatomic) int type; // @synthesize type=_type;

@end
