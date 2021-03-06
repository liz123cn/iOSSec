//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseScanLogicController.h"

#import "IScanStreetViewMgrExt.h"
#import "LocationRetrieveDelegate.h"
#import "MMWebViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class CLLocation, LocationRetriever, MMWebViewController, NSString;

@interface ScanStreetViewLogicController : BaseScanLogicController <IScanStreetViewMgrExt, LocationRetrieveDelegate, MMWebViewDelegate, WCActionSheetDelegate, UIAlertViewDelegate>
{
    MMWebViewController *_webViewController;
    int _retryCount;
    CLLocation *_location;
    LocationRetriever *_locationRetriever;
    NSString *_streetViewUrl;
    NSString *_alertText;
    BOOL _shouldShowScanAnimation;
}

- (void).cxx_destruct;
- (void)OnSendStreetViewLocation:(id)arg1 Err:(int)arg2;
- (void)checkAllReady;
- (void)dealloc;
- (id)getAlertText;
- (struct CGRect)getDrawCropRect;
- (id)getInfoText;
- (id)init;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onWebViewDidFinishLoad:(id)arg1;
- (BOOL)shouldHideAlertOnClicked;
- (BOOL)shouldStartScanAnimation;
- (void)startLocating;
- (void)startScan;
- (void)stopLocating;
- (void)stopScan;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

