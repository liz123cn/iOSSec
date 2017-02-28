//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IStrangerContactMgrExt.h"
#import "IWCProductExt.h"
#import "LoopPageScrollViewDataSourceDelegate.h"
#import "MMImageLoaderObserver.h"
#import "SendAppMsgHandleDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "WCBizFullImageViewDelegate.h"
#import "WCProductActionLogicControllerDelegate.h"
#import "WCRecommandGroupViewDelegate.h"

@class LoopPageScrollView, MMAnimationTipView, MMTableView, NSData, NSMutableArray, NSString, SendAppMsgHandler, WCProductActionLogicController, WCProductInfo, WCUIPageControl;

@interface WCProductDetailViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, LoopPageScrollViewDataSourceDelegate, WCProductActionLogicControllerDelegate, SendAppMsgHandleDelegate, IWCProductExt, MMImageLoaderObserver, IStrangerContactMgrExt, WCBizFullImageViewDelegate, WCRecommandGroupViewDelegate>
{
    WCProductInfo *_productInfo;
    NSMutableArray *_tableDatas;
    NSMutableArray *_actionGroupList;
    NSMutableArray *_bigImageUrls;
    LoopPageScrollView *_bigImageScrollView;
    WCUIPageControl *_bigImagePageControl;
    MMTableView *_tableView;
    WCProductActionLogicController *_actionLogicController;
    SendAppMsgHandler *_sendAppMsgHandler;
    MMAnimationTipView *m_tipView;
    NSString *_thumbImageUrl;
    NSData *_thumbImageData;
    BOOL isFromFav;
    BOOL productIDISScanCode;
    unsigned long scene;
    id <WCProductDetailViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)ImageDidFail:(id)arg1;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)OnSendAppMsgOK;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (struct CGSize)caluMaxPriceSizeWithWXPrice:(id)arg1 withOriginPrice:(id)arg2;
- (void)changePageControlToNextPage;
- (id)createTableHeaderView;
- (void)dealloc;
@property(nonatomic) __weak id <WCProductDetailViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didChangeToPage:(unsigned long)arg1;
- (void)didTapPageAtNum:(unsigned long)arg1;
- (void)enterStore;
- (void)fav;
- (id)getServiceContant;
- (id)getViewController;
- (id)getWxPriceRegion;
- (BOOL)hasService;
- (void)initData;
- (void)initView;
- (id)initWithExtString:(id)arg1;
- (id)initWithWCProductID:(id)arg1;
- (id)initWithWCProductInfo:(id)arg1;
- (BOOL)isCanPurchase;
@property(nonatomic) BOOL isFromFav; // @synthesize isFromFav;
- (BOOL)isNOStock;
- (void)jumpToContactInfoViewController:(id)arg1;
- (void)jumpToNewMessage:(id)arg1;
- (void)loadActionData;
- (void)loadBigImageData;
- (void)loadTableData;
- (void)makeActionGroupCell:(id)arg1 withTitle:(id)arg2;
- (void)makeActionItemCell:(id)arg1 withItemInfo:(id)arg2 atIndex:(unsigned int)arg3;
- (void)makeDescCell:(id)arg1 withDesc:(id)arg2;
- (void)makeDetailCell:(id)arg1;
- (void)makePricesCell:(id)arg1 withWXPrice:(id)arg2 withOriginprice:(id)arg3;
- (void)makePurchaseCell:(id)arg1;
- (void)makeWordCell:(id)arg1 withWord:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onGotProductDetailFail:(id)arg1;
- (void)onGotProductDetailSuccess:(id)arg1 productID:(id)arg2 retCode:(int)arg3;
- (void)onOperate:(id)arg1;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onWCBizFullScreenImageViewHide:(unsigned long)arg1;
- (void)openContactInfoView;
- (void)openProductSKUView;
@property(nonatomic) BOOL productIDISScanCode; // @synthesize productIDISScanCode;
- (void)reloadProductInfo:(id)arg1;
@property(nonatomic) unsigned long scene; // @synthesize scene;
- (void)sendToFriend;
- (void)shareToTimeLine;
- (void)showDebugJsonView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)totalNumOfPage;
- (void)updateActionItemListHeight;
- (void)updateProductDetail;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)viewForPage:(id)arg1 pageNum:(unsigned long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
