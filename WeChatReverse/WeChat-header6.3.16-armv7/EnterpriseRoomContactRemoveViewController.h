//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EnterpriseContactItemViewDelegate.h"
#import "IEnterpriseGroupMgrExt.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSMutableArray, NSString;

@interface EnterpriseRoomContactRemoveViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, IEnterpriseGroupMgrExt, EnterpriseContactItemViewDelegate>
{
    NSString *_groupName;
    NSString *_removingUserName;
    NSString *_chatBrandUserName;
    NSMutableArray *_aryRemoveMember;
    MMTableView *_tableView;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (id)initWithGroupName:(id)arg1 aryRemoveMember:(id)arg2 chatBrandUserName:(id)arg3;
- (void)onCancel;
- (void)onEnterpriseContactItemViewRightButtonClick:(id)arg1;
- (void)onUpdateEnterpriseGroupMemberList:(id)arg1 errorCode:(int)arg2;
- (void)reloadAll;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

