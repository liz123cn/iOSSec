//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMTableView, NSDictionary, NSNumber, NSString;

@interface WCPayNewOrderDetailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate>
{
    BOOL _expandDiscount;
    BOOL _expandProducts;
    int _payScene;
    BOOL _bNotShowedFeedbackBrandContact;
    NSString *_transId;
    NSNumber *_payType;
    NSString *_billId;
    MMTableView *_tableView;
    NSDictionary *_response;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
@property(nonatomic) BOOL bNotShowedFeedbackBrandContact; // @synthesize bNotShowedFeedbackBrandContact=_bNotShowedFeedbackBrandContact;
@property(retain, nonatomic) NSString *billId; // @synthesize billId=_billId;
- (id)dateStringFromTimestamp:(int)arg1;
- (void)dealloc;
- (id)detailViewFromResponse:(id)arg1;
- (void)didReceiveMemoryWarning;
- (id)displayNameWithUsername:(id)arg1 trueName:(id)arg2;
- (void)expandDiscount:(id)arg1;
- (void)expandProduct:(id)arg1;
- (id)generateBarView:(id)arg1;
- (id)getFeeNameFromResponse:(id)arg1;
- (id)getGoodsNameNameFromResponse:(id)arg1;
- (void)goToPayer:(id)arg1;
- (void)goToProfileWithUsername:(id)arg1;
- (void)goToReceiver:(id)arg1;
- (void)goToSellerProfile:(id)arg1;
- (void)hackForIAP;
- (BOOL)isFaceToFaceTransferResponse:(id)arg1;
- (BOOL)isIncomeResponse:(id)arg1;
- (BOOL)isOfflinePayResponse:(id)arg1;
- (BOOL)isTradeResponse:(id)arg1;
- (BOOL)isTransferResponse:(id)arg1;
- (id)parseForDetailFromResponse:(id)arg1;
@property(retain, nonatomic) NSNumber *payType; // @synthesize payType=_payType;
- (void)reloadViewWithResponse:(id)arg1;
- (id)reportBottomViewFromResponse:(id)arg1;
- (void)reportOrFeedbackAction:(id)arg1;
- (void)resendRemindReceivedMoneyMessage:(id)arg1;
@property(retain, nonatomic) NSDictionary *response; // @synthesize response=_response;
- (void)sellerAction:(id)arg1;
- (id)sellerTopViewFromResponse:(id)arg1;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(copy, nonatomic) NSString *transId; // @synthesize transId=_transId;
- (void)setupViews;
- (void)simpleHandleError:(id)arg1;
- (id)tableHeaderViewFromResponse:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

