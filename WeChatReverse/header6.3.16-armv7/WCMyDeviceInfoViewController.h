//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IStrangerContactMgrExt.h"
#import "IWCDeviceBrandMgrExt.h"
#import "WCActionSheetDelegate.h"
#import "WCMyDeviceInfoAssistDelegate.h"

@class NSString, WCDevice, WCMyDeviceInfoAssist;

@interface WCMyDeviceInfoViewController : MMUIViewController <WCMyDeviceInfoAssistDelegate, IWCDeviceBrandMgrExt, WCActionSheetDelegate, IStrangerContactMgrExt>
{
    WCMyDeviceInfoAssist *m_oDeviceInfoAssist;
    id m_deviceData;
    BOOL m_ignoreContact;
    unsigned int m_source;
    WCDevice *_deviceInfo;
}

- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)dealloc;
@property(retain, nonatomic) WCDevice *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
- (void)didReceiveMemoryWarning;
- (id)getDeviceStrangerContact;
- (id)getViewController;
- (id)init;
- (id)initBindInfoWithContact:(id)arg1 userData:(id)arg2;
- (void)initMyDeviceInfoAssist;
- (id)initWithDevice:(id)arg1;
- (id)initWithDevice:(id)arg1 userData:(id)arg2;
- (void)jumpToContactInfoViewController:(id)arg1;
@property(nonatomic) BOOL m_ignoreContact; // @synthesize m_ignoreContact;
@property(nonatomic) unsigned int m_source; // @synthesize m_source;
- (void)onBindDevice;
- (void)onEnterBrandSession;
- (void)onRemarkEdited:(id)arg1;
- (void)onShowDeviceSession;
- (void)onStrangerContactUpdated:(id)arg1;
- (void)onUnbindDevice;
- (void)onWCDeviceBindEnd:(id)arg1 Error:(id)arg2;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)reloadView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

