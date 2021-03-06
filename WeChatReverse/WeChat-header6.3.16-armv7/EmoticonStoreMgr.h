//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IAPExt.h"
#import "ICdnComMgrExt.h"
#import "IMMLanguageMgrExt.h"
#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class EmoticonStoreSession, NSData, NSMutableDictionary, NSMutableSet, NSString;

@interface EmoticonStoreMgr : MMService <MMService, PBMessageObserverDelegate, IAPExt, ICdnComMgrExt, IMMLanguageMgrExt>
{
    NSMutableSet *m_requestDetailForPids;
    NSMutableDictionary *m_getListEventIdDic;
    EmoticonStoreSession *m_session;
    NSMutableDictionary *m_skProducts;
    unsigned int m_boughtListEventID;
    NSData *m_broughtBuff;
}

+ (unsigned int)getIdKeyDownloadFailed;
+ (unsigned int)getIdKeyIdEmoticon;
- (void).cxx_destruct;
- (BOOL)GetEmotionDetailWithProductID:(id)arg1 Scence:(unsigned long)arg2;
- (BOOL)GetEmotionListFromStore:(unsigned long)arg1 withReqType:(unsigned long)arg2;
- (BOOL)IsCdnEmoticonPackageDownlaodFromClientID:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)OnCdnDownload:(id)arg1;
- (void)OnCdnDownloadProgress:(id)arg1;
- (void)OnExchangeEmoticonPack:(id)arg1;
- (void)OnGetStoreEmoticonItemDetail:(id)arg1;
- (void)OnGetStoreEmoticonList:(id)arg1 withReqType:(unsigned long)arg2;
- (void)OnSetCdnDnsInfo;
- (void)beginPersonalEmotionSession:(unsigned long)arg1 withReqType:(unsigned long)arg2;
- (void)beginStoreSession:(unsigned long)arg1 withReqType:(unsigned long)arg2;
- (id)beginStoreSessionWithItem:(id)arg1;
- (int)buyEmoticonItem:(id)arg1;
- (BOOL)cancelDownloadAndInstallEmoticonItem:(id)arg1;
- (BOOL)checkIsBannerSetValid:(id)arg1;
- (void)dealloc;
- (BOOL)downloadAndInstallEmoticonItem:(id)arg1;
- (id)emoticonItemInCacheWithProductID:(id)arg1;
- (void)endStoreSession:(unsigned long)arg1;
- (BOOL)exchangeEmoticonItemForDownloadUrl:(id)arg1 Scence:(int)arg2 isAutomatic:(BOOL)arg3;
- (id)findDownloadingEmoticonItemByClientDownloadID:(id)arg1;
- (id)findDownloadingEmoticonItemByProductID:(id)arg1;
- (id)findEmoticonItemByProductID:(id)arg1;
- (id)getBoughtListCache;
- (unsigned long)getBoughtListFromServer;
- (id)getBufForReqType:(unsigned long)arg1;
- (id)getStoreAdvertismentForSession:(unsigned long)arg1;
- (id)getStoreListCacheWithReqType:(unsigned long)arg1;
@property(retain, nonatomic) NSData *m_broughtBuff; // @synthesize m_broughtBuff;
@property(retain, nonatomic) NSMutableDictionary *m_getListEventIdDic; // @synthesize m_getListEventIdDic;
@property(retain, nonatomic) NSMutableSet *m_requestDetailForPids; // @synthesize m_requestDetailForPids;
@property(retain, nonatomic) EmoticonStoreSession *m_session; // @synthesize m_session;
@property(retain, nonatomic) NSMutableDictionary *m_skProducts; // @synthesize m_skProducts;
- (id)mediaInfoForEmoticonItem:(id)arg1;
- (void)notifyDownloadErrorWithItem:(id)arg1;
- (void)onGetBroughtItemList:(id)arg1;
- (void)onGetProduct:(id)arg1 invalidProductID:(id)arg2;
- (void)onLanguageChange;
- (void)onPurchaseCancelForProduct:(id)arg1;
- (void)onPurchaseFailForProduct:(id)arg1 ErrCode:(unsigned long)arg2;
- (void)onPurchaseSuccessForProduct:(id)arg1 ErrCode:(unsigned long)arg2;
- (void)onRestoreFail;
- (void)onRestoreSuccessForProduct:(id)arg1;
- (void)onServiceInit;
- (void)onServiceReloadData;
- (id)pathForBoughtListCache;
- (id)pathForStoreListCacheWithReqType:(unsigned long)arg1;
- (BOOL)reDownloadAndInstallEmoticonItem:(id)arg1 isAutomatic:(BOOL)arg2;
- (void)removeItemFromDownloadingQueueByClientID:(id)arg1;
- (id)rootPathForStoreListCache;
- (void)setBoughtListCacheWithItemList:(id)arg1;
- (void)setStoreListCacheWithCache:(id)arg1 withReqType:(unsigned long)arg2;
- (void)setStoreListCacheWithItemList:(id)arg1 Advertisment:(id)arg2 withReqType:(unsigned long)arg3;
- (void)setStoreListCacheWithItemList:(id)arg1 Advertisment:(id)arg2 withReqType:(unsigned long)arg3 withTopNum:(unsigned long)arg4;
- (void)startBoughtListSession;
- (void)tryInstallEmoticonPackage:(id)arg1;
- (void)updateBoughtListTailFromServer;
- (id)updateItemDetailWithProductID:(id)arg1 Scence:(unsigned long)arg2;
- (void)updateItemFromAppleForSKProduct:(id)arg1;
- (void)updateItemInSession:(id)arg1;
- (BOOL)updateItemProductFromCache:(id)arg1;
- (void)updateListFromAppleForSKProduct;
- (id)updateSKProductForItemList:(id)arg1;
- (BOOL)updateTailForSessionScence:(unsigned long)arg1 withReqType:(unsigned long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

