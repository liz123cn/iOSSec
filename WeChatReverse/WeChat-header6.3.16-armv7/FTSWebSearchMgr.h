//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IHeadImageExt.h"
#import "IMMLanguageMgrExt.h"
#import "LocationRetrieveDelegate.h"
#import "MMResourceMgrExt.h"
#import "PBMessageObserverDelegate.h"
#import "WCFacadeExt.h"
#import "WebSearchImageTaskDelegate.h"

@class CLLocation, LocationRetriever, NSMutableArray, NSMutableDictionary, NSString, WebSearchActionResultItem;

@interface FTSWebSearchMgr : MMObject <PBMessageObserverDelegate, LocationRetrieveDelegate, IHeadImageExt, WCFacadeExt, WebSearchImageTaskDelegate, MMResourceMgrExt, IMMLanguageMgrExt>
{
    BOOL _isActive;
    BOOL _isWorking;
    BOOL _isWorkingForSearchGuide;
    BOOL _isWorkingForSuggestion;
    unsigned long _lastEventID;
    unsigned long _lastEventIDForSearchGuide;
    unsigned long _lastEventIDForSuggestion;
    unsigned long long _businessType;
    LocationRetriever *_locationRetriver;
    CLLocation *_location;
    BOOL _bWaitingLocationForRecmdRequest;
    NSMutableDictionary *_dicSearchData;
    NSMutableArray *_searchDataFIFO;
    NSMutableDictionary *_dicHeadImgInfo;
    NSMutableDictionary *_dicSnsImgInfo;
    NSMutableDictionary *_dicCommonImgInfo;
    NSMutableDictionary *_retryParamsForWebSearch;
    NSMutableDictionary *_retryParamsForSuggestion;
    float _totalStayTimeSec;
    float _totalWebViewTimeSec;
    int _bAction;
    struct timeval _tvStart;
    struct timeval _tvWebViewStart;
    unsigned int _eStatus;
    BOOL _hasLoadDownloadH5;
    BOOL _isDetailSearch;
    BOOL _bForbidReportTime;
    BOOL _bForbidReportAction;
    id <WebSearchMgrDelegate> _delegate;
    NSString *_newestQueryText;
    NSString *_newestSearchText;
    NSString *_respJson;
    int _scene;
    WebSearchActionResultItem *_logItem;
    NSMutableDictionary *_dicMatchUserList;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)addWebSearchLog:(id)arg1 forLogID:(unsigned long)arg2;
- (void)asyncDownloadH5;
- (void)asyncSearch:(id)arg1;
- (void)asyncSearchSuggest:(id)arg1;
@property(nonatomic) BOOL bForbidReportAction; // @synthesize bForbidReportAction=_bForbidReportAction;
@property(nonatomic) BOOL bForbidReportTime; // @synthesize bForbidReportTime=_bForbidReportTime;
- (void)cacheHomaPageResp:(id)arg1 forKey:(id)arg2;
- (void)cacheRecmdData:(id)arg1 withExpired:(unsigned long long)arg2 andSearchID:(id)arg3 andScene:(unsigned long)arg4 andVersion:(unsigned long)arg5 andBusinessType:(unsigned long long)arg6;
- (void)cancelSearch;
- (void)dealloc;
- (void)delayRequestForRecmdData;
@property(nonatomic) __weak id <WebSearchMgrDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableDictionary *dicMatchUserList; // @synthesize dicMatchUserList=_dicMatchUserList;
- (void)downloadHeadImg:(id)arg1 withCategory:(unsigned char)arg2 withInfo:(id)arg3;
- (unsigned long)forceGetVersion;
- (void)forceUpdateH5;
- (id)getDetailSearchTips:(unsigned long long)arg1;
- (unsigned long)getVersion;
- (void)handleGuideCgi:(id)arg1;
- (void)handleReportCgi:(id)arg1;
- (void)handleSuggestionCgi:(id)arg1;
- (void)handleWebSearchCgi:(id)arg1;
- (id)homepageCacheForKey:(id)arg1;
- (id)init;
- (void)invalidateSuggestion;
@property(nonatomic) BOOL isDetailSearch; // @synthesize isDetailSearch=_isDetailSearch;
- (BOOL)isFromFuncQueryWithScene:(unsigned int)arg1 sceneActionType:(unsigned int)arg2;
- (BOOL)isNeedWaitLocationForScene:(unsigned long)arg1 andType:(unsigned long long)arg2;
- (BOOL)isValidWebSearchLog:(id)arg1;
@property(retain, nonatomic) WebSearchActionResultItem *logItem; // @synthesize logItem=_logItem;
- (void)markItemClicked;
- (void)markResultValid:(BOOL)arg1 andQuery:(id)arg2 andType:(unsigned long)arg3;
@property(retain, nonatomic) NSString *newestQueryText; // @synthesize newestQueryText=_newestQueryText;
@property(retain, nonatomic) NSString *newestSearchText; // @synthesize newestSearchText=_newestSearchText;
- (void)onCancel;
- (void)onDownloadFinish:(id)arg1 downloadType:(int)arg2;
- (void)onDownloadMediaProcessChange:(id)arg1 downloadType:(int)arg2 current:(int)arg3 total:(int)arg4;
- (void)onEnterBackGround;
- (void)onEnterForeGround;
- (void)onHeadImageChange:(id)arg1;
- (void)onImageFailForUrl:(id)arg1;
- (void)onImageReady:(id)arg1 forUrl:(id)arg2;
- (void)onLanguageChange;
- (void)onPauseWebSearch;
- (void)onResUpdateFinish:(int)arg1 resType:(unsigned long)arg2 subResType:(unsigned long)arg3;
- (void)onResetResource:(BOOL)arg1;
- (void)onResumeWebSearch;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onServiceReloadData;
- (void)onStartWebSearch;
- (void)onStartWebSearchForDetail:(unsigned long long)arg1;
- (void)pageRequestAvatar:(id)arg1;
- (void)pageRequestAvatarList:(id)arg1;
- (void)pageRequestCommonImage:(id)arg1;
- (void)pageRequestCommonImageList:(id)arg1;
- (void)pageRequestSnsImage:(id)arg1;
- (void)pageRequestSnsImageList:(id)arg1;
- (void)reportAction;
- (void)reportStayTime;
- (void)reportVisit;
@property(retain, nonatomic) NSString *respJson; // @synthesize respJson=_respJson;
@property(nonatomic) int scene; // @synthesize scene=_scene;
- (void)sendRequestForRemcdData;
- (void)sendWebSearchRTReport:(id)arg1;
- (BOOL)shouldCarryUserList:(id)arg1;
- (void)startRetrievingLocation;
- (void)stopRetrievingLocation;
- (void)tryGetRecmdData:(unsigned long long)arg1;
- (void)tryUpdateH5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
