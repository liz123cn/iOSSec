//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "JSEventHandler.h"
#import "WebviewJSEventHandlerBaseDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSString, UIWebView, WebviewJSEventHandlerFacade;

@interface WebViewJSLogicImpl : MMObject <JSEventHandler, WebviewJSEventHandlerBaseDelegate>
{
    NSMutableDictionary *_jsCallbackHooks;
    NSMutableDictionary *_jsUrlHooks;
    NSMutableArray *_jsEvents;
    WebviewJSEventHandlerFacade *_jsEventHandlerFacade;
    UIWebView *_webView;
    id <WebViewJSLogicDelegate> _delegate;
    NSString *_curRandomUUID;
    NSString *_curContextUUID;
    BOOL _isUseMd5ForJSAPI;
}

- (void).cxx_destruct;
- (id)GetCurrentWebviewViewController;
- (void)cleanJSAPIDelegate;
- (void)dealloc;
@property(nonatomic) __weak id <WebViewJSLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (id)extraDataForNextJSEventCalled:(id)arg1;
- (id)funcDefByName:(id)arg1;
- (void)functionCall:(id)arg1 withParams:(id)arg2 withCallbackID:(id)arg3;
- (void)handleJSApiDispatchMessage:(id)arg1;
- (id)init;
- (void)injectPluginJS;
- (void)injectWeixinJSBridge;
- (id)isExistJSApis:(id)arg1;
- (BOOL)isJSBridgeLoaded;
- (id)jsEventWithFunction:(id)arg1 params:(id)arg2 callBackID:(id)arg3;
- (void)jsHandlerHandle:(id)arg1;
- (void)markPageWebCached;
- (id)onEndEvent:(id)arg1 withResult:(id)arg2;
- (void)recoverJSAPIEventDelegateWithBackup;
- (void)reportIDKeyForInjectJS;
- (void)reportIDKeyForJsApiCall:(id)arg1;
- (id)sendEventToJSBridge:(id)arg1 params:(id)arg2;
- (void)sendGetA8KeyUrlEvent:(id)arg1;
- (id)sendMessageToJSBridge:(id)arg1;
- (void)setJSAPIFunctionMap:(id)arg1;
@property(retain, nonatomic) UIWebView *webView; // @synthesize webView=_webView;
- (id)sha1:(id)arg1;
- (BOOL)tryInjectWeixinJSBridge:(id)arg1;
- (id)webviewController;
- (void)webviewWillAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
