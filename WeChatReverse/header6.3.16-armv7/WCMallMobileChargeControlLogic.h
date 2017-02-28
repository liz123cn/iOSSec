//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCMallControlLogic.h"

#import "IWCPayControlLogicExt.h"
#import "WCMallChargeMobileViewControllerDelegate.h"

@class NSDictionary, NSString, WCPayControlData;

@interface WCMallMobileChargeControlLogic : WCMallControlLogic <WCMallChargeMobileViewControllerDelegate, IWCPayControlLogicExt>
{
    WCPayControlData *m_oPayData;
    BOOL m_bNeedFirstGotoWCMallProductView;
    NSDictionary *dicPayedInfo;
    BOOL bHasTwoCGIRequestInStartLogic;
    BOOL bHasOneCGIHasResponsed;
}

- (void).cxx_destruct;
- (unsigned long)GetWCMallMallProductsAllListCount;
- (id)GetWCMallMallProductsFiltedOldList:(id)arg1;
- (BOOL)IsUsedWCMallMallProduct;
- (void)OnFinishedWCPayLogic:(id)arg1 CompleteStatus:(int)arg2;
- (void)OnGetWCMallFunctionList:(id)arg1 GlobalList:(id)arg2 BroadCastInfo:(id)arg3 BannerList:(id)arg4 FromCached:(BOOL)arg5 NotShowTutorial:(BOOL)arg6 typeMap:(id)arg7 Error:(id)arg8;
- (void)OnGetWCMallPayFunctionListRequest:(id)arg1 Error:(id)arg2;
- (void)OnWCMallChargeMobileViewControllerBack;
- (void)OnWCMallChargeMobileViewControllerRightActionBack;
- (void)OnWCMallChargeMobileViewControllerSelectedProduct:(id)arg1;
- (void)OnWCMallChargePhoneClearOldList;
- (void)OnWCMallChargePhoneTelephoneInputComplete:(id)arg1;
- (void)OnWCMallInputedCompleteTelphone:(id)arg1;
- (void)SetPayData:(id)arg1;
- (void)checkSuccessStopCurrentLogic;
- (void)dealloc;
- (id)init;
- (id)initWithData:(id)arg1;
@property(nonatomic) BOOL m_bNeedFirstGotoWCMallProductView; // @synthesize m_bNeedFirstGotoWCMallProductView;
- (void)startLogic;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

