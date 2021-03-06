//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonStoreMgrExt.h"
#import "MMEmotionChartsCellDelegate.h"
#import "MMRefreshTableFooterDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class EmoticonStoreFootView, MMTableView, NSMutableArray, NSString;

@interface MMStoreEmotionChartsViewController : MMUIViewController <EmoticonStoreMgrExt, UITableViewDataSource, UITableViewDelegate, MMEmotionChartsCellDelegate, MMRefreshTableFooterDelegate>
{
    MMTableView *_chartsTableView;
    NSMutableArray *_chartsItemArray;
    BOOL _isLoadedFromCache;
    EmoticonStoreFootView *_tailView;
}

- (void).cxx_destruct;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)OnShowAlertWithIKnow:(id)arg1;
- (void)OnShowAlertWithOK:(id)arg1;
- (void)OnStartLoadingAndShowString:(id)arg1;
- (void)OnStartLoadingAndShowStringBlocked:(id)arg1;
- (void)OnStopLoading;
- (void)OnStopLoadingAndShowError:(id)arg1;
- (void)OnStopLoadingAndShowOK:(id)arg1;
- (void)OnStoreListChanged:(id)arg1 withRet:(int)arg2 withReqType:(unsigned long)arg3 Response:(id)arg4;
- (void)dealloc;
- (id)init;
- (void)initTableFooterView;
- (void)reloadData;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setupData;
- (void)setupTableView;
- (void)setupViews;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

