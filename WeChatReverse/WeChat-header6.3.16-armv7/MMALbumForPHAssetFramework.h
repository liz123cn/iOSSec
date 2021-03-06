//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMAlbum.h"

@class NSMutableDictionary, PHAssetCollection, PHFetchResult, UIImage;

@interface MMALbumForPHAssetFramework : MMAlbum
{
    PHAssetCollection *m_collection;
    PHFetchResult *m_fetchResult;
    UIImage *m_coverImage;
    NSMutableDictionary *m_assetDic;
}

- (void).cxx_destruct;
- (id)albumId;
- (id)assetOfIndex:(unsigned int)arg1;
- (id)coverImage;
- (id)init;
- (id)initWithPHAssetCollection:(id)arg1 shouldIncludeVideo:(BOOL)arg2 isOnlyShowVideo:(BOOL)arg3;
@property(retain, nonatomic) NSMutableDictionary *m_assetDic; // @synthesize m_assetDic;
@property(retain, nonatomic) PHAssetCollection *m_collection; // @synthesize m_collection;
@property(retain, nonatomic) UIImage *m_coverImage; // @synthesize m_coverImage;
@property(retain, nonatomic) PHFetchResult *m_fetchResult; // @synthesize m_fetchResult;
- (id)name;
- (unsigned int)photosCount;
- (void)stopICloudActivity;

@end

