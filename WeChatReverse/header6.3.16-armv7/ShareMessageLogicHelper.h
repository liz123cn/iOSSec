//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "SessionSelectControllerDelegate.h"
#import "ShareMessageConfirmLogicHelperDelegate.h"
#import "UIAlertViewDelegate.h"

@class CMessageWrap, NSString, UIViewController;

@interface ShareMessageLogicHelper : MMObject <SessionSelectControllerDelegate, ShareMessageConfirmLogicHelperDelegate, UIAlertViewDelegate>
{
    UIViewController *_viewController;
    CMessageWrap *_msgWrap;
    id <ShareMessageLogicHelperDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSendMessageCancel:(id)arg1;
- (void)OnSendMessageFail:(id)arg1 WithError:(int)arg2;
- (void)OnSendMessageOK:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <ShareMessageLogicHelperDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithViewController:(id)arg1 andMessageWrap:(id)arg2;
@property(retain, nonatomic) CMessageWrap *messageWrap; // @synthesize messageWrap=_msgWrap;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
- (void)showAlertView;
- (void)startSendMessage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
