//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

#import "EmoticonBoardRecommendViewDelegate.h"
#import "EmoticonGridViewDelegate.h"
#import "EmoticonRecommendMgrExt.h"
#import "EmoticonStoreMgrExt.h"
#import "EmoticonTabItemViewDelegate.h"
#import "EmoticonTabRecommendMgrExt.h"
#import "IEmoticonMgrExt.h"
#import "IEmoticonPackageMgrExt.h"
#import "IMMLanguageMgrExt.h"
#import "MMKernelExt.h"
#import "QQEmojiGridViewDelegate.h"
#import "RecommendGridViewDelegate.h"
#import "SequencePageScrollViewDataSource.h"
#import "UIScrollViewDelegate.h"

@class EmoticonTabItemView, MMUIScrollView, NSArray, NSMutableArray, NSString, SequencePageScrollView, UIButton, UIImageView, UIPageControl, UIView;

@interface EmoticonBoardView : MMUIView <EmoticonTabItemViewDelegate, UIScrollViewDelegate, EmoticonTabRecommendMgrExt, EmoticonStoreMgrExt, EmoticonBoardRecommendViewDelegate, IMMLanguageMgrExt, MMKernelExt, IEmoticonPackageMgrExt, EmoticonRecommendMgrExt, SequencePageScrollViewDataSource, EmoticonGridViewDelegate, QQEmojiGridViewDelegate, IEmoticonMgrExt, RecommendGridViewDelegate>
{
    id <BaseEmoticonViewDelegate> m_emoticonSendDelegate;
    BOOL isSingleTab;
    id <EmoticonBoardViewDelegate> m_delegate;
    UIButton *m_moreEmoticonButton;
    SequencePageScrollView *m_emoticonPageScrollView;
    NSMutableArray *m_emoticonPagesArray;
    UIPageControl *m_pageControl;
    UIView *m_bottomBar;
    NSArray *m_emoticonTabItems;
    UIImageView *m_newBadge;
    MMUIScrollView *m_scrollTabBar;
    UIButton *m_sendButton;
    UIView *m_sendButtonBackgroundView;
    int m_currentIndex;
    EmoticonTabItemView *m_floatingSettingBtn;
    NSString *finishButtonTitle;
    EmoticonTabItemView *_m_recommendItemView;
    NSMutableArray *_recommendArray;
    int _m_tabQQIndex;
    unsigned long _m_lastGetRecommendEmotionTime;
}

+ (void)destroyInstance;
+ (unsigned long)getReqType;
+ (id)sharedInstance;
+ (void)unRegisterInstanceDelegate;
- (void).cxx_destruct;
- (id)GetCurrentViewController;
- (void)OnEmoticonRecommendNewStateChanged:(BOOL)arg1;
- (void)OnEmoticonRecommendNewStateChangedForBoardView:(BOOL)arg1;
- (void)OnEmoticonTabRecommendChanged;
- (void)OnReloadBottomBar;
- (void)OnSend:(id)arg1;
- (void)OnShowStore;
- (void)OnStoreListChanged:(id)arg1 withRet:(int)arg2 withReqType:(unsigned long)arg3 Response:(id)arg4;
- (void)OnUpdateEmoticonList;
- (void)OnUpdateEmoticonPackageList;
- (void)OnUpdateEmoticonPackageListAfterSort;
- (void)RegisterDelegate:(id)arg1;
- (void)SetCanSend:(BOOL)arg1;
- (void)UnRegisterDelegate;
- (void)changeTabToPid:(id)arg1;
- (void)clearTabHighlight;
- (id)customPackageId;
- (void)dealloc;
- (void)didChangeToPage:(int)arg1;
- (id)emoticonGridViewIdentity;
- (int)emotionRecommandMaxCountConfig;
@property(retain, nonatomic) NSString *finishButtonTitle; // @synthesize finishButtonTitle;
- (id)getEmoticonArrayWithPackageArray:(id)arg1;
- (id)getEmoticonTabItems;
- (id)getPreviewSuperview;
- (id)getRecommendTabWrapsWithStickerPackage:(id)arg1;
- (id)getRecommendWrapsByCountPerPage:(int)arg1;
- (id)getStickerPackages;
- (void)initData;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isNeedGetRecommendEmotions;
@property(nonatomic) BOOL isSingleTab; // @synthesize isSingleTab;
- (BOOL)isSticker;
- (void)layoutSubviews;
@property(retain, nonatomic) UIView *m_bottomBar; // @synthesize m_bottomBar;
@property(nonatomic) int m_currentIndex; // @synthesize m_currentIndex;
@property(nonatomic) __weak id <EmoticonBoardViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) SequencePageScrollView *m_emoticonPageScrollView; // @synthesize m_emoticonPageScrollView;
@property(retain, nonatomic) NSMutableArray *m_emoticonPagesArray; // @synthesize m_emoticonPagesArray;
@property(nonatomic) __weak id <BaseEmoticonViewDelegate> m_emoticonSendDelegate; // @synthesize m_emoticonSendDelegate;
@property(retain, nonatomic) NSArray *m_emoticonTabItems; // @synthesize m_emoticonTabItems;
@property(retain, nonatomic) EmoticonTabItemView *m_floatingSettingBtn; // @synthesize m_floatingSettingBtn;
@property(nonatomic) unsigned long m_lastGetRecommendEmotionTime; // @synthesize m_lastGetRecommendEmotionTime=_m_lastGetRecommendEmotionTime;
@property(retain, nonatomic) UIButton *m_moreEmoticonButton; // @synthesize m_moreEmoticonButton;
@property(retain, nonatomic) UIImageView *m_newBadge; // @synthesize m_newBadge;
@property(retain, nonatomic) UIPageControl *m_pageControl; // @synthesize m_pageControl;
@property(retain, nonatomic) EmoticonTabItemView *m_recommendItemView; // @synthesize m_recommendItemView=_m_recommendItemView;
@property(retain, nonatomic) MMUIScrollView *m_scrollTabBar; // @synthesize m_scrollTabBar;
@property(retain, nonatomic) UIButton *m_sendButton; // @synthesize m_sendButton;
@property(retain, nonatomic) UIView *m_sendButtonBackgroundView; // @synthesize m_sendButtonBackgroundView;
@property(nonatomic) int m_tabQQIndex; // @synthesize m_tabQQIndex=_m_tabQQIndex;
- (void)onClickStoreButton:(id)arg1;
- (void)onEmoticonBoardRecommendViewTapWithPid:(id)arg1;
- (void)onEmoticonTabItemViewTaped:(id)arg1;
- (void)onLanguageChange;
- (void)onPreQuit;
- (void)onSendDesignerEmoji:(id)arg1;
- (void)onShowSetting;
- (void)onTapDeleteButton;
- (void)onTapEmoticon:(id)arg1;
- (void)onTapEmoticonWithCode:(id)arg1;
- (void)onTapEmoticonWrap:(id)arg1;
- (void)onTopBarFrameChanged;
- (int)pageViewTag;
- (id)qqEmojiGridViewIdentity;
@property(retain, nonatomic) NSMutableArray *recommendArray; // @synthesize recommendArray=_recommendArray;
- (id)recommendGridViewIdentity;
- (id)recommendTabViewIdentity;
- (void)reloadEmoticonViewData;
- (void)reloadTabItems;
- (void)resetAddEmoticonButton;
- (void)scrollViewDidScroll:(id)arg1;
- (BOOL)selectTabAtIndex:(int)arg1 isForceUpdate:(BOOL)arg2;
- (BOOL)selectTabOfPid:(id)arg1 isForceUpdate:(BOOL)arg2;
- (void)setBackgroundTranslucent;
- (void)setEmoticonAccessibility:(BOOL)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setSendButtonHidden:(BOOL)arg1;
- (void)setTabButtonSelected:(BOOL)arg1 atIndex:(int)arg2;
- (int)totalNumOfPage;
- (void)updateNew:(BOOL)arg1;
- (id)viewAtPageNum:(int)arg1 sequenceScrollView:(id)arg2;
- (id)viewForNoData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

