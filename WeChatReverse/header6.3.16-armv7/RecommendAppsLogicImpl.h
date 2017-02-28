//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface RecommendAppsLogicImpl : MMObject <PBMessageObserverDelegate>
{
    NSArray *_recommendAppsList;
    NSMutableArray *_tempList;
    BOOL _isUpdating;
    BOOL _isGettingIcon;
    NSMutableDictionary *_updateIconDic;
    unsigned long _lastUpdateTime;
}

- (void).cxx_destruct;
- (id)GetPathOfRecommendAppIcon:(id)arg1 IconUrl:(id)arg2;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)addNewItemToUpdateIconDicAndStartUpdate;
- (void)checkAndUpdateAppIcon;
- (void)clearRcmApps;
- (void)dealloc;
- (void)getAppIcon:(id)arg1 appID:(id)arg2;
- (id)getAppInfoDataRootDir;
- (id)getRecommendAppsList;
- (BOOL)handleGetAppIconRsp:(id)arg1;
- (void)handleNotShowNewLogic;
- (void)handleUpdateRecommendAppsListWithOffsetResp:(id)arg1;
- (id)init;
- (void)loadRecommendAppsListFromFile;
- (BOOL)makeUrlRequest:(id)arg1 userData:(id)arg2;
- (void)saveRecommendAppsList;
- (void)setRecommendAppNotShowNew:(id)arg1;
- (BOOL)updateRecommendAppsList;
- (BOOL)updateRecommendAppsListWithOffset:(unsigned long)arg1;

@end

