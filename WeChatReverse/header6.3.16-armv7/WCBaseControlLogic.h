//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCBaseControlLogicDeleagte.h"

@class NSMutableArray, NSString;

@interface WCBaseControlLogic : MMObject <WCBaseControlLogicDeleagte>
{
    NSMutableArray *m_arrVC;
    unsigned long m_uiLogicStatus;
    unsigned long m_tag;
    unsigned long long m_uiStartedTime;
    id <MMUIViewControllerDelegate> m_vcRootDelegate;
    id <WCBaseControlLogicDeleagte> m_logicDelegate;
}

- (void).cxx_destruct;
- (void)addTopViewController:(id)arg1;
- (void)cancel;
- (void)checkStopLogic;
- (void)dismissCurrentViewAndCheckStopLogicWithAnimated:(BOOL)arg1;
- (void)dismissCurrentViewWithAnimated:(BOOL)arg1;
- (id)getCurrentViewController;
- (void)gotoRootViewControllerAndStopLogicWithAnimated:(BOOL)arg1;
- (void)gotoRootViewControllerWithAnimated:(BOOL)arg1;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Animation:(BOOL)arg3;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(BOOL)arg3;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(BOOL)arg3 Animation:(BOOL)arg4;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(BOOL)arg3 showNavigation:(BOOL)arg4 Animation:(BOOL)arg5;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Present:(BOOL)arg3 showNavigation:(BOOL)arg4 Animation:(BOOL)arg5 transitioningDelegate:(id)arg6;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Title:(id)arg3 HeadTip:(id)arg4;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Title:(id)arg3 HeadTip:(id)arg4 Present:(BOOL)arg5;
- (id)gotoViewController:(Class)arg1 withData:(id)arg2 Title:(id)arg3 HeadTip:(id)arg4 Present:(BOOL)arg5 Animation:(BOOL)arg6;
- (id)gotoViewControllerHideNavigation:(Class)arg1 withData:(id)arg2 Animation:(BOOL)arg3;
- (id)init;
- (BOOL)isLogicCancel;
- (BOOL)isLogicCompleteOK;
@property(readonly, nonatomic) __weak id <WCBaseControlLogicDeleagte> m_logicDelegate; // @synthesize m_logicDelegate;
@property(nonatomic) unsigned long m_tag; // @synthesize m_tag;
@property(readonly, nonatomic) unsigned long long m_uiStartedTime; // @synthesize m_uiStartedTime;
@property(readonly, nonatomic) __weak id <MMUIViewControllerDelegate> m_vcRootDelegate; // @synthesize m_vcRootDelegate;
- (BOOL)onError:(id)arg1;
- (void)pause;
- (void)presentViewController:(id)arg1 Animated:(BOOL)arg2 showNavigation:(BOOL)arg3;
- (void)presentViewController:(id)arg1 Animated:(BOOL)arg2 showNavigation:(BOOL)arg3 transitioningDelegate:(id)arg4;
- (void)pushViewController:(id)arg1 Animated:(BOOL)arg2;
- (void)pushViewController:(id)arg1 Animated:(BOOL)arg2 transitioningDelegate:(id)arg3;
- (void)removeTopViewController;
- (void)resume;
- (void)setRootViewControllerDelegate:(id)arg1;
- (void)setlogicDelegate:(id)arg1;
- (void)showLoadingOK:(id)arg1;
- (void)startLoading;
- (void)startLoadingWithTip:(id)arg1;
- (void)startLogic;
- (void)stopLoading;
- (void)stopLogic;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

