//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "SKPaymentTransactionObserver.h"
#import "SKProductsRequestDelegate.h"

@class JailBreakHelper, NSMutableArray, NSMutableSet, NSString, iAPCache;

@interface iAPMgr : MMService <SKPaymentTransactionObserver, SKProductsRequestDelegate, PBMessageObserverDelegate, MMService>
{
    NSMutableSet *_setSKProductsRequests;
    NSMutableArray *_arrRestoredTransactions;
    NSMutableArray *_arrRestoredVerifiedTransaction;
    BOOL _bIsRestoring;
    unsigned long _status;
    iAPCache *_iAPCache;
    JailBreakHelper *m_jailBreakHelper;
}

+ (unsigned long)getBizTypeOfProductID:(id)arg1;
+ (unsigned int)getIdKeyIAPPurchaseFailed;
+ (unsigned int)getIdKeyIdIAP;
+ (unsigned int)getIdKeyPreparePurchaseFailed;
+ (unsigned int)getIdKeyVerifyPurchaseFailed;
- (void).cxx_destruct;
- (BOOL)FinishTransaction:(id)arg1;
- (BOOL)GetProduct:(id)arg1;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (int)Purchase:(id)arg1 extInfo:(id)arg2;
- (int)Purchase:(id)arg1 extInfo:(id)arg2 NeedCheckJailBreak:(BOOL)arg3;
- (int)RestoreCompletedTransactions;
- (int)RestoreCompletedTransactionsNeedCheckJailBreak:(BOOL)arg1;
- (unsigned long)UnfinishTransactionCount;
- (void)cancelPurchase:(id)arg1 verifyType:(int)arg2;
- (BOOL)cannotPurchaseDuetoJailbreakPlugin:(BOOL)arg1;
- (int)covertErrcode:(unsigned int)arg1;
- (void)dealloc;
- (void)finishTransactionForTransactionID:(id)arg1;
- (BOOL)isNonConsumable:(id)arg1;
@property(retain, nonatomic) JailBreakHelper *m_jailBreakHelper; // @synthesize m_jailBreakHelper;
- (void)onPreparePurchase:(id)arg1;
- (void)onServiceEnterBackground;
- (void)onServiceInit;
- (void)onServiceTerminate;
- (void)onVerifyPurchase:(id)arg1;
- (void)onVerifyPurchaseForPurchase:(id)arg1 request:(id)arg2 IapRet:(int)arg3;
- (void)onVerifyPurchaseForRestore:(id)arg1 request:(id)arg2;
- (id)pathForCache;
- (void)paymentQueue:(id)arg1 removedTransactions:(id)arg2;
- (void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2;
- (void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2;
- (void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1;
- (BOOL)preparePurchase:(id)arg1 extInfo:(id)arg2;
- (void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2;
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)restoreNextTransaction:(id)arg1;
- (void)verifyTransation:(id)arg1 verifyType:(int)arg2;
- (void)verifyTransationForUnVerifyTransaction:(id)arg1 verifyType:(int)arg2 uiscene:(unsigned long)arg3;
- (void)verifyTransationForUnVerifyTransactionAll:(unsigned long)arg1;
- (void)writeCache;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

