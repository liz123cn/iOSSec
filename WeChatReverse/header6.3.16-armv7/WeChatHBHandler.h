//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IPreEnterWechatLogicExt.h"
#import "UIAlertViewDelegate.h"

@class NSString, NSURL;

@interface WeChatHBHandler : NSObject <IPreEnterWechatLogicExt, UIAlertViewDelegate>
{
    NSString *m_nsAppID;
    NSURL *m_nsAppUrl;
    NSString *m_nsBundleID;
}

- (void).cxx_destruct;
- (void)cancelWeChatHB;
- (void)createWeChateHB;
- (void)dealloc;
- (id)init;
- (void)onPreEnterWechatDone;
- (id)parseURLParams:(id)arg1;
- (void)startWeChatHB:(id)arg1 BundleID:(id)arg2 payInfo:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

