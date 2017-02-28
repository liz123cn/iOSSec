//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt.h"
#import "IWCDeviceBrandMgrExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCDeviceSearchLogicDelegate.h"

@class MMLoadingView, MMTableView, NSMutableArray, NSString, UILabel, WCDevice, WCDeviceSearchLogic;

@interface WCDeviceSearchViewController : MMUIViewController <WCDeviceSearchLogicDelegate, IWCDeviceBrandMgrExt, ILinkEventExt, UITableViewDelegate, UITableViewDataSource>
{
    MMTableView *m_tableView;
    UILabel *m_headerLbl;
    MMLoadingView *m_loadingView;
    NSMutableArray *m_deviceList;
    unsigned int m_scene;
    WCDeviceSearchLogic *m_searchLogic;
    WCDevice *m_fliterDevice;
    BOOL isViewFirstLoaded;
    unsigned int _scene;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (id)getFooterSettingRichTextView;
- (void)getLoadingCell:(id)arg1;
- (id)init;
- (void)initFooterView;
- (void)initLoadingView;
- (void)initTableView;
- (void)initView;
- (id)initWithDevice:(id)arg1 scene:(unsigned int)arg2;
- (id)initWithScene:(unsigned int)arg1;
- (BOOL)isBLEConnected;
- (BOOL)isWifiConnected;
- (void)jumpToDeviceBrandContactProfile:(id)arg1;
- (void)jumpToMyDeviceProfileWithDevice:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onBack:(id)arg1;
- (void)onDeviceFound:(id)arg1;
- (void)onHelpBtnClicked:(id)arg1;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)reloadData;
@property(nonatomic) unsigned int scene; // @synthesize scene=_scene;
- (void)startScan;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
