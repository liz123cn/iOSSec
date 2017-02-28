//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMWebImageViewDelegate.h"

@class NSString, WCCardPkgMsg;

@interface WCCardMsgView : MMUIView <MMWebImageViewDelegate>
{
    WCCardPkgMsg *_cardMsg;
    id <WCCardMsgViewDelegate> _delegate;
}

+ (float)GetHeightForCardMsg:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) __weak id <WCCardMsgViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithCardMsg:(id)arg1;
- (void)layoutSubviews;
- (void)onAction;
- (void)onLoadImageOK:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
