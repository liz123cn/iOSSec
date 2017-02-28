//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

#import "IWebviewResourceManagerExt.h"

@class NSString;

@interface WebviewJSEventHandler_downloadVoice : WebviewJSEventHandlerBase <IWebviewResourceManagerExt>
{
    BOOL _isShowProgressTips;
}

- (void)dealloc;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)init;
- (void)onResourceDownloadFinished:(id)arg1 SvrId:(id)arg2 ErrCode:(int)arg3;
- (void)onResourceDownloadProgress:(int)arg1 SvrId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

