//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "EmoticonBoughtListMgrExt.h"
#import "EmoticonStoreCellDelegate.h"
#import "EmoticonStoreMgrExt.h"
#import "EmotionCollectionFooterViewDelegate.h"
#import "LoopPageScrollViewDataSourceDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class EmotionCollectionFooterView, LoopPageScrollView, MMEmotionStoreSearchController, MMTimer, NSArray, NSMutableArray, NSString, UICollectionView, UICollectionViewFlowLayout, UIView, UIViewController;

@interface MMWechatEmotionsViewController : MMSearchBarDisplayController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, EmoticonStoreMgrExt, EmoticonBoughtListMgrExt, LoopPageScrollViewDataSourceDelegate, EmoticonStoreCellDelegate, EmotionCollectionFooterViewDelegate>
{
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    LoopPageScrollView *_bannerView;
    UIView *m_collectionHeaderView;
    EmotionCollectionFooterView *_footerView;
    MMTimer *m_timer;
    NSArray *m_sectionInfoArray;
    NSMutableArray *_storeItemArray;
    NSMutableArray *_storeAdsArray;
    NSMutableArray *m_cellSetList;
    unsigned long _topHotNum;
    unsigned long m_recentHotNum;
    unsigned long _scene;
    unsigned long _reqType;
    BOOL m_hasGetFirstResponse;
    UIViewController *m_contentsViewController;
    MMEmotionStoreSearchController *m_searchController;
}

- (void).cxx_destruct;
- (void)MMRefreshCollectionFooterDidTriggerRefresh:(id)arg1;
- (void)OnRestoreEmoticonItemSuccess;
- (void)OnShowAlertWithIKnow:(id)arg1;
- (void)OnShowAlertWithOK:(id)arg1;
- (void)OnStartLoadingAndShowString:(id)arg1;
- (void)OnStartLoadingAndShowStringBlocked:(id)arg1;
- (void)OnStopLoading;
- (void)OnStopLoadingAndShowError:(id)arg1;
- (void)OnStopLoadingAndShowOK:(id)arg1;
- (void)OnStoreListChanged:(id)arg1 withRet:(int)arg2 withReqType:(unsigned long)arg3 Response:(id)arg4;
- (void)adjustContentInsetAndSearchBarMask;
- (void)changeBannerToNextPage;
- (void)clearSearchDisplayController;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)configBanner;
- (void)configCollectionView;
- (void)configData;
- (void)configHeaderView;
- (void)configSectionInfos;
- (void)configTailView;
- (void)configViews;
- (void)dealloc;
- (void)didChangeToPage:(unsigned long)arg1;
- (void)didTapPageAtNum:(unsigned long)arg1;
- (id)init;
- (void)initBannerPageTimer;
- (id)initWithEmotionScene:(unsigned long)arg1 AndParentViewController:(id)arg2;
- (BOOL)interactivePopGestureRecognizerShouldBegin:(id)arg1;
- (id)itemForSectionType:(unsigned int)arg1 rowIndex:(unsigned int)arg2;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)openPageForBannerSet:(id)arg1 IsFromBanner:(BOOL)arg2;
- (void)reloadAdsFromMgr;
- (void)reloadData;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)stopBannerPageTimer;
- (int)totalNumOfPage;
- (void)tryInitViewOfSearchController;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForPage:(id)arg1 pageNum:(unsigned long)arg2;
- (void)viewWillAppear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

