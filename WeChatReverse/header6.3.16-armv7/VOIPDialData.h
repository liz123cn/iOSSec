//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact, NSData, NSMutableArray, NSString;

@interface VOIPDialData : NSObject
{
    NSData *mLocalPid;
    NSData *mLocalCapInfo;
    NSData *mRemotePid;
    NSData *mRemoteCapInfo;
    int mStrategy;
    int mRoomId;
    int mRoomMemberId;
    CContact *mContact;
    NSString *mCaller;
    int mLinkDisconnectHbInterval;
    int mLinkDisconnectHbCnt;
    int mEncryptLength;
    NSData *mClientSigns;
    NSData *mRemoteDirectInfo;
    int mARQStrategy;
    int mARQCacheLen;
    int mARQRttThreshold;
    int mARQUsedRateThreshold;
    int mARQRespRateThreshold;
    int mEncryptStrategy;
    NSMutableArray *mRelaySvrIp;
    NSMutableArray *mRelaySvrPort;
    NSMutableArray *mPunchSvrIp;
    NSMutableArray *mPunchSvrPort;
    NSMutableArray *mTcpSvrIp;
    NSMutableArray *mTcpSvrPort;
    int mFECSvrCtr;
    NSData *mFECKeyPara1;
    NSData *mFECKeyPara2;
    int _mDataChannelType;
    long long mRoomKey;
}

- (void).cxx_destruct;
- (void)SetRoomId:(int)arg1;
- (void)SetRoomKey:(long long)arg1;
- (void)SetRoomMemberId:(int)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isValidKey;
@property(nonatomic) int mARQCacheLen; // @synthesize mARQCacheLen;
@property(nonatomic) int mARQRespRateThreshold; // @synthesize mARQRespRateThreshold;
@property(nonatomic) int mARQRttThreshold; // @synthesize mARQRttThreshold;
@property(nonatomic) int mARQStrategy; // @synthesize mARQStrategy;
@property(nonatomic) int mARQUsedRateThreshold; // @synthesize mARQUsedRateThreshold;
@property(retain, nonatomic) NSString *mCaller; // @synthesize mCaller;
@property(retain, nonatomic) NSData *mClientSigns; // @synthesize mClientSigns;
@property(retain, nonatomic) CContact *mContact; // @synthesize mContact;
@property(nonatomic) int mDataChannelType; // @synthesize mDataChannelType=_mDataChannelType;
@property(nonatomic) int mEncryptLength; // @synthesize mEncryptLength;
@property(nonatomic) int mEncryptStrategy; // @synthesize mEncryptStrategy;
@property(retain, nonatomic) NSData *mFECKeyPara1; // @synthesize mFECKeyPara1;
@property(retain, nonatomic) NSData *mFECKeyPara2; // @synthesize mFECKeyPara2;
@property(nonatomic) int mFECSvrCtr; // @synthesize mFECSvrCtr;
@property(nonatomic) int mLinkDisconnectHbCnt; // @synthesize mLinkDisconnectHbCnt;
@property(nonatomic) int mLinkDisconnectHbInterval; // @synthesize mLinkDisconnectHbInterval;
@property(retain, nonatomic) NSData *mLocalCapInfo; // @synthesize mLocalCapInfo;
@property(retain, nonatomic) NSData *mLocalPid; // @synthesize mLocalPid;
@property(retain, nonatomic) NSMutableArray *mPunchSvrIp; // @synthesize mPunchSvrIp;
@property(retain, nonatomic) NSMutableArray *mPunchSvrPort; // @synthesize mPunchSvrPort;
@property(retain, nonatomic) NSMutableArray *mRelaySvrIp; // @synthesize mRelaySvrIp;
@property(retain, nonatomic) NSMutableArray *mRelaySvrPort; // @synthesize mRelaySvrPort;
@property(retain, nonatomic) NSData *mRemoteCapInfo; // @synthesize mRemoteCapInfo;
@property(retain, nonatomic) NSData *mRemoteDirectInfo; // @synthesize mRemoteDirectInfo;
@property(retain, nonatomic) NSData *mRemotePid; // @synthesize mRemotePid;
@property(nonatomic) int mRoomId; // @synthesize mRoomId;
@property(nonatomic) long long mRoomKey; // @synthesize mRoomKey;
@property(nonatomic) int mRoomMemberId; // @synthesize mRoomMemberId;
@property(nonatomic) int mStrategy; // @synthesize mStrategy;
@property(retain, nonatomic) NSMutableArray *mTcpSvrIp; // @synthesize mTcpSvrIp;
@property(retain, nonatomic) NSMutableArray *mTcpSvrPort; // @synthesize mTcpSvrPort;
- (void)reset;

@end

