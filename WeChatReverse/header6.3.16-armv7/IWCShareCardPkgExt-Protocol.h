//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray, NSString, WCCardAcceptCardInfo, WCShareCardData;

@protocol IWCShareCardPkgExt <NSObject>

@optional
- (void)onDeleteCardResponse:(NSString *)arg1 retCode:(int)arg2;
- (void)onGetComment:(NSString *)arg1 CommentList:(NSArray *)arg2;
- (void)onGetFirstPageShareCardList:(NSMutableArray *)arg1 ErrCode:(int)arg2 HasMore:(BOOL)arg3;
- (void)onGetFirstPageShareCardListByAppID:(NSString *)arg1 List:(NSMutableArray *)arg2 ErrCode:(int)arg3 HasMore:(BOOL)arg4;
- (void)onGetFirstPageShareCardListByShareUser:(NSString *)arg1 List:(NSMutableArray *)arg2 ErrCode:(int)arg3 HasMore:(BOOL)arg4;
- (void)onGetNextPageShareCardList:(NSMutableArray *)arg1 ErrCode:(int)arg2 HasMore:(BOOL)arg3;
- (void)onGetNextPageShareCardListByAppID:(NSString *)arg1 List:(NSMutableArray *)arg2 ErrCode:(int)arg3 HasMore:(BOOL)arg4;
- (void)onGetNextPageShareCardListByShareUser:(NSString *)arg1 List:(NSMutableArray *)arg2 ErrCode:(int)arg3 HasMore:(BOOL)arg4;
- (void)onGetShareCardsHomePageLayout:(NSArray *)arg1 andOtherCityList:(NSArray *)arg2 withCityName:(NSString *)arg3 isLocalCityEnd:(BOOL)arg4 isOtherCityEnd:(BOOL)arg5 isFirstPageData:(BOOL)arg6;
- (void)onGetShareCardsLayout:(NSArray *)arg1 andLocalCityList:(NSArray *)arg2 withCityName:(NSString *)arg3 isEnd:(BOOL)arg4;
- (void)onGetShareCardsLayoutError;
- (void)onMarkedResponse:(BOOL)arg1 andMarkUser:(NSString *)arg2;
- (void)onMarkedResponseError;
- (void)onMsgNotifyShareCardConsumed:(NSArray *)arg1 sharedCardId:(NSString *)arg2 consumedBoxId:(NSString *)arg3 subscribeAppUserName:(NSString *)arg4 subscribeWording:(NSString *)arg5 retMsg:(NSString *)arg6;
- (void)onSearchShareCard:(NSString *)arg1 Result:(NSMutableArray *)arg2 Hasmore:(BOOL)arg3;
- (void)onShareCard:(NSString *)arg1 TpID:(NSString *)arg2 andCardInfo:(WCCardAcceptCardInfo *)arg3;
- (void)onUpdateShareCard:(WCShareCardData *)arg1 Error:(int)arg2;
- (void)onUpdateShareCardList:(NSArray *)arg1;
@end

