//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMScrollView.h"

#import "WCImageScrollViewDelegate.h"

@class NSMutableSet, NSString;

@interface PageScrollView : MMScrollView <WCImageScrollViewDelegate>
{
    NSMutableSet *_recycledPages;
    NSMutableSet *_visiblePages;
    BOOL _reloading;
    BOOL _supportOrientation;
    id <PageScrollViewDataSource> _pageDataSource;
    id <PageScrollViewDelegate> _pageDelegate;
    float m_padding;
}

- (void).cxx_destruct;
- (float)Padding;
- (void)configPadding:(float)arg1;
- (void)dealloc;
- (id)dequeueRecycledPage;
- (void)foreceReloadData;
- (struct CGRect)frameForPageAtItem:(unsigned int)arg1;
- (unsigned int)getCurrentIndex;
- (unsigned int)getItemsCount;
- (id)getViewForItem:(unsigned int)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isDisplayingPageForItem:(unsigned int)arg1;
@property(nonatomic) float m_padding; // @synthesize m_padding;
- (void)onDoubleTapWCImageScrollView;
- (void)onSingleTapWCImageScrollView;
@property(nonatomic) __weak id <PageScrollViewDataSource> pageDataSource; // @synthesize pageDataSource=_pageDataSource;
@property(nonatomic) __weak id <PageScrollViewDelegate> pageDelegate; // @synthesize pageDelegate=_pageDelegate;
@property(retain, nonatomic) NSMutableSet *recycledPages; // @synthesize recycledPages=_recycledPages;
- (void)reloadData;
- (void)removeVisiblePageAtIndex:(unsigned int)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) BOOL supportOrientation; // @synthesize supportOrientation=_supportOrientation;
@property(retain, nonatomic) NSMutableSet *visiblePages; // @synthesize visiblePages=_visiblePages;
- (void)updatePageAtIndex:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
