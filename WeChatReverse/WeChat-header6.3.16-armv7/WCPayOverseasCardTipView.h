//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "ILinkEventExt.h"
#import "MMWebViewDelegate.h"

@class MMWebViewController, NSString, UIButton, UIImageView;

@interface WCPayOverseasCardTipView : MMUIView <ILinkEventExt, MMWebViewDelegate>
{
    UIImageView *_backgroundView;
    UIButton *_selectBtn;
    UIButton *_cancelButton;
    MMWebViewController *_webView;
    id <WCPayOverseasCarTipDelegate> m_tipViewDelegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)genBackgroundView;
- (void)initBottomView;
- (void)initTextView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <WCPayOverseasCarTipDelegate> m_tipViewDelegate; // @synthesize m_tipViewDelegate;
- (void)onCancel;
- (void)onConfirm;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (void)onSelect;
- (void)webViewReturn:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

