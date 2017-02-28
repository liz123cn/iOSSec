//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IContactMgrExt.h"
#import "PBMessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSDictionary, NSString;

@interface WCBusinessJumpViewController : MMUIViewController <PBMessageObserverDelegate, IContactMgrExt, UIAlertViewDelegate>
{
    NSString *_url;
    NSDictionary *_dictTranslateInfo;
    NSString *_jumpUrl;
    MMUIViewController *_parentViewController;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)handleBusinessJump:(id)arg1;
- (id)initWithUrl:(id)arg1 translateInfo:(id)arg2 parentViewController:(id)arg3;
- (void)onReturn;
- (void)sendTranslateReq;
- (void)setLoadingViewTitle:(id)arg1;
- (void)showFailErrorMsg:(id)arg1;
- (void)stopLoadingAndShowError:(id)arg1;
- (void)stopLoadingAndShowOK:(id)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

