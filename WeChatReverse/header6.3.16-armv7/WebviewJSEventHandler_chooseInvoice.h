//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "WCCardChooseViewControllerDelegate.h"

@class JSEvent, NSString;

@interface WebviewJSEventHandler_chooseInvoice : WebviewJSEventHandlerBase <WCCardChooseViewControllerDelegate>
{
    JSEvent *_jsEvent;
}

- (void).cxx_destruct;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
@property(retain, nonatomic) JSEvent *jsEvent; // @synthesize jsEvent=_jsEvent;
- (void)onChooseCancel;
- (void)onChooseSuccess:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
