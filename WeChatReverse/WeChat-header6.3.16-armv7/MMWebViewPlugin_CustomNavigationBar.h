//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMWebViewPluginBase.h"

@interface MMWebViewPlugin_CustomNavigationBar : MMWebViewPluginBase
{
    BOOL _bIsJsapiDefineNavigationLeftItem;
    BOOL _bIsJsapiDefineNavigationRightItem;
    CDUnknownBlockType _onClickRightNavItem;
    BOOL _bIsShowNavigationLoading;
}

- (void).cxx_destruct;
- (void)changeStatusBarWhite:(BOOL)arg1;
- (void)dealloc;
- (BOOL)handleEvent:(unsigned int)arg1 userInfo:(id)arg2;
- (void)hideNavigationTitleLoading;
- (id)init;
@property(nonatomic) BOOL m_bIsJsapiDefineNavigationRightItem; // @synthesize m_bIsJsapiDefineNavigationRightItem=_bIsJsapiDefineNavigationRightItem;
- (void)onClickJSDefineRightNavItem;
- (void)setLeftNavBarItemTitle:(id)arg1 color:(id)arg2 icon:(id)arg3;
- (void)setRightNavBarItemHidden:(BOOL)arg1;
- (void)setRightNavBarItemTitle:(id)arg1 color:(id)arg2 icon:(id)arg3 clickAction:(CDUnknownBlockType)arg4;
- (void)setTitle:(id)arg1 color:(id)arg2;
- (void)setTitleColorAndUpdate:(id)arg1;
- (void)showNavigationTitleLoading;

@end

