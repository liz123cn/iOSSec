//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIAlertViewDelegate.h"

@class MMLoadingView, NSString;

@interface MMDBRepairViewController : MMUIViewController <UIAlertViewDelegate>
{
    MMLoadingView *m_loadingView;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)forceToClose;
- (void)initView;
- (void)onConfirm;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

