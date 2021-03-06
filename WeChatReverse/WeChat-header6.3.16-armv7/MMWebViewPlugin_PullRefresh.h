//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWebViewPluginBase.h"

#import "EGORefreshTableHeaderDelegate.h"

@class MMWebViewPullDownRefreshView, NSString;

@interface MMWebViewPlugin_PullRefresh : MMWebViewPluginBase <EGORefreshTableHeaderDelegate>
{
    BOOL _bIsDisablePullDown;
    BOOL _bIsDisablePullUp;
    BOOL _bIsEnablePullRefresh;
    MMWebViewPullDownRefreshView *m_headRefreshView;
    BOOL _isReflashingHead;
    BOOL _isRecoverInsetProcessing;
    float m_fLastY;
}

- (void).cxx_destruct;
- (void)disablePullRefresh;
- (BOOL)egoRefreshTableHeaderDataSourceIsLoading:(id)arg1;
- (void)egoRefreshTableHeaderDidTriggerRefresh:(id)arg1;
- (void)enablePullRefresh;
- (BOOL)handleEvent:(unsigned int)arg1 userInfo:(id)arg2;
- (id)init;
@property(readonly, nonatomic) BOOL isRecoverInsetProcessing; // @synthesize isRecoverInsetProcessing=_isRecoverInsetProcessing;
@property(readonly, nonatomic) BOOL isReflashingHead; // @synthesize isReflashingHead=_isReflashingHead;
- (void)processPullDownRefreshWhenBeginDragging;
- (void)processPullDownRefreshWhenDidScroll:(id)arg1;
- (void)processPullDownRefreshWhenEndDragging:(id)arg1;
- (void)pullDownLoadingHeaderRefreshWhenViewWillAppear;
- (void)realStopAction;
- (void)refreshHead;
- (void)setDisableWebViewScrollViewPullDown;
- (void)setDisableWebViewScrollViewPullUp;
- (void)startPullRefresh;
- (void)stopPullRefresh;
- (void)stopRefreshHeaderView:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

