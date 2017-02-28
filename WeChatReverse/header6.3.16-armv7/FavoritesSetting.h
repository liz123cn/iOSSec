//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface FavoritesSetting : NSObject <NSCoding>
{
    unsigned long long _totalCapacity;
    unsigned long long _usedCapcity;
    unsigned long _maxAutoUploadSize;
    unsigned long _maxAutoDownloadSize;
    unsigned long _maxFavFileSize;
    BOOL _bIsFirstTimeInFav;
    int _showFavIntroViewTimes;
    unsigned long long _usedCapacity;
}

@property(nonatomic) BOOL bIsFirstTimeInFav; // @synthesize bIsFirstTimeInFav=_bIsFirstTimeInFav;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) unsigned long maxAutoDownloadSize; // @synthesize maxAutoDownloadSize=_maxAutoDownloadSize;
@property(nonatomic) unsigned long maxAutoUploadSize; // @synthesize maxAutoUploadSize=_maxAutoUploadSize;
@property(nonatomic) unsigned long maxFavFileSize; // @synthesize maxFavFileSize=_maxFavFileSize;
@property(nonatomic) int showFavIntroViewTimes; // @synthesize showFavIntroViewTimes=_showFavIntroViewTimes;
@property(nonatomic) unsigned long long totalCapacity; // @synthesize totalCapacity=_totalCapacity;
@property(nonatomic) unsigned long long usedCapacity; // @synthesize usedCapacity=_usedCapacity;

@end
