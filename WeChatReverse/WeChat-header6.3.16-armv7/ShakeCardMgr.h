//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IMsgExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableArray, NSString, ShakeCardData, ShakeCardEntrance, ShakeCardRedDot;

@interface ShakeCardMgr : MMService <MMService, PBMessageObserverDelegate, IMsgExt>
{
    BOOL hadLoadEntrance;
    BOOL hadLoadRedDot;
    BOOL hadGetLBSCardFromSvr;
    BOOL _hadLoadShakeCardTabRedDot;
    BOOL _hasRunDispatch;
    unsigned long canSendReqTime;
    ShakeCardEntrance *cardEntrance;
    ShakeCardRedDot *redDot;
    ShakeCardRedDot *shakeCardTabRedDot;
    NSMutableArray *aryEventIdToListen;
    unsigned long fromScene;
    NSString *extInfo;
    NSString *noCardTip;
    ShakeCardData *_lastShakeCardData;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
@property(retain, nonatomic) NSMutableArray *aryEventIdToListen; // @synthesize aryEventIdToListen;
- (void)callBackRespSvrError;
@property(nonatomic) unsigned long canSendReqTime; // @synthesize canSendReqTime;
- (BOOL)canShowShakeCardEntrance;
- (void)cancelShakeCard:(id)arg1 cardExt:(id)arg2;
@property(retain, nonatomic) ShakeCardEntrance *cardEntrance; // @synthesize cardEntrance;
- (void)cleanGetLBSCardFlag;
- (void)dealloc;
@property(retain, nonatomic) NSString *extInfo; // @synthesize extInfo;
@property(nonatomic) unsigned long fromScene; // @synthesize fromScene;
- (id)getEntranceName;
- (id)getEntranceTip;
- (unsigned long)getFrequencyTimeWithLevel:(unsigned long)arg1;
- (unsigned int)getShakeCardActivityType;
- (unsigned long)getShakeCardExpireTimeWithLevel:(unsigned long)arg1;
- (id)getShakeRedText;
- (unsigned long)getSvrDonwReqLimitLevel:(unsigned long)arg1;
@property(nonatomic) BOOL hadGetLBSCardFromSvr; // @synthesize hadGetLBSCardFromSvr;
@property(nonatomic) BOOL hadLoadEntrance; // @synthesize hadLoadEntrance;
@property(nonatomic) BOOL hadLoadRedDot; // @synthesize hadLoadRedDot;
@property(nonatomic) BOOL hadLoadShakeCardTabRedDot; // @synthesize hadLoadShakeCardTabRedDot=_hadLoadShakeCardTabRedDot;
- (void)handleCancelShakeCard:(id)arg1;
- (void)handleGetLBSCardResp:(id)arg1;
- (void)handleGetNewXmlWithEntrance:(struct XmlReaderNode_t *)arg1;
- (void)handleGetNewXmlWithRedDot:(struct XmlReaderNode_t *)arg1;
- (void)handleShakeCardResp:(id)arg1;
@property(nonatomic) BOOL hasRunDispatch; // @synthesize hasRunDispatch=_hasRunDispatch;
- (BOOL)hasShakeCardTabRedDot;
- (BOOL)hasShakeRedDot;
- (id)init;
@property(retain, nonatomic) ShakeCardData *lastShakeCardData; // @synthesize lastShakeCardData=_lastShakeCardData;
@property(retain, nonatomic) NSString *noCardTip; // @synthesize noCardTip;
- (void)onServiceInit;
- (id)pathForEntranceCache;
- (id)pathForRedDotCache;
- (id)pathForShakeCardTabRedDotCache;
@property(retain, nonatomic) ShakeCardRedDot *redDot; // @synthesize redDot;
- (void)saveEntranceCache;
- (void)saveRedDotCache;
- (void)saveShakeCardTabRedDotCache;
- (void)setFromScene:(unsigned long)arg1 extInfo:(id)arg2;
@property(retain, nonatomic) ShakeCardRedDot *shakeCardTabRedDot; // @synthesize shakeCardTabRedDot;
- (void)setShakeCardTabRedDotHadRead;
- (void)setShakeRedDotHadRead;
- (void)startSearchCardWithLocation:(id)arg1;
- (void)statEnterShake;
- (void)statEnterShakeCardTab;
- (void)stopSearchCard;
- (void)tryGetLBSCardFromSvr:(id)arg1;
- (void)tryLoadEntranceCache;
- (void)tryLoadRedDotCache;
- (void)tryLoadShakeCardTabRedDotCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

