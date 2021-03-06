//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GameCenterMsgControlInfo : NSObject
{
    BOOL _showMsgCenterReddot;
    BOOL _notInMsgCenter;
    int _controlFlag;
    int _filterFlag;
    unsigned long _createTime;
    unsigned long _expiredTime;
}

+ (id)parseFromXml:(struct XmlReaderNode_t *)arg1;
- (BOOL)canClickMsgCenterCellSource;
@property(nonatomic) int controlFlag; // @synthesize controlFlag=_controlFlag;
@property(nonatomic) unsigned long createTime; // @synthesize createTime=_createTime;
@property(nonatomic) unsigned long expiredTime; // @synthesize expiredTime=_expiredTime;
@property(nonatomic) int filterFlag; // @synthesize filterFlag=_filterFlag;
@property(nonatomic) BOOL notInMsgCenter; // @synthesize notInMsgCenter=_notInMsgCenter;
@property(nonatomic) BOOL showMsgCenterReddot; // @synthesize showMsgCenterReddot=_showMsgCenterReddot;
- (BOOL)shouldShowFindFriendEntry;
- (BOOL)shouldShowMsgCenterCellSource;

@end

