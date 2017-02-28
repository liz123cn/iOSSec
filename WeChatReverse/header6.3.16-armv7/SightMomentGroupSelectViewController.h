//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IContactLabelMgrExt.h"
#import "MultiSelectContactsViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCFacadeExt.h"

@class MMTableView, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString, UIImage, UIImageView, UIView;

@interface SightMomentGroupSelectViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UIAlertViewDelegate, IContactLabelMgrExt, WCFacadeExt, MultiSelectContactsViewControllerDelegate>
{
    UIView *m_content;
    UIView *m_background;
    UIImageView *m_blurView;
    MMTableView *m_tableView;
    NSMutableArray *m_arrAllLabelName;
    NSMutableSet *m_selectedVisibleLabelName;
    NSMutableSet *m_selectedInvisibleLabelName;
    BOOL m_bShowDetail;
    float m_originContentOffset;
    BOOL m_hasTryTransferLabel;
    NSMutableDictionary *m_dicGroupLabel;
    int m_transferPrivacy;
    unsigned long m_transferEventId;
    UIImage *_maskImage;
    id <SightMomentGroupSelectDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)createNewLabel:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <SightMomentGroupSelectDelegate> delegate; // @synthesize delegate=_delegate;
- (void)deleteOldSnsGroup;
- (void)editContactLabels;
- (int)getCellType:(id)arg1;
- (id)init;
- (void)initData;
- (BOOL)isSelected:(int)arg1 postPrivacy:(int)arg2 indexPath:(id)arg3;
- (id)loadAllTagNameList;
- (void)makeBackground;
- (void)makeTableView;
- (void)makeTopBar;
@property(retain, nonatomic) UIImage *maskImage; // @synthesize maskImage=_maskImage;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onAddContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned long)arg3;
- (void)onAllTagNameUpdate;
- (void)onDataChange;
- (void)onFinish;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)onWCGroupUpdatedReturn:(BOOL)arg1;
- (void)popSelf;
- (void)reloadAnimate;
- (void)selectContacts;
- (void)setContactLabel:(id)arg1 withRetCode:(int)arg2 andEventId:(unsigned long)arg3;
- (void)showTransferTip;
- (void)sortAndSaveSnsGroupLabel;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
