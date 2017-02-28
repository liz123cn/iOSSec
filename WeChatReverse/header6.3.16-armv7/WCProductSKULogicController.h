//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCRadioButtonGroupDelegate.h"

@class MMTableView, NSArray, NSMutableArray, NSString, UIButton, UILabel, UIView;

@interface WCProductSKULogicController : MMObject <UITableViewDelegate, UITableViewDataSource, WCRadioButtonGroupDelegate>
{
    id <WCProductSKULogicControllerDelegate> _delegate;
    NSArray *_skuAttrTable;
    NSArray *_skuInfoTable;
    NSMutableArray *_skuResult;
    NSMutableArray *_tableDatas;
    unsigned int _purchaseCount;
    unsigned int _stockCount;
    unsigned int _leftBuyQuantity;
    MMTableView *_tableView;
    UIView *_lineImageView;
    UIButton *_reduceButton;
    UIButton *_increaseButton;
    UILabel *_purchaseCountLabel;
    UILabel *_stockCountLabel;
    UILabel *_tipLabel;
    BOOL _isShowCaution;
}

- (void).cxx_destruct;
- (void)addSkuInfo2SKUResult:(id)arg1 forCombItemValue:(id)arg2;
- (void)animationFadeTipLabel;
- (id)buttonIDCombine:(id)arg1;
- (id)buttonIDConvertArr2String:(id)arg1;
- (BOOL)canIncreaseAndUpdateTipLabelWording;
- (void)clearSKUStateInfo;
- (void)dealloc;
@property(nonatomic) __weak id <WCProductSKULogicControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)filterNOStockSKUInfo:(id)arg1;
- (id)getFinalSelectedButtonNames;
- (id)getFinalSelectedGroupIDButtonIDs;
- (id)getFinalSelectedGroupNameButtonNameList;
- (id)getGroupID:(id)arg1 contactButtonID:(id)arg2;
- (unsigned int)getPurchaseCount;
- (id)getPurchaseCountStr;
- (id)getResultItemFromItemValue:(id)arg1;
- (id)getSKUIDList:(id)arg1;
- (id)getSelectedButtonNameList;
- (id)getSelectedGroupNameAndButtonNameList;
- (id)getStockCountStr;
- (float)getTableViewHeight;
- (unsigned int)getTotleStockCount;
- (void)increasePurchaseCount;
- (void)initSKUDisplayInfo;
- (void)initStockCount;
- (id)initWithProductInfo:(id)arg1;
- (BOOL)isNOStock;
- (BOOL)isSKUNOStartSelect;
- (id)isSKUSelectFinish;
- (void)loadSKUData;
- (void)loadSKUSubView:(id)arg1 withScrollEnabled:(BOOL)arg2 contentInset:(struct UIEdgeInsets)arg3;
- (void)loadTableData;
- (void)makeCountCell:(id)arg1;
- (void)makeSKUAttrCell:(id)arg1 withAttrItem:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (id)powerSet:(id)arg1;
- (void)radioButtonGroup:(id)arg1 selectedIndex:(int)arg2;
- (void)reducePurchaseCount;
- (id)selectedGroupIDContactButtonIDList;
- (id)selectedGroupIDContactButtonIDListFilterGroupID:(id)arg1;
- (void)showCaution;
- (id)sortButtonIDList:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)updateIncreaseButton;
- (void)updatePurchaseCountLabel;
- (void)updateReduceButton;
- (void)updateSKUAttrItemState:(id)arg1;
- (void)updateStockCount:(id)arg1;
- (void)updateUIInfoPriceAndStockCount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
