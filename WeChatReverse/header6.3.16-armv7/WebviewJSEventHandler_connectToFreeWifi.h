//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IPublicWifiManagerExt.h"

@class JSEvent, NSString;

@interface WebviewJSEventHandler_connectToFreeWifi : WebviewJSEventHandlerBase <IPublicWifiManagerExt>
{
    JSEvent *_event;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) JSEvent *event; // @synthesize event=_event;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (void)onPublicWifiSessionClosed;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
