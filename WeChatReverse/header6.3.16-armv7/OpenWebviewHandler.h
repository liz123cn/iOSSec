//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IPreEnterWechatLogicExt.h"

@class NSString, NSURL;

@interface OpenWebviewHandler : MMObject <IPreEnterWechatLogicExt>
{
    NSString *_appId;
    NSString *_bundleId;
    NSURL *_url;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(retain, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
- (void)dealloc;
- (void)doOpenWebview;
- (id)encodeUrl:(id)arg1;
- (void)onPreEnterWechatDone;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)startHandleAppId:(id)arg1 bundleId:(id)arg2 info:(id)arg3;
- (id)translateToInternalWebviewUrlString;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

