//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WebviewJSEventHandlerBase.h"

@interface WebviewJSEventHandler_getInstallState : WebviewJSEventHandlerBase
{
}

- (void)batchGetInstallStateInBackground:(id)arg1 event:(id)arg2;
- (BOOL)batchGetIntstallState:(id)arg1 intoDictionary:(id *)arg2;
- (BOOL)getInstallStateWithPackageUrl:(id)arg1;
- (void)handleJSEvent:(id)arg1 HandlerFacade:(id)arg2 ExtraData:(id)arg3;
- (id)processPackageUrls:(id)arg1;

@end

