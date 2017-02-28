//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMPickerViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCDeviceDebugMgrExt.h"

@class MMTableView, NSMutableArray, NSString;

@interface WCDeviceDebugViewController : MMUIViewController <WCDeviceDebugMgrExt, UITextFieldDelegate, MMPickerViewDelegate, UITableViewDataSource, UITableViewDelegate, WCActionSheetDelegate>
{
    NSMutableArray *m_data;
    MMTableView *m_tableView;
    NSString *m_userName;
    int m_lastIndex;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (void)initView;
- (id)initWithUserName:(id)arg1;
- (void)loadMoreLogs;
- (void)makeCell:(id)arg1 forInfo:(id)arg2;
- (void)makeCell:(id)arg1 forLog:(id)arg2;
- (void)makeCell:(id)arg1 forTips:(id)arg2;
- (void)makeCellTextAndCaculateHeight:(id)arg1;
- (void)onCleanClick;
- (void)onFAQClick;
- (void)onLogAdded;
- (void)onLogClean;
- (void)onOperate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

