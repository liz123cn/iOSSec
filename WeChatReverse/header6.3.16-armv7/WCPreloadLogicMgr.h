//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNetworkStatusExt.h"
#import "WCPreloadProviderDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, WCPreloadProvider;

@interface WCPreloadLogicMgr : NSObject <WCPreloadProviderDelegate, CNetworkStatusExt>
{
    NSMutableArray *m_downloadItemID;
    unsigned long m_lastRefreshTime;
    id <WCPreloadLogicDelegate> m_delegate;
    WCPreloadProvider *m_dataProvider;
    unsigned long m_preloadCount;
    BOOL m_enablePreload;
    NSMutableArray *m_waitDownloadItem;
    NSMutableSet *m_setPreDownloadItemIDForBigImage;
    NSMutableSet *m_setPreDownloadItemIDForSmallImage;
    NSMutableDictionary *m_dicPrelDownloadItemNetType;
    unsigned long m_preloadSucFeedCountForSmallImage;
    unsigned long m_viewNewFeedCount;
    unsigned long m_preloadSucImageCountForBigImage;
    unsigned long m_viewNewBigImageCount;
    unsigned long m_preloadBigImageCount;
    unsigned long long m_latestID;
}

- (void).cxx_destruct;
- (void)addBigImageCountForPreloadSuc;
- (void)addBigImageCountForViewNewBigImage;
- (void)addFeedCountForPreloadSmallImageSuc;
- (void)addFeedCountForViewNewFeeds;
- (BOOL)couldPreloadBigImage;
- (BOOL)couldPreloadImage;
- (BOOL)couldPreloadSmallImage;
- (void)dealloc;
- (void)downloadImages;
- (unsigned long)getCheckUpdateTimeSecs;
- (int)getCurHistoryClickRatioLimit;
- (unsigned int)getNetworkType;
- (id)getPreloadNetType:(id)arg1;
- (void)handleLatestWCObjectChanged:(id)arg1;
- (BOOL)hasPreloadDataItemForBigImage:(id)arg1;
- (BOOL)hasPreloadDataItemForSmallImage:(id)arg1;
- (id)init;
- (BOOL)isInPreloadAroundImgLimitTime;
- (BOOL)isInPreloadLimitTime;
@property(nonatomic) __weak id <WCPreloadLogicDelegate> m_delegate; // @synthesize m_delegate;
- (void)onDataUpdatedForPreload:(id)arg1 andData:(id)arg2;
- (void)preloadDataList:(id)arg1;
- (void)removePreloadDataItemForBigImage:(id)arg1;
- (void)removePreloadDataItemForSmallImage:(id)arg1;
- (void)tryLogPreloadImageResult;
- (void)tryPreloadData;
- (void)updateStatusForPreload:(BOOL)arg1;

@end

