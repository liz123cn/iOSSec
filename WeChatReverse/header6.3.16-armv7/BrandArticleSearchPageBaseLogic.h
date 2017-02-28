//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXSearchJSLogicImpl.h"

#import "UIWebViewDelegate.h"

@class BrandArticleSearchLogic, FTSWebSearchMgr, NSString;

@interface BrandArticleSearchPageBaseLogic : WXSearchJSLogicImpl <UIWebViewDelegate>
{
    BrandArticleSearchLogic *m_searchLogic;
    FTSWebSearchMgr *m_searchMgr;
}

- (void).cxx_destruct;
- (id)currentImplement;
- (id)currentLanguage;
- (void)dealloc;
- (float)fontSizeRatio;
- (id)initWithSearchLogic:(id)arg1 webView:(id)arg2;
- (void)onOpenBrandContact:(id)arg1 withParams:(id)arg2;
- (void)onOpenMsgSession:(id)arg1;
- (unsigned long)searchScene;
- (unsigned long)searchVersion;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(int)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

