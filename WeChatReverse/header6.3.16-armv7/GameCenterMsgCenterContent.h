//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GameCenterMsgActionInfo, GameCenterMsgAppInfo, GameCenterMsgControlInfo, NSString;

@interface GameCenterMsgCenterContent : NSObject
{
    NSString *_iconUrl;
    NSString *_username;
    NSString *_nickName;
    NSString *_subtitle;
    NSString *_formatContent;
    NSString *_thumbContent;
    int _jumpType;
    NSString *_contentUrl;
    int _contentType;
    NSString *_thumbUrl;
    float _thumbWidth;
    float _thumbHeight;
    unsigned long _type;
    unsigned long _localId;
    NSString *_svrMsgId;
    NSString *_noticeId;
    GameCenterMsgAppInfo *_appInfo;
    GameCenterMsgControlInfo *_controlInfo;
    GameCenterMsgActionInfo *_actionInfo;
    NSString *_originMsg;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameCenterMsgActionInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(retain, nonatomic) GameCenterMsgAppInfo *appInfo; // @synthesize appInfo=_appInfo;
@property(nonatomic) int contentType; // @synthesize contentType=_contentType;
@property(retain, nonatomic) NSString *contentUrl; // @synthesize contentUrl=_contentUrl;
@property(retain, nonatomic) GameCenterMsgControlInfo *controlInfo; // @synthesize controlInfo=_controlInfo;
@property(retain, nonatomic) NSString *formatContent; // @synthesize formatContent=_formatContent;
- (id)getAppName;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) int jumpType; // @synthesize jumpType=_jumpType;
@property(nonatomic) unsigned long localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *noticeId; // @synthesize noticeId=_noticeId;
@property(retain, nonatomic) NSString *originMsg; // @synthesize originMsg=_originMsg;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *svrMsgId; // @synthesize svrMsgId=_svrMsgId;
@property(retain, nonatomic) NSString *thumbContent; // @synthesize thumbContent=_thumbContent;
@property(nonatomic) float thumbHeight; // @synthesize thumbHeight=_thumbHeight;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(nonatomic) float thumbWidth; // @synthesize thumbWidth=_thumbWidth;
@property(nonatomic) unsigned long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;

@end
