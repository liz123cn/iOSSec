//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "IAUAudioDeviceExt.h"
#import "ILocationMgrExt.h"
#import "ITrackRoomMgrExt.h"
#import "IWXTalkieExt.h"
#import "MMHeadImageAnnotationViewDelegate.h"
#import "NavigateLogicControllerDelegate.h"
#import "QMapViewDelegate.h"
#import "TrackRoomTopBarViewDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UIGestureRecognizerDelegate.h"
#import "WCActionSheetDelegate.h"

@class AnnotationLogicController, CAShapeLayer, HeadClusterView, MMLoadingView, MMTimer, NSString, NavigateLogicController, POIInfo, QMapView, TrackRoomTopBarView, UIAlertView, UIButton, UIView;

@interface TrackRoomView : MMUIWindow <UIAlertViewDelegate, MMHeadImageAnnotationViewDelegate, ITrackRoomMgrExt, TrackRoomTopBarViewDelegate, QMapViewDelegate, WCActionSheetDelegate, ILocationMgrExt, IWXTalkieExt, IAUAudioDeviceExt, UIGestureRecognizerDelegate, NavigateLogicControllerDelegate>
{
    id <TrackRoomViewDelegate> _trackRoomViewDelegate;
    BOOL _isInit;
    BOOL _getMicSucc;
    BOOL _showAllHead;
    BOOL _isMapRegionChanging;
    BOOL _shouldIgnoreAccuracy;
    BOOL _intermediateAnimation;
    BOOL _shouldHideAllAnnotation;
    BOOL _shouldZoomToSeeAll;
    BOOL _isLoadFinish;
    BOOL _drivingMode;
    BOOL _refreshOK;
    unsigned long _gpsTag;
    struct timeval _startLocatingTime;
    struct timeval _startShowTime;
    UIView *_micMeterCircleView;
    POIInfo *_poiInfo;
    unsigned int _scene;
    UIButton *_micButton;
    UIButton *_myLocationButton;
    NSString *_chatname;
    QMapView *_mapView;
    UIAlertView *_trackErrorAlertView;
    CAShapeLayer *_micMeterCircle;
    MMTimer *_updateUserLocationTimer;
    MMLoadingView *_loadingView;
    struct {
        CDStruct_2c43369c center;
        struct {
            double latitudeDelta;
            double longitudeDelta;
        } span;
    } _destinationRegion;
    TrackRoomTopBarView *_topbarView;
    HeadClusterView *_headClusterView;
    NavigateLogicController *_navigateLogicController;
    AnnotationLogicController *_annotationLogicController;
}

- (void).cxx_destruct;
- (void)OnError:(id)arg1 ErrNo:(int)arg2;
- (void)OnForceStopRecord;
- (void)OnGetMicrophoneResult:(int)arg1;
- (void)OnHeadingChanged:(double)arg1;
- (void)OnNobodyTalking;
- (void)OnOpenWXTalkModeOK:(id)arg1;
- (void)OnPause;
- (void)OnReConnecting;
- (void)OnRefreshTrackRoom:(id)arg1 Type:(int)arg2;
- (void)OnRestart;
- (void)OnSomeoneTalking:(id)arg1;
- (void)OnTrackRoomError:(int)arg1 Message:(id)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)audioDeviceInputMeterLevel:(id)arg1 Peak:(float)arg2;
- (void)bringFriendToFront:(id)arg1;
- (void)bringMyselfToFront;
- (void)closeTalk;
- (void)closeTrackRoom:(unsigned int)arg1;
- (void)dealloc;
- (void)didDragMap:(id)arg1;
- (void)doMeterAnimationOnMainThread:(id)arg1;
- (void)doStartTrack;
- (void)enterBackground;
- (void)enterForeground;
- (void)exitTracking:(unsigned int)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)getDisplayNameByUsername:(id)arg1;
- (id)getLocationText:(CDStruct_c3b9c2ee)arg1;
- (id)getUserLocation;
- (void)hideTrackRoomView;
- (id)init;
- (void)initMapView;
- (BOOL)initTrack;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)internalInit;
- (BOOL)isLocationOK:(id)arg1;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2;
- (void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (id)mapView:(id)arg1 viewForOverlay:(id)arg2;
- (void)navigateTo:(id)arg1 Name:(id)arg2 Sender:(id)arg3;
- (void)onCenterMapAt:(id)arg1;
- (void)onClickCallout:(id)arg1 AtPoint:(struct CGPoint)arg2;
- (void)onClickDot:(id)arg1 AtPoint:(struct CGPoint)arg2;
- (void)onCloseButtonClick:(id)arg1;
- (void)onGPSLocationChanged:(id)arg1 withTag:(unsigned long)arg2;
- (void)onKickOutFromWXTalkRoom:(id)arg1;
- (void)onMapTapped:(id)arg1;
- (void)onMicButtonPressed;
- (void)onMicButtonReleased;
- (void)onMinimizeButtonClick;
- (void)onMyLocationButtonClick;
- (void)onNavigateToPOI:(id)arg1;
- (void)onPresentViewControlelr:(id)arg1 Animated:(BOOL)arg2;
- (void)onRemoteControlCheckShouldPlay;
- (void)onRemoteControlCheckShouldStop;
- (void)onSetIgnoreAccuracy;
- (void)onStartLoading;
- (void)onStopLoading;
- (void)onTimerUpdateLocation;
- (BOOL)openTalk:(id)arg1;
- (void)resizeMapToShowAllHeadAnimated:(id)arg1;
- (void)setAllHeadAnnotationShowCallout:(BOOL)arg1 Animated:(BOOL)arg2;
- (void)setAnnotation:(id)arg1 Coordinate:(CDStruct_c3b9c2ee)arg2 Animated:(BOOL)arg3 Duration:(float)arg4;
- (void)setRegion:(CDStruct_90e2a262)arg1 AlwaysAnimated:(BOOL)arg2;
@property(nonatomic) __weak id <TrackRoomViewDelegate> trackRoomViewDelegate; // @synthesize trackRoomViewDelegate=_trackRoomViewDelegate;
- (BOOL)showClusterViewOnPoint:(struct CGPoint)arg1;
- (void)showLocationCalloutViewAnimated:(BOOL)arg1;
- (void)showTrackRoomView;
- (void)startLoadingNonBlock;
- (void)startTimerCheckUserLocation;
- (BOOL)startTrackWithChatname:(id)arg1 POIInfo:(id)arg2 Scene:(unsigned int)arg3;
- (void)startUpdateUserLocation;
- (void)stopLoading;
- (void)stopTimerCheckUserLocation;
- (void)stopUpdateUserLocation;
- (void)trySeeAll;
- (void)updateHeadAnnotation:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

