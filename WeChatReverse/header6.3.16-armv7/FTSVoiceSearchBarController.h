//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMVoiceSearchBar.h"

#import "ContactInfoViewControllerDelegate.h"
#import "FTSAddressBookFriendCellDelegate.h"
#import "FTSContactCellDelegate.h"
#import "FTSResultViewDelegate.h"
#import "FTSWebSearchViewDelegate.h"
#import "IFTSContactMgrExt.h"
#import "IFTSFavMgrExt.h"
#import "IFTSMemorySearchMgrExt.h"
#import "IFTSMessageMgrExt.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "MMPatternLockLogicDelegate.h"
#import "MMUIViewControllerDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "WCActionSheetDelegate.h"
#import "contactInfoDelegate.h"
#import "contactVerifyLogicDelegate.h"

@class AddressBookFriend, AttributeLabel, CContact, CContactVerifyLogic, ContactInfoViewController, FTSWebSearchController, NSString, UIView, WCTimeLineFooterView;

@interface FTSVoiceSearchBarController : MMVoiceSearchBar <FTSWebSearchViewDelegate, FTSContactCellDelegate, FTSAddressBookFriendCellDelegate, contactInfoDelegate, ContactInfoViewControllerDelegate, PBMessageObserverDelegate, contactVerifyLogicDelegate, FTSResultViewDelegate, IFTSContactMgrExt, IFTSMessageMgrExt, IFTSFavMgrExt, IFTSMemorySearchMgrExt, MFMessageComposeViewControllerDelegate, WCActionSheetDelegate, MMUIViewControllerDelegate, MMPatternLockLogicDelegate>
{
    map_18e36f99 _mapSearchSectionType;
    AddressBookFriend *_curAddressBookFriend;
    ContactInfoViewController *_curAddressBookFriendView;
    CContact *_curContact;
    CContactVerifyLogic *_contactVerifyLogic;
    int _findType;
    UIView *_grayBlurView;
    int _searchScene;
    AttributeLabel *_emptyTipLabel;
    UIView *_emptyFooterView;
    WCTimeLineFooterView *_loadingFooterView;
    NSString *_newestSearchText;
    UIView *_weakFTSWebSearchViewCell;
    struct CGRect _currentKeyboardRect;
    BOOL _hasShowWebSearchCellDuringOneSearch;
    BOOL _hasClickAnyResultDuringOneSearch;
    NSString *_lastMonitorReportText;
    FTSWebSearchController *_webSearchController;
    int _currentFeatureId;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)addContact:(id)arg1;
- (void)addContactFriendScene:(id)arg1;
- (void)addContactInternal;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)asyncCancelSearch;
- (void)asyncCancelSearchDelay:(double)arg1;
- (void)cancelFTSSearch;
- (void)clearAllResource;
- (void)contactVerifyOk:(id)arg1 opCode:(unsigned long)arg2;
@property(nonatomic) int currentFeatureId; // @synthesize currentFeatureId=_currentFeatureId;
- (void)dealloc;
- (void)delaySearch:(id)arg1 slowMode:(BOOL)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)doFTSSearch:(id)arg1;
- (void)doMonitorReport:(id)arg1;
- (id)filterUserName:(id)arg1;
- (id)getBottomTableView:(id)arg1;
- (id)getDetailView;
- (id)getEnteranceViewContoller;
- (id)getGeneralBackgroundColor;
- (unsigned long)getLogRowBeforeSectionType:(unsigned int)arg1 queryText:(id)arg2;
- (id)getViewController;
@property(retain, nonatomic) UIView *grayBlurView; // @synthesize grayBlurView=_grayBlurView;
- (void)handleRotateEvent;
- (void)handleTextDidChange:(id)arg1;
- (void)initFTSSearchBar;
- (id)initWithContentsController:(id)arg1 withParentViewController:(id)arg2 withSpecies:(int)arg3 withUseDefaultDisplayController:(BOOL)arg4;
- (id)initWithContentsController:(id)arg1 withParentViewController:(id)arg2 withSpecies:(int)arg3 withUseDefaultDisplayController:(BOOL)arg4 hasIndexBar:(BOOL)arg5;
- (BOOL)isOpenPluginContactInfoView:(id)arg1;
- (BOOL)isPluginOpen:(int)arg1;
- (void)jumpFeatureUrl:(id)arg1;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (id)mainTableView;
- (void)messageComposeViewController:(id)arg1 didFinishWithResult:(int)arg2;
- (void)newMessageFromContactInfo:(id)arg1;
@property(readonly, nonatomic) NSString *newestSearchText; // @synthesize newestSearchText=_newestSearchText;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onAddContact;
- (void)onClickSearchButton:(id)arg1;
- (void)onFTSChatWithContact:(id)arg1;
- (void)onFTSContactSearchResultChanged:(BOOL)arg1;
- (void)onFTSDetailViewReturn:(BOOL)arg1;
- (void)onFTSHomePageFavResultChanged;
- (void)onFTSHomePageMessageResultChanged;
- (void)onFTSMemorySearchResultChanged:(BOOL)arg1;
- (void)onFTSSelectAddressBookFriend:(id)arg1;
- (void)onPatternLockLogicOperateSuccess;
- (void)onRemoveContact;
- (void)onUpdateContact:(id)arg1;
- (void)onWebSearchViewDidPop;
- (void)onWebSearchViewDidShow;
- (void)onWebSearchViewReturn:(BOOL)arg1;
- (void)onWebSearchViewWillPop;
- (void)onlineSearchContact;
- (void)openAlbum;
- (void)openBalanceFeature;
- (void)openBrandSessionView;
- (void)openCameraScan;
- (void)openChatMigrationVC;
- (void)openContactInfo:(id)arg1;
- (void)openContactInfo:(id)arg1 fromSearchContact:(BOOL)arg2;
- (void)openContactInfoForFeature:(int)arg1;
- (void)openEmoticonStoreView;
- (void)openEnterpriseBrandSessionListViewController:(id)arg1;
- (void)openEnterpriseChatSessionListView:(id)arg1;
- (void)openEnterpriseWebSubBrand:(id)arg1;
- (void)openFacingRecvMoneyFeature;
- (void)openFavoriteView;
- (void)openFloatBottle;
- (void)openGameCenter:(id)arg1;
- (void)openLBS;
- (void)openMessageContentView:(id)arg1;
- (void)openMessageContentViewForFeature:(int)arg1;
- (void)openMessageContentViewForFileHelper;
- (void)openMobileRecharge;
- (void)openOfflinePayFeature;
- (void)openPluginContactInfoView:(id)arg1;
- (void)openQQOfflineMsgView;
- (void)openShake;
- (void)openSyncPhoneContactsView;
- (void)openWCPayView;
- (void)openWXHongBao;
- (void)openWeSportFeature;
- (void)operateAddressBookFriend:(id)arg1;
- (void)removeWebSearchView;
- (void)resetSearchSectionType;
- (void)resetSearchTableViewSize;
- (void)scrollToTop;
- (void)scrollViewDidScroll:(id)arg1;
- (unsigned long)searchAddressBookCount:(id)arg1;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (unsigned long)searchBrandContactCount:(id)arg1;
- (unsigned long)searchFavCount:(id)arg1;
- (BOOL)searchFavDone:(id)arg1;
- (void)searchFavItems;
- (unsigned long)searchFeatureCount:(id)arg1;
- (unsigned long)searchGameCount:(id)arg1;
- (void)searchGameItems;
- (unsigned long)searchGroupCount:(id)arg1;
- (BOOL)searchMatchAddressBookContact:(id)arg1;
- (BOOL)searchMatchBrandContact:(id)arg1;
- (BOOL)searchMatchFavItems:(id)arg1;
- (BOOL)searchMatchFeature:(id)arg1;
- (BOOL)searchMatchGame:(id)arg1;
- (BOOL)searchMatchGroupContact:(id)arg1;
- (BOOL)searchMatchIndexMsg:(id)arg1;
- (BOOL)searchMatchMemoryMsg:(id)arg1;
- (BOOL)searchMatchMsg:(id)arg1;
- (BOOL)searchMatchNormalContact:(id)arg1;
- (BOOL)searchMatchTopHit:(id)arg1;
- (BOOL)searchMemoryDone:(id)arg1;
- (void)searchMessage;
- (BOOL)searchMessageDone:(id)arg1;
- (void)searchMoreContact:(int)arg1;
- (void)searchMoreFollowedBrandContact;
- (unsigned long)searchMsgCount:(id)arg1;
- (unsigned long)searchNormalContactCount:(id)arg1;
@property(nonatomic) int searchScene; // @synthesize searchScene=_searchScene;
- (unsigned long)searchTopHitCount:(id)arg1;
- (id)sectionType2String:(unsigned long)arg1;
- (void)selectAddressBookFriend:(id)arg1;
- (void)selectFavSearchItem:(id)arg1;
- (void)selectFeatureItem:(id)arg1;
- (void)selectMsgItem:(id)arg1;
- (void)selectMsgItems:(id)arg1;
- (void)selectWCGameItem:(id)arg1;
- (void)sendSMS:(id)arg1 arrMobile:(id)arg2;
- (void)sendSMSInvite:(id)arg1;
- (void)setLoadingStatus;
- (void)showAlert:(id)arg1;
- (void)showWCGameWebViewWithUrl:(id)arg1 title:(id)arg2;
- (void)startVerticalWebSearch:(unsigned long long)arg1;
- (void)startWebSearch:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(int)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tryDoMonitorReport:(id)arg1;
- (void)tryRefreshSearchResult;
- (void)updateWebSearchCellVisualbility;
- (void)verifyContact:(id)arg1 opCode:(unsigned long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
