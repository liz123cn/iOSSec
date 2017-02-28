//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"
#import "PBMessageObserverDelegate.h"

@class NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;

@interface WCAdvertiseStatMgr : MMService <MMService, PBMessageObserverDelegate>
{
    NSMutableDictionary *_adID2BodyMap;
    NSMutableDictionary *_adID2CommentMap;
    NSMutableArray *_pictureWrapList;
    unsigned long _clickMinuteFrequency;
    unsigned long _clickMinuteReportCount;
    unsigned long _clickMinuteTimestamp;
    unsigned long _exposureMinuteFrequency;
    unsigned long _exposureMinuteReportCount;
    unsigned long _exposureMinuteTimestamp;
    NSMutableSet *_forbidReportTimelineExposureFeedIdSet;
}

+ (BOOL)isSameMinuteTimestampA:(unsigned long)arg1 andTimestampB:(unsigned long)arg2;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)adDataReport:(unsigned long)arg1 logExt:(id)arg2;
- (void)changePictureFromIndex:(id)arg1 fromIndex:(unsigned long)arg2 toIndex:(unsigned long)arg3;
- (void)endDisplayADBody:(id)arg1 dataItem:(id)arg2;
- (void)endDisplayADComment:(id)arg1;
- (void)endPicture:(id)arg1;
- (void)endViewStreamVideo:(id)arg1;
- (void)endViewVideo:(id)arg1;
- (void)eventADPage:(id)arg1;
- (void)exposureADDetail:(id)arg1 dataItem:(id)arg2;
- (void)exposureADFeed:(id)arg1 dataItem:(id)arg2;
@property(retain, nonatomic) NSMutableSet *forbidReportTimelineExposureFeedIdSet; // @synthesize forbidReportTimelineExposureFeedIdSet=_forbidReportTimelineExposureFeedIdSet;
- (void)handleADClickResponse:(id)arg1;
- (void)handleADExposureResponse:(id)arg1;
- (void)handleAddataReport:(id)arg1;
- (id)init;
- (void)logABTest:(id)arg1;
- (void)logADBodyLog:(id)arg1;
- (void)logADBrandProfile:(id)arg1;
- (void)logADCommentLog:(id)arg1;
- (void)logADDetail:(id)arg1 dataItem:(id)arg2;
- (void)logADFloatView:(id)arg1;
- (void)logADH5:(id)arg1;
- (void)logADPoiH5:(id)arg1;
- (id)logAdExpandLogoClickPos:(id)arg1 exposureScene:(int)arg2;
- (id)logAdPoiClickPos:(id)arg1 exposureScene:(int)arg2;
- (void)logHeadImageH5:(id)arg1;
- (BOOL)onServiceMemoryWarning;
- (void)reportADClickForRequest:(id)arg1;
- (BOOL)reportADExposureForRequest:(id)arg1;
- (void)reportAllFeedsADLog;
- (void)startPicture:(id)arg1 startIndex:(unsigned long)arg2 totalNum:(unsigned long)arg3;
- (void)startViewStreamVideo:(id)arg1;
- (void)startViewVideo:(id)arg1;
- (void)willDisplayADBody:(id)arg1;
- (void)willDisplayADComment:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

