//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, NSArray, NSString, UIScrollView;

@interface PublicWifiApInfoListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    NSArray *m_apInfos;
    unsigned int m_state;
    MMTableView *m_tableView;
    UIScrollView *m_errorView;
    id <PublicWifiApInfoListViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PublicWifiApInfoListViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)doBack;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)initErrorView;
- (void)initHeaderView;
- (void)initTableView;
- (void)initView;
- (id)initWithApInfos:(id)arg1 state:(unsigned int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
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

