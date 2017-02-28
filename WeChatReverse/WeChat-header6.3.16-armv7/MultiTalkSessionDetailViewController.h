//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MultiTalkSessionDetailLogicControllerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class MMTableView, MultiTalkSessionDetailLogicController, NSString;

@interface MultiTalkSessionDetailViewController : MMUIViewController <MultiTalkSessionDetailLogicControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    MultiTalkSessionDetailLogicController *_logicController;
    MMTableView *_tableView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)initDataWithSessionItem:(id)arg1;
- (void)initTableFooterView;
- (void)initView;
- (id)initWithMultiTalkSessionItem:(id)arg1;
@property(retain, nonatomic) MultiTalkSessionDetailLogicController *logicController; // @synthesize logicController=_logicController;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onEnterMultiTalkBtnPress:(id)arg1;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
