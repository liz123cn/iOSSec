//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCCardBaseCardDetailContentView.h"

#import "ILinkEventExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCCardDetailContentLogicDelegate.h"
#import "WCCardSecondaryViewDelegate.h"
#import "WCShareCardGeneralCardHeaderDelegate.h"

@class MMUIView, NSString, WCShareCardGeneralHeaderView;

@interface WCCardGeneralCardDetailContentView : WCCardBaseCardDetailContentView <UITableViewDelegate, UITableViewDataSource, WCCardDetailContentLogicDelegate, WCShareCardGeneralCardHeaderDelegate, WCCardSecondaryViewDelegate, ILinkEventExt>
{
    BOOL _bIsShareCardMode;
    id <WCCardGeneralCardContentDelegate> _delegte;
    WCShareCardGeneralHeaderView *_generalCardHeaderView;
    MMUIView *_separateStrokeView;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL bIsShareCardMode; // @synthesize bIsShareCardMode=_bIsShareCardMode;
- (void)clickEnterUserListBtn;
- (void)clickWhoCanSeeBtn:(id)arg1;
- (id)createTableViewFooterView;
- (id)createTableViewHeaderView;
@property(nonatomic) __weak id <WCCardGeneralCardContentDelegate> delegte; // @synthesize delegte=_delegte;
- (id)genEnterShareCardUserListBtnView;
@property(retain, nonatomic) WCShareCardGeneralHeaderView *generalCardHeaderView; // @synthesize generalCardHeaderView=_generalCardHeaderView;
- (struct CGRect)getHeaderViewApplyBtnFrame;
- (struct CGRect)getShareCardEnterListBtnRect;
- (void)initContentView;
- (id)initContentViewWithFrame:(struct CGRect)arg1 isShareCardMode:(BOOL)arg2 withCardDataSource:(id)arg3 withOneUsedStoreInfo:(id)arg4 withServiceContact:(id)arg5 withDelegate:(id)arg6;
- (BOOL)isItemFromOutAppScene;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onClickAcceptCardBtn:(id)arg1;
- (void)onClickShareCardBtn;
- (void)onGeneralCardViewApplyBtnClick;
- (void)onGeneralCardViewOperateBtnClick;
- (void)onLinkClicked:(id)arg1 backupUrl:(id)arg2 withRect:(struct CGRect)arg3;
- (void)onNearbyShopPhoneNumClick;
- (void)onNeedOpenUrlStr:(id)arg1;
- (void)onWCCardSecondaryFieldClicked:(id)arg1 Title:(id)arg2;
- (void)reloadContentData;
@property(retain, nonatomic) MMUIView *separateStrokeView; // @synthesize separateStrokeView=_separateStrokeView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

