//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBar.h"

#import "IRecordPermissionCheckExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "IVoiceSearchExt.h"
#import "SearchGuideViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "VoiceSearchContactsViewDelegate.h"

@class NSString, SearchGuideView, UIButton, UIView, UIViewController, VoiceRecogView;

@interface MMVoiceSearchBar : MMSearchBar <IVOIPUILogicMgrExt, UIAlertViewDelegate, IVoiceSearchExt, IRecordPermissionCheckExt, VoiceSearchContactsViewDelegate, SearchGuideViewDelegate>
{
    UIButton *m_voiceSearchBackButton;
    UIButton *m_searchingCancelButton;
    UIViewController *m_parentViewController;
    UIView *m_preventSearchBarView;
    UIButton *m_voiceSearchBtn;
    int m_voiceSearchStatus;
    int m_voiceSearchSpecies;
    BOOL m_useDefaultDisplayController;
    BOOL m_indexBarEffect;
    VoiceRecogView *m_voiceRecogView;
    id <MMVoiceSearchDelegate> m_voiceSearchDelegate;
    id <MMVoiceSearchBarDelegate> m_voiceSearchBarDelegate;
    unsigned long m_voiceID;
    BOOL m_bVoiceSearchEnabled;
    BOOL m_bRealTimeSearch;
    float m_fCancelButtonWidth;
    BOOL m_showBlurEffectView;
    SEL mRecordSelector;
    SearchGuideView *_ftsGuideView;
}

- (void).cxx_destruct;
- (void)OnEndRecord;
- (void)OnError:(int)arg1 andSearchId:(unsigned long)arg2;
- (void)OnGetSearchResult:(id)arg1 andSearchId:(unsigned long)arg2;
- (void)OnLevelMeter:(unsigned long)arg1 Peak:(float)arg2;
- (void)OnRecordDenied;
- (void)OnRecordPermissioned;
- (void)OnStartRecord;
- (void)SetVoiceSearchBackBtnOnTheView:(BOOL)arg1;
- (void)SimulateSearchBackBtnClick;
- (void)adjustDimmingViewRect;
- (void)backButtonDone:(id)arg1;
- (void)callVoiceSearchMgrStart;
- (BOOL)callVoiceSearchMgrStop;
- (BOOL)canFromStatus:(int)arg1 transferToStatus:(int)arg2;
- (void)dealloc;
- (id)filterContactsViewContacts:(id)arg1;
- (id)findCancelButton:(id)arg1;
- (void)finishSearch;
@property(retain, nonatomic, getter=getSearchGuideView) SearchGuideView *ftsGuideView; // @synthesize ftsGuideView=_ftsGuideView;
- (unsigned long)getVoiceID;
- (void)handleRotateEvent;
- (BOOL)handleVoiceSearchResults:(id)arg1;
- (void)hiddenBlurEffectView;
- (void)hideVoiceSearch;
- (id)initWithContentsController:(id)arg1 withParentViewController:(id)arg2 withSpecies:(int)arg3 withUseDefaultDisplayController:(BOOL)arg4;
- (id)initWithContentsController:(id)arg1 withParentViewController:(id)arg2 withSpecies:(int)arg3 withUseDefaultDisplayController:(BOOL)arg4 hasIndexBar:(BOOL)arg5;
- (BOOL)isVoiceSearchActive;
- (void)loadView;
@property(nonatomic) SEL mRecordSelector; // @synthesize mRecordSelector;
@property(nonatomic) BOOL m_bRealTimeSearch; // @synthesize m_bRealTimeSearch;
@property(nonatomic) BOOL m_showBlurEffectView; // @synthesize m_showBlurEffectView;
@property(nonatomic) __weak id <MMVoiceSearchBarDelegate> m_voiceSearchBarDelegate; // @synthesize m_voiceSearchBarDelegate;
@property(nonatomic) __weak id <MMVoiceSearchDelegate> m_voiceSearchDelegate; // @synthesize m_voiceSearchDelegate;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)onVideoVoipViewDisappear;
- (void)openContactInfoView:(int)arg1;
- (void)resetVoiceSearchBarFrame;
- (BOOL)searchBar:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (BOOL)searchBarShouldEndEditing:(id)arg1;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)searchDisplayController:(id)arg1 willHideSearchResultsTableView:(id)arg2;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)setVoiceSearchBarFrame:(BOOL)arg1 animation:(BOOL)arg2;
- (BOOL)setVoiceSearchStatusFrom:(int)arg1 transferToStatus:(int)arg2;
- (BOOL)setVoiceSearchStatusFrom:(int)arg1 transferToStatus:(int)arg2 withVoiceID:(int)arg3;
- (void)setVoiceSearchToParentView:(id)arg1;
- (void)showContactInfoView:(id)arg1;
- (void)showVoiceSearchButton:(BOOL)arg1;
- (void)startSearchTableViewCancelingAnimation;
- (void)startVoiceSearch;
- (void)statusFrameChange:(id)arg1;
- (BOOL)stopVoiceSearch;
- (void)tryShowBlurEffectView;
- (id)usrNameConvertToOContacts:(id)arg1;
- (void)voiceSearchBackToPreviousView;
- (void)voiceSearchBtnRealDone;
- (void)voiceSearchButtonClick;
- (void)voiceSearchButtonDone;
- (void)voiceSearchByMainFrameRealDone;
- (void)voiceSearchCancelButtonDone;
- (void)voiceSearchContactsViewBack;
- (void)voiceSearchContactsViewCancel;
- (void)voiceSearchRecordDone;
- (void)voiceSearchRestart;
- (id)voiceSearchResultsTableView:(id)arg1 andCell:(id)arg2 cellForRowAtIndexPath:(id)arg3;
- (void)voiceSearchResultsTableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)voiceSearchResultsTableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)voiceSearchResultsTableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)voiceSearchStartByNewMainFrame;
- (void)voiceSearchViewErrorCancelButtonDone;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
