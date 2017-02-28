//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "BlockViewControllerDelegate.h"
#import "IPreEnterWechatLogicExt.h"
#import "PBMessageObserverDelegate.h"

@class BlockViewController, NSString, NSURL;

@interface SMSAddCardHandler : MMObject <BlockViewControllerDelegate, PBMessageObserverDelegate, IPreEnterWechatLogicExt>
{
    NSURL *_infoUrl;
    BlockViewController *_blockView;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)cancelCheckAndAddCard;
- (void)createWechatSMSAddCard;
- (void)dealloc;
- (void)handleSMSAddCard:(id)arg1;
- (void)onBlockViewControllerReturn;
- (void)onPreEnterWechatDone;
- (void)startCheckAndAddCard:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

