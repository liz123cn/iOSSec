//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class SKBuiltinBuffer_t, VoipAddrSet, VoipRelayData;

@interface VoipMultiRelayData : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int arqcacheLen; // @dynamic arqcacheLen;
@property(nonatomic) int arqrespRateThreshold; // @dynamic arqrespRateThreshold;
@property(nonatomic) int arqrttThreshold; // @dynamic arqrttThreshold;
@property(nonatomic) int arqstrategy; // @dynamic arqstrategy;
@property(nonatomic) int arqusedRateThreshold; // @dynamic arqusedRateThreshold;
@property(retain, nonatomic) VoipRelayData *capInfo; // @dynamic capInfo;
@property(retain, nonatomic) SKBuiltinBuffer_t *clientHeadSigns; // @dynamic clientHeadSigns;
@property(nonatomic) int encryptStrategy; // @dynamic encryptStrategy;
@property(retain, nonatomic) SKBuiltinBuffer_t *feckeyPara1; // @dynamic feckeyPara1;
@property(retain, nonatomic) SKBuiltinBuffer_t *feckeyPara2; // @dynamic feckeyPara2;
@property(nonatomic) int fecsvrCtr; // @dynamic fecsvrCtr;
@property(nonatomic) int linkDisconnectHbCnt; // @dynamic linkDisconnectHbCnt;
@property(nonatomic) int linkDisconnectHbInterval; // @dynamic linkDisconnectHbInterval;
@property(nonatomic) unsigned int oppositeClientVersion; // @dynamic oppositeClientVersion;
@property(retain, nonatomic) VoipRelayData *peerId; // @dynamic peerId;
@property(nonatomic) unsigned int protocolEncryptLength; // @dynamic protocolEncryptLength;
@property(retain, nonatomic) VoipAddrSet *punchSvrAddr; // @dynamic punchSvrAddr;
@property(nonatomic) int sendingType; // @dynamic sendingType;
@property(retain, nonatomic) VoipAddrSet *tcpSvrAddr; // @dynamic tcpSvrAddr;
@property(nonatomic) int voipNetQuality; // @dynamic voipNetQuality;
@property(retain, nonatomic) VoipAddrSet *voipSvrAddr; // @dynamic voipSvrAddr;

@end

