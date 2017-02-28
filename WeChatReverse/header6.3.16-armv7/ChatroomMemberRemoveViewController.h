//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ContactsItemViewDelegate.h"
#import "IGroupMgrExt.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSMutableArray, NSString;

@interface ChatroomMemberRemoveViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, IGroupMgrExt, ContactsItemViewDelegate>
{
    NSString *_groupName;
    NSString *_removingUserName;
    NSMutableArray *_arrRemoveMember;
    MMTableView *_tableView;
    id <ChatroomMemberRemoveViewControllerDelegate> _vcDelegate;
}

- (void).cxx_destruct;
- (void)OnDelGroupMember:(id)arg1 withResult:(unsigned long)arg2 memberList:(id)arg3 errTip:(id)arg4;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (id)initWithGroupName:(id)arg1 arrRemoveMember:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 row:(unsigned int)arg3;
- (void)onCancel;
- (void)onContactsItemViewRightButtonClick:(id)arg1;
- (void)reloadDataAndView;
- (void)removeChatRoomMember:(id)arg1 scene:(unsigned int)arg2;
@property(nonatomic) __weak id <ChatroomMemberRemoveViewControllerDelegate> vcDelegate; // @synthesize vcDelegate=_vcDelegate;
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

