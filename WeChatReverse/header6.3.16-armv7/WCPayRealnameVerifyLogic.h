//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCPayControlLogic.h"

#import "WCPayRealnameInfoViewControllerDelegate.h"

@class NSString;

@interface WCPayRealnameVerifyLogic : WCPayControlLogic <WCPayRealnameInfoViewControllerDelegate>
{
}

- (void)FillRealnameInfoCancel;
- (void)FillRealnameInfoNext:(id)arg1;
- (void)OnRealnameAuthen:(id)arg1 Error:(id)arg2;
- (void)startLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

