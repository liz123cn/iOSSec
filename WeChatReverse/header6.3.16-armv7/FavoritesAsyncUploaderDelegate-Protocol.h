//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavoritesCDNInfo, FavoritesItem, NSString;

@protocol FavoritesAsyncUploaderDelegate <NSObject>
- (BOOL)deleteCdnInfoByFavoritesItemLocalId:(unsigned long)arg1;
- (FavoritesCDNInfo *)getNextAsyncUploadCdnInfoByLocalItemId:(unsigned long)arg1;
- (FavoritesCDNInfo *)getUploadCdnInfoByLocalItemDataId:(NSString *)arg1 andType:(int)arg2;
- (void)onUploadFail:(FavoritesItem *)arg1 ErrCode:(int)arg2;
- (void)onUploadFavItem:(FavoritesItem *)arg1 LocalDataId:(NSString *)arg2 FinishedLength:(long)arg3 TotalLength:(long)arg4;
- (void)onUploadFinished:(FavoritesItem *)arg1;
- (BOOL)updateCdnInfo:(FavoritesCDNInfo *)arg1;
- (BOOL)updateItemXMLInItemDB:(FavoritesItem *)arg1;
@end

