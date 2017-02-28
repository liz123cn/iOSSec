//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PluginContactInfoAssist.h"

#import "IWCDeviceBrandMgrExt.h"
#import "SessionSelectControllerDelegate.h"
#import "contactVerifyLogicDelegate.h"

@class CContactVerifyLogic, NSString, UrlController;

@interface WeSportContactInfoAssist : PluginContactInfoAssist <SessionSelectControllerDelegate, contactVerifyLogicDelegate, IWCDeviceBrandMgrExt>
{
    UrlController *m_urlController;
    CContactVerifyLogic *m_oLogic;
}

- (void).cxx_destruct;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)cancelFocus;
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned long)arg2;
- (void)dealloc;
- (id)getPluginIntro;
- (void)goToCommonQuestion;
- (void)goWeSportCenter;
- (void)goWeSportSessionFrame;
- (void)handleAddedContact;
- (id)initWithContact:(id)arg1 delegate:(id)arg2;
- (void)installPlugin;
- (void)inviteFriend;
@property(retain, nonatomic) CContactVerifyLogic *m_oLogic; // @synthesize m_oLogic;
- (void)onMuteChange:(id)arg1;
- (void)onRecordDataChange;
- (void)onSetPrivacy;
- (void)onTopChange:(id)arg1;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)reloadInstalledTableViewData;
- (void)uninstallPlugin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

