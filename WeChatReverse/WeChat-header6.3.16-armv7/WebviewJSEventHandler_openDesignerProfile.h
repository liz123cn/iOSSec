//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IStoreEmotionDesignerInfoMgrExt.h"

@class JSEvent, MMUIViewController, NSString;

@interface WebviewJSEventHandler_openDesignerProfile : WebviewJSEventHandlerBase <IStoreEmotionDesignerInfoMgrExt>
{
    JSEvent *m_event;
    NSString *m_designerId;
    MMUIViewController *m_viewController;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)endWithFail;
- (void)endWithOk;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)handleWithParams:(id)arg1 AndViewController:(id)arg2;
- (void)onGetDesignerForDesignerId:(id)arg1 AndDesigner:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

