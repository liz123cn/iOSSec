//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "POPAnimationDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDelegateFlowLayout.h"

@class CALayer, MMHeadImageView, MMUILabel, NSArray, NSMutableArray, NSMutableDictionary, NSString, UICollectionView, UIImage, UIImageView, UIView, WCShareCardData;

@interface WCShareCardUserListViewController : MMUIViewController <POPAnimationDelegate, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    NSArray *_arrShareUserDataList;
    unsigned int _allShareCardCount;
    NSMutableDictionary *_dicShareUserNameAndCount;
    NSMutableArray *_arrShareUserNameList;
    WCShareCardData *_selectedShareCardData;
    UIView *_navHeaderView;
    UIImageView *_topImgView;
    UIImageView *_bottomImgView;
    UIView *_newTopHeaderView;
    MMUILabel *_tipsLabel;
    CALayer *_iconBgLayer;
    UIImageView *_arrowImgView;
    MMHeadImageView *_headImageView;
    MMUILabel *_shareUserLabel;
    UIView *_collectionBgView;
    UICollectionView *_collectionView;
    id <WCShareCardUserListViewControllerDelegate> m_delegate;
    UIImage *topScreenShotImg;
    UIImage *bottomScreenShotImg;
}

- (void).cxx_destruct;
- (void)appearAnimation;
@property(retain, nonatomic) UIImage *bottomScreenShotImg; // @synthesize bottomScreenShotImg;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(int)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (int)collectionView:(id)arg1 numberOfItemsInSection:(int)arg2;
- (void)createHeadImgAndNameAtTopHeaderView;
- (void)createUserHeadImgCollectionView;
- (void)dealloc;
- (void)disAppearAnimation;
- (void)dismissAfterMoment;
- (void)initData:(id)arg1;
- (void)initView;
- (id)initWithShareCardList:(id)arg1 andCurSelectShareCardData:(id)arg2;
- (void)insertIconLayer:(id)arg1;
@property(nonatomic) __weak id <WCShareCardUserListViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void)makeTipsTopView;
- (int)numberOfSectionsInCollectionView:(id)arg1;
- (void)pop_animationDidStart:(id)arg1;
- (void)pop_animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (int)preferredInterfaceOrientationForPresentation;
- (void)processTopAndBottomImageView;
- (id)reverseAnimationValue:(id)arg1;
@property(retain, nonatomic) UIImage *topScreenShotImg; // @synthesize topScreenShotImg;
- (BOOL)shouldAutorotate;
- (BOOL)shouldInteractivePop;
- (unsigned int)supportedInterfaceOrientations;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (BOOL)useTransparentNavibar;
- (void)viewDidLoad;
- (void)viewDidTransitionToNewSize;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
