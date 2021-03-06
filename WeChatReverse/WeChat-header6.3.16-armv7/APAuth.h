//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APBase.h"

#import "GetA8KeyLogicDelegate.h"
#import "NSURLConnectionDelegate.h"
#import "PBMessageObserverDelegate.h"

@class NSString, NSURLConnection;

@interface APAuth : APBase <GetA8KeyLogicDelegate, NSURLConnectionDelegate, PBMessageObserverDelegate>
{
    id <APAuthDelegate> delegate;
    NSURLConnection *_connection;
    int _retryCount;
}

+ (id)apAuthFromApBase:(id)arg1;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)cancel;
- (BOOL)checkExpired;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;
- (id)currMac;
- (void)dealloc;
@property(nonatomic) __weak id <APAuthDelegate> delegate; // @synthesize delegate;
@property(readonly, copy) NSString *description;
- (void)didExpired;
- (void)didFail:(BOOL)arg1;
- (void)didStart;
- (void)didSuccess;
- (void)handleHomeBarClicked:(id)arg1;
- (id)initWithGetA8KeyResult:(id)arg1 cache:(id)arg2 scene:(unsigned long)arg3 delegate:(id)arg4;
- (BOOL)isExpired;
- (BOOL)isFromCacheAndExpired;
- (BOOL)isFromCacheAndValid;
- (void)logout;
- (void)onAPAuth:(id)arg1;
- (void)prepareForAuth;
@property(nonatomic) int retryCount; // @synthesize retryCount=_retryCount;
- (void)sendRequestToAPWithUrlString:(id)arg1 withParams:(id)arg2;
- (void)sendRequestWithCheckUrl:(id)arg1 withParams:(id)arg2;
- (void)sendRequestWithGatewayUrl:(id)arg1 withParams:(id)arg2;
- (void)sendToWeixinSvrToGetAPAuth:(id)arg1;
- (void)start;
- (void)startIniOS9;
- (void)startWithMac:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

