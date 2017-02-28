//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSMBaseViewController.h"

#import "MMSafeModeMgrExt.h"

@class MMActivityIndicator, NSString, UIButton, UILabel;

@interface MMSMClearDataViewController : MMSMBaseViewController <MMSafeModeMgrExt>
{
    int m_percent;
    MMActivityIndicator *m_loadingView;
    UILabel *m_loadingTip;
    UIButton *m_clearButton;
    UIButton *m_nextButton;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
- (id)init;
- (void)onClearButtonClicked:(id)arg1;
- (void)onClearUnnecessaryFilesFinished;
- (void)onNextButtonClicked:(id)arg1;
- (void)startFakeLoadingToProgress:(int)arg1;
- (void)updateProgress:(unsigned long)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

