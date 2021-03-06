//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "FindBrandRecommendLogicControllerDelegate.h"

@class BrandServiceWebSearchController, BrandServieSearchController, FindBrandRecommendLogicController, NSString;

@interface FindBrandViewController : MMSearchBarDisplayController <FindBrandRecommendLogicControllerDelegate>
{
    unsigned long _entryFlag;
    FindBrandRecommendLogicController *_recommendLogicController;
    BrandServiceWebSearchController *_brandServiceSearchController;
    BrandServieSearchController *_brandServiceSearchControllerOld;
    unsigned long _searchScene;
}

- (void).cxx_destruct;
- (void)hasRecommendData;
- (void)initListLogicController;
- (void)initServiceSearchController;
- (void)initView;
- (id)initWithEntryFlay:(unsigned long)arg1;
@property(nonatomic) unsigned long searchScene; // @synthesize searchScene=_searchScene;
- (void)showContactInfoView:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidPop:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

