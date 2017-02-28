//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "StoreEmotionRewardGetRewardCgiDelegate.h"

@class NSMutableDictionary, NSString, StoreEmotionRewardTipsStatisticsLogicObject;

@interface StoreEmotionRewardMgr : MMService <StoreEmotionRewardGetRewardCgiDelegate, MMService>
{
    StoreEmotionRewardTipsStatisticsLogicObject *m_rewardTipsStatisticsLogic;
    NSMutableDictionary *_getAllRewardInfoCgiDic;
    NSMutableDictionary *_getPriceOnlyRewardInfoCgiDic;
    NSMutableDictionary *_rewardInfoCacheDic;
}

+ (BOOL)isCloseReward;
+ (BOOL)isHideStopShowRewardTipsButton;
- (void).cxx_destruct;
- (void)checkIsNeedShowRewardTipsWithWrap:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *getAllRewardInfoCgiDic; // @synthesize getAllRewardInfoCgiDic=_getAllRewardInfoCgiDic;
@property(retain, nonatomic) NSMutableDictionary *getPriceOnlyRewardInfoCgiDic; // @synthesize getPriceOnlyRewardInfoCgiDic=_getPriceOnlyRewardInfoCgiDic;
- (BOOL)isCloseRewardTips;
- (void)onGetRewardCgiFailedForUnrewardableWithPid:(id)arg1;
- (void)onGetRewardCgiFailedWithPid:(id)arg1;
- (void)onGetRewardCgiOkWithPid:(id)arg1 Prices:(id)arg2 DonorNum:(unsigned int)arg3 Donors:(id)arg4 EmotionReward:(id)arg5;
- (void)onGetRewardCgiOkWithPid:(id)arg1 Prices:(id)arg2 EmotionReward:(id)arg3;
- (void)onServiceInit;
- (id)prepareForRewardWithPid:(id)arg1 needAllInfo:(BOOL)arg2;
- (void)removeRewardInfoCacheForPid:(id)arg1;
@property(retain, nonatomic) NSMutableDictionary *rewardInfoCacheDic; // @synthesize rewardInfoCacheDic=_rewardInfoCacheDic;
- (id)rewardInfoCacheForPid:(id)arg1;
- (void)saveRewardInfo:(id)arg1 toFileWithPid:(id)arg2;
- (void)setCanShowRewardTips:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

