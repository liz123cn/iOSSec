//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMSearchBarDisplayController.h"

#import "IGetPOIListMgrExt.h"
#import "ILocationMgrExt.h"
#import "LocationRetrieveDelegate.h"
#import "MMAutoSearchLogicDelegate.h"
#import "MMLocationAttributeBannerDelegate.h"
#import "MMLocationPinViewDelegate.h"
#import "MMRefreshTableFooterDelegate.h"
#import "MMSearchBarDelegate.h"
#import "QMapViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"
#import "tableViewDelegate.h"

@class CLLocation, LocationRetriever, MMAutoSearchLogic, MMLocationAttributeBanner, MMLocationPinView, MMSearchBar, MMTableView, NSMutableArray, NSString, QMapView, UIAlertView, UIButton, UILabel, UIPinchGestureRecognizer, WCTimeLineFooterView;

@interface MMPickLocationViewController : MMSearchBarDisplayController <UITableViewDelegate, tableViewDelegate, UITableViewDataSource, IGetPOIListMgrExt, ILocationMgrExt, UIGestureRecognizerDelegate, MMRefreshTableFooterDelegate, MMSearchBarDelegate, MMLocationAttributeBannerDelegate, LocationRetrieveDelegate, MMAutoSearchLogicDelegate, QMapViewDelegate, MMLocationPinViewDelegate, UIAlertViewDelegate, WCActionSheetDelegate>
{
    id <MMPickLocationViewControllerDelegate> _delegate;
    UILabel *_searchErrorTips;
    NSString *_address;
    NSString *_searchKeyword;
    NSString *_openID;
    MMSearchBar *_searchBar;
    MMLocationPinView *_pinView;
    QMapView *_mapView;
    MMTableView *_tableView;
    WCTimeLineFooterView *_nearTableFooterView;
    WCTimeLineFooterView *_searchTableFooterView;
    UIAlertView *_errorAlertView;
    MMLocationAttributeBanner *_attributeBanner;
    BOOL _isLoadFinish;
    BOOL _shouldUpdateList;
    BOOL _isOnlyUseUserLocation;
    BOOL _isMapAnimating;
    BOOL _useWXPOI;
    BOOL _useApplePOI;
    BOOL _isShowUp;
    unsigned long _geoTag;
    unsigned int _scene;
    CDStruct_2c43369c _lastSelectedLocation;
    CDStruct_2c43369c _firstGetNearLocation;
    CDStruct_2c43369c _lastDragLocation;
    UIButton *_showMyLocationButton;
    NSMutableArray *_poiAnnotationList;
    NSMutableArray *_searchPOIResultList;
    unsigned int _selectedPoiIndex;
    struct timeval _startLocateTime;
    struct CGSize _beginTouchDeltaRatio;
    CDStruct_2c43369c _beginTouchRegion;
    UIPinchGestureRecognizer *_pinchGestureRecognizer;
    NSMutableArray *_sysGestureRecognizers;
    LocationRetriever *_locationRetriever;
    CLLocation *_userCurrentLocation;
    MMAutoSearchLogic *_autoSearchLogic;
    float _keyboardHeight;
    unsigned long long _entryTime;
    unsigned long long _startGetListTime;
    unsigned long long _endGetListTime;
    unsigned long long _firstGetTime;
    unsigned int _getPageCount;
    unsigned long long _startSearchListTime;
    unsigned long long _endSearchListTime;
    unsigned long long _firstSearchTime;
    unsigned long long _searchPageCount;
    NSString *_currentSearchId;
    BOOL _lastSelectFromSearch;
    unsigned int _lastSelectRow;
    unsigned long long _lastSelectTime;
    NSString *_lastSelectPOIId;
    BOOL _dismissWithCancel;
    BOOL _isSubViewAnimating;
    BOOL _didShowLocationCloseAlert;
    NSString *_roughAddress;
    float _mapViewFullHeight;
    float _mapViewCurrentHeight;
}

- (void).cxx_destruct;
- (void)MMRefreshTableFooterDidTriggerRefresh:(id)arg1;
- (void)OnGetAutoSearchPOIList:(id)arg1 Error:(int)arg2;
- (void)OnGetNearPOIList:(id)arg1 Error:(int)arg2;
- (void)OnGetSearchPOIList:(id)arg1 Error:(int)arg2;
- (void)OnSearchMKLocalSearchResponse:(id)arg1 Error:(id)arg2;
- (void)addNotCheckInPOIItem;
- (void)addPOIItem:(id)arg1 UpdateTable:(BOOL)arg2 Animated:(BOOL)arg3;
- (void)addUserLocationAnnotation;
- (void)addUserPOIItem;
@property(retain, nonatomic) NSString *address; // @synthesize address=_address;
- (void)adjustSearchTable:(BOOL)arg1;
- (void)adjustSubviewRects;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)autoSearchShouldBeginWithKey:(id)arg1 StartFromFirst:(BOOL)arg2;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)dealloc;
- (void)delayAddUserPOIItem;
@property(nonatomic) __weak id <MMPickLocationViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didScrollViewScroll:(id)arg1;
- (void)didSearchViewTableSelect:(id)arg1;
@property(nonatomic) BOOL didShowLocationCloseAlert; // @synthesize didShowLocationCloseAlert=_didShowLocationCloseAlert;
- (void)enableSysGestureRecognizers:(BOOL)arg1;
- (void)foldMapView;
- (BOOL)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)getAddressByLocation:(CDStruct_c3b9c2ee)arg1;
- (id)getAddressFromPlaceMark:(id)arg1;
- (id)getCurrentPOIInfo;
- (double)getDistanceBetween:(CDStruct_c3b9c2ee)arg1 AndTarget:(CDStruct_c3b9c2ee)arg2;
- (id)getPOIAnnotationAtIndex:(unsigned int)arg1;
- (id)getPOIItemAtIndex:(unsigned int)arg1;
- (id)getSearchItemAtIndex:(int)arg1;
- (id)getSelectedPOIItem;
- (float)getTableViewHeight;
- (id)getUserLocation;
- (id)getUserPOIItem;
- (unsigned int)getUserPOIItemIndex;
- (float)heightForSearchViewTable:(id)arg1;
- (void)initGesture;
- (void)initHeaderView;
- (void)initMapPinView:(BOOL)arg1;
- (void)initMapViewGestureRecognizer:(id)arg1;
- (void)initSearchBar;
- (void)initShowMyLocationButton;
- (void)initTableView;
- (void)initView;
- (id)initWithScene:(unsigned int)arg1 OnlyUseUserLocation:(BOOL)arg2;
- (BOOL)isOnUserLocation:(CDStruct_c3b9c2ee)arg1;
@property(nonatomic) BOOL isSubViewAnimating; // @synthesize isSubViewAnimating=_isSubViewAnimating;
- (BOOL)isUserPOIItem:(id)arg1;
- (void)keyboardDidShow:(id)arg1;
- (id)makeCell:(id)arg1 forPOIItem:(id)arg2 withWidth:(float)arg3 atIndexPath:(id)arg4;
- (void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
@property(nonatomic) float mapViewCurrentHeight; // @synthesize mapViewCurrentHeight=_mapViewCurrentHeight;
- (void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2;
- (void)mapViewDidFinishLoadingMap:(id)arg1;
@property(nonatomic) float mapViewFullHeight; // @synthesize mapViewFullHeight=_mapViewFullHeight;
- (void)mmSearchBarTextDidChange:(id)arg1;
- (void)mmSearchDisplayControllerWillBeginSearch;
- (void)mmSearchDisplayControllerWillEndSearch;
- (void)mmsearchBarSearchButtonClicked:(id)arg1;
- (void)mmsearchBarTextDidBeginEditing:(id)arg1;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onCancelSelectLocation;
- (void)onClickAttributeBanner;
- (void)onDidFindAddress:(id)arg1 forTag:(unsigned long)arg2;
- (void)onLoadMapError:(id)arg1;
- (void)onPinGestureUpdated:(id)arg1;
- (void)onRetrieveLocationError:(int)arg1;
- (void)onRetrieveLocationOK:(id)arg1;
- (void)onRetrieveLocationTimeOut:(id)arg1;
- (void)onShowMyLocation;
- (void)onTimeOut;
- (void)onTimerCheckUserLocation;
- (void)onUpdatePOITableCell:(id)arg1;
- (void)pinUserLocation:(id)arg1;
- (void)relayoutSubviews;
- (void)reportOnDone;
- (void)resetPOIList;
- (void)resetSearchList;
@property(retain, nonatomic) NSString *roughAddress; // @synthesize roughAddress=_roughAddress;
- (void)scrollPOIItemToVisible:(unsigned int)arg1 Animated:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
@property(retain, nonatomic) NSString *searchKeyword; // @synthesize searchKeyword=_searchKeyword;
- (void)selectPOIAnnotation:(id)arg1;
- (void)selectPOIAtIndex:(unsigned int)arg1 Animated:(BOOL)arg2;
- (void)setSearchBar:(id)arg1 CancelButtonText:(id)arg2;
- (void)setSearchTableResultText:(id)arg1;
- (void)showAttributeBannerTitle:(id)arg1 LogoUrl:(id)arg2 Link:(id)arg3;
- (void)showPinViewCallout;
- (void)showSearchTableLoadMore;
- (void)startUpdateLocation;
- (void)stopGeocoder;
- (void)stopPicking;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)unFoldMapView;
- (void)updataSearchListWithCoordinate:(CDStruct_c3b9c2ee)arg1 Keyword:(id)arg2 StartFromFirst:(BOOL)arg3;
- (void)updatePOIListWithCoordinate:(CDStruct_c3b9c2ee)arg1 StartFromFirst:(BOOL)arg2;
- (void)updateSearchBarTips;
- (void)updateUserPOIItem;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidBeDismissed:(BOOL)arg1;
- (void)viewDidBePoped:(BOOL)arg1;
- (void)viewDidBePresented:(BOOL)arg1;
- (void)viewDidBePushed:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillBePresented:(BOOL)arg1;
- (void)viewWillBePushed:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)willDisshow;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
