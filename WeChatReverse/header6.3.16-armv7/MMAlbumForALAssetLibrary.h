//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMAlbum.h"

@class ALAssetsGroup;

@interface MMAlbumForALAssetLibrary : MMAlbum
{
    BOOL m_isWithVideoAsset;
    ALAssetsGroup *m_group;
}

- (void).cxx_destruct;
- (id)albumId;
- (id)assetOfIndex:(unsigned int)arg1;
- (id)coverImage;
- (id)initWithALAssetsGroup:(id)arg1 shouldIncludeVideo:(BOOL)arg2 isOnlyShowVideo:(BOOL)arg3;
@property(retain, nonatomic) ALAssetsGroup *m_group; // @synthesize m_group;
@property(nonatomic) BOOL m_isWithVideoAsset; // @synthesize m_isWithVideoAsset;
- (id)name;
- (unsigned int)photosCount;
- (void)stopICloudActivity;

@end
