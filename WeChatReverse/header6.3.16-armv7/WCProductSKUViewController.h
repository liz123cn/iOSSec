//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWCAddressGetAddressControlLogicExt.h"
#import "IWCProductExt.h"
#import "UIAlertViewDelegate.h"
#import "WCProductBuyDetailViewControllerDelegate.h"
#import "WCProductSKULogicControllerDelegate.h"

@class MMWebImageView, NSString, UIButton, UILabel, UIView, WCBizLoadingView, WCProductInfo, WCProductOrderInfo, WCProductSKULogicController;

@interface WCProductSKUViewController : MMUIViewController <WCProductSKULogicControllerDelegate, IWCAddressGetAddressControlLogicExt, IWCProductExt, UIAlertViewDelegate, WCProductBuyDetailViewControllerDelegate>
{
    WCProductInfo *_productInfo;
    WCProductOrderInfo *_productOrderInfo;
    WCProductSKULogicController *_skuLogicController;
    unsigned long _scene;
    unsigned long _choosedPrice;
    UIView *_headerView;
    UIView *_footerView;
    MMWebImageView *_imageView;
    UILabel *_wxPriceLabel;
    UIButton *_purchaseButton;
    WCBizLoadingView *_loadingView;
}

- (void).cxx_destruct;
- (void)OnPreFinishedWCAddressLogic:(id)arg1 waitUntilDone:(char *)arg2;
- (void)OnWCAddressGetAddressControlLogicEnd:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (id)getSKUTableFooterView;
- (id)getSKUTableHeaderView;
- (id)getSelectedSKUExpressList:(id)arg1;
- (id)getWxPriceRegion;
- (void)initData;
- (void)initView;
- (id)initWithWCProductInfo:(id)arg1 withScene:(unsigned long)arg2;
- (void)loadIntroSubView:(id)arg1;
- (BOOL)noProductCount;
- (void)onBuyProduct;
- (void)onClickReturn:(id)arg1;
- (void)onPreSubmitOrderFail:(id)arg1 skuID:(id)arg2;
- (void)onPreSubmitOrderSuccess:(id)arg1 skuID:(id)arg2 lockID:(id)arg3 expressList:(id)arg4 discountInfoList:(id)arg5 lockStaus:(int)arg6 errMsg:(id)arg7;
- (void)reloadProductInfo:(id)arg1;
- (void)showWCProductBuyDetailViewController:(BOOL)arg1;
- (void)startLoadingView;
- (void)stopLoadingView;
- (void)updateDisplayInfo:(id)arg1;
- (void)updatePurchaseButton;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

