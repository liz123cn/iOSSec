//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCBaseControlMgrExt.h"
#import "scrollViewDelegate.h"

@class MMScrollView, NSMutableArray, NSString, UILabel, UIView, WCPayControlLogic;

@interface ServiceAppListViewController : MMUIViewController <scrollViewDelegate, WCBaseControlMgrExt>
{
    NSMutableArray *_wxSvcAppArray;
    NSMutableArray *_brandSvcAppArray;
    UILabel *_wxSvcTitle;
    UILabel *_brandSvcTitle;
    MMScrollView *_scrollView;
    UIView *_wxSvcBGView;
    UIView *_brandSvcBGView;
    NSString *_username;
    WCPayControlLogic *m_payControlLogic;
}

- (void).cxx_destruct;
- (void)OnCancelModalView:(id)arg1;
- (void)dealloc;
- (id)getServiceListView:(id)arg1;
- (id)init;
- (void)initData;
- (void)initEmptyView;
- (void)initSubView;
- (void)onAppClick:(id)arg1;
- (void)onWCBaseLogicDidStop:(unsigned long)arg1;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

