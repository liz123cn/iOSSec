//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GameCenterBaseMsg.h"

@class GameCenterMsgActionInfo, GameCenterMsgShareInfo;

@interface GameCenterShareMsg : GameCenterBaseMsg
{
    GameCenterMsgShareInfo *_shareInfo;
    GameCenterMsgActionInfo *_actionInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GameCenterMsgActionInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
- (id)getMsgCenterContent;
- (id)initWithXmlNode:(struct XmlReaderNode_t *)arg1;
@property(retain, nonatomic) GameCenterMsgShareInfo *shareInfo; // @synthesize shareInfo=_shareInfo;

@end

