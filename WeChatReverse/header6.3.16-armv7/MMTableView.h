//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableView.h"

#import "MMDelegateCenterExt.h"

@class MMDelegateProxy<UITableViewDataSource>, MMDelegateProxy<UITableViewDelegate>, NSString, UIColor, UIView;

@interface MMTableView : UITableView <MMDelegateCenterExt>
{
    MMDelegateProxy<UITableViewDataSource> *dataSourceProxy;
    MMDelegateProxy<UITableViewDelegate> *delegateProxy;
    id <tableViewDelegate> m_delegateProxy;
    BOOL cancelButtonTouchsTrack;
    Class cancelTouchsTrackClass;
    UIView *_footerView;
    UIView *_footerViewBackground;
    UIColor *_tailColor;
    BOOL m_dontDrawFooterLine;
    BOOL _isMainView;
    id <tableViewDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL cancelButtonTouchsTrack; // @synthesize cancelButtonTouchsTrack;
@property(nonatomic) Class cancelTouchsTrackClass; // @synthesize cancelTouchsTrackClass;
- (void)dealloc;
- (void)deleteRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (void)drawFooterLine:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;
@property(nonatomic) BOOL isMainView; // @synthesize isMainView=_isMainView;
- (void)layoutSubviews;
@property(nonatomic) __weak id <tableViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)onClearMyDelegate:(id)arg1 forProtocols:(id)arg2;
- (void)reloadData;
- (void)reloadDataAnimated;
- (void)reloadRowsAtIndexPaths:(id)arg1 withRowAnimation:(int)arg2;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (void)setContentInsetTop:(float)arg1 andBottom:(float)arg2;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)setContentOffset:(struct CGPoint)arg1 animated:(BOOL)arg2;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setTableFooterView:(id)arg1;
@property(retain, nonatomic) UIColor *tailColor; // @synthesize tailColor=_tailColor;
- (void)setWidth:(float)arg1;
- (void)setWrapperViewBackgroundcolor:(id)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (BOOL)touchesShouldCancelInContentView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

