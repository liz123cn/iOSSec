//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSMutableArray;

@interface ChatMigrationProtocolLogic : NSObject
{
    NSData *cryptKey;
    NSMutableArray *m_arrRecvSeq;
}

- (void).cxx_destruct;
- (id)DecryptData:(id)arg1;
- (id)EncryptData:(id)arg1;
- (id)GetCancelRequestPkg:(id)arg1;
- (id)GetClientAuthRequestPkg:(id)arg1 bakID:(id)arg2;
- (id)GetClientAuthRequestPkg:(id)arg1 bakID:(id)arg2 version:(int)arg3 type:(int)arg4;
- (id)GetClientAuthResponsePkg:(id)arg1 bakID:(id)arg2;
- (id)GetClientDataPushResponsePkg:(id)arg1;
- (id)GetClientStartRequestPkg:(id)arg1;
- (id)GetDestBodyData:(id)arg1 dataType:(int)arg2 isPack:(BOOL)arg3;
- (id)GetHeartBeatReqPkgWithAck:(unsigned long long)arg1;
- (id)GetHeartBeatResPkgWithAck:(unsigned long long)arg1;
- (id)GetServerAuthResponsePkg:(id)arg1 bakID:(id)arg2 andStatus:(int)arg3;
- (id)GetServerAuthResponsePkg:(id)arg1 bakID:(id)arg2 andStatus:(int)arg3 andVersion:(int)arg4 andType:(int)arg5;
- (id)GetServerDataPushRequestPkg:(id)arg1;
- (id)GetServerFinishRequestPkg:(id)arg1 withReportDic:(id)arg2;
- (id)GetServerStartResponsePkg:(id)arg1 totalCount:(unsigned long long)arg2 totalSize:(unsigned long long)arg3 andStatus:(int)arg4;
- (BOOL)checksum_verify:(id)arg1 andCheckSum:(int)arg2;
- (void)dealloc;
- (unsigned long)genRecvSequence;
- (unsigned long)genSendSequence;
- (id)initWithKey:(id)arg1;
- (id)pack:(id)arg1 type:(int)arg2;
- (id)unpack:(id)arg1 type:(int *)arg2;
- (id)unpackData:(id)arg1 type:(int *)arg2;

@end

