//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIAlertViewDelegate.h"

@class NSString, UIButton;

@interface RecoverFavoritesDBViewController : MMUIViewController <UIAlertViewDelegate>
{
    UIButton *_btnRecover;
}

- (void).cxx_destruct;
- (void)DoRecover;
- (void)OnRecover;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

