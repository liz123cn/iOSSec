//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSData, NSMutableArray, NSString;

@interface WXTalkRoomData : NSObject
{
    BOOL isSlience;
    BOOL isNobodyTalking;
    int roomId;
    int roomMemberId;
    NSString *username;
    NSMutableArray *memberList;
    NSData *localCapInfo;
    unsigned long lastTryGetMicTime;
    unsigned long countDown;
    unsigned long lastHeartBeatTime;
    NSArray *unSpMemberList;
    unsigned long lastSendInviteTime;
    unsigned long inviteCountWithinOneMin;
    unsigned long curGetMicEventID;
    NSMutableArray *_addrList;
    long long roomKey;
    long long micId;
    long long curHoldMicMemberId;
}

- (void).cxx_destruct;
- (id)GetRoomContactList;
- (void)SetRoomId:(int)arg1;
- (void)SetRoomKey:(long long)arg1;
@property(retain, nonatomic) NSMutableArray *addrList; // @synthesize addrList=_addrList;
@property(nonatomic) unsigned long countDown; // @synthesize countDown;
@property(nonatomic) unsigned long curGetMicEventID; // @synthesize curGetMicEventID;
@property(nonatomic) long long curHoldMicMemberId; // @synthesize curHoldMicMemberId;
- (void)dealloc;
- (id)init;
@property(nonatomic) unsigned long inviteCountWithinOneMin; // @synthesize inviteCountWithinOneMin;
@property(nonatomic) BOOL isNobodyTalking; // @synthesize isNobodyTalking;
@property(nonatomic) BOOL isSlience; // @synthesize isSlience;
- (BOOL)isValidKey;
@property(nonatomic) unsigned long lastHeartBeatTime; // @synthesize lastHeartBeatTime;
@property(nonatomic) unsigned long lastSendInviteTime; // @synthesize lastSendInviteTime;
@property(nonatomic) unsigned long lastTryGetMicTime; // @synthesize lastTryGetMicTime;
@property(retain, nonatomic) NSData *localCapInfo; // @synthesize localCapInfo;
@property(retain, nonatomic) NSMutableArray *memberList; // @synthesize memberList;
@property(nonatomic) long long micId; // @synthesize micId;
- (void)reset;
@property(nonatomic) int roomId; // @synthesize roomId;
@property(nonatomic) long long roomKey; // @synthesize roomKey;
@property(nonatomic) int roomMemberId; // @synthesize roomMemberId;
@property(retain, nonatomic) NSArray *unSpMemberList; // @synthesize unSpMemberList;
@property(retain, nonatomic) NSString *username; // @synthesize username;

@end

