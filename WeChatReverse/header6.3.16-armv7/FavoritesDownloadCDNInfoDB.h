//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MyFavoritesDB;

@interface FavoritesDownloadCDNInfoDB : NSObject
{
    MyFavoritesDB *_mmDB;
}

- (void).cxx_destruct;
- (BOOL)addDownloadCDNInfo:(id)arg1;
- (BOOL)deleteDownloadCdnInfoByFavoritesItemLocalId:(unsigned long)arg1;
- (id)getDownloadCdnInfoByLocalItemDataId:(id)arg1 andType:(int)arg2;
- (id)getNextDownloadCdnInfoByLocalItemId:(unsigned long)arg1;
- (id)init;
- (void)initDB:(id)arg1;
- (BOOL)updateDownloadCdnInfo:(id)arg1;

@end

