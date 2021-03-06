//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSString;

@interface WCHomepageDataProvider_Sns : MMObject <PBMessageObserverDelegate>
{
    NSString *username;
    NSString *fpHash;
    BOOL isWorking;
    id <WCDataProviderDelegate> delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (id)converListToList:(id)arg1;
- (void)dealloc;
@property(nonatomic) __weak id <WCDataProviderDelegate> delegate; // @synthesize delegate;
- (void)forceUpdateWithReferID:(id)arg1;
- (void)internalSaveResponseListForFutureList:(id)arg1;
- (void)requestForSnsHomepageRequest:(id)arg1 minID:(id)arg2 source:(int)arg3;
- (void)requestForSnsHomepageRequest:(id)arg1 source:(int)arg2;
- (BOOL)responseForSnsUserPageResponse:(id)arg1 Event:(unsigned long)arg2;
- (void)saveResponseListForFutureList:(id)arg1;
@property(retain, nonatomic) NSString *username; // @synthesize username;
- (void)updateHeadWithSource:(int)arg1;
- (void)updateWithReferID:(id)arg1;
- (void)updateWithReferID:(id)arg1 bottomID:(id)arg2;

@end

