//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavAudioInfo, FavoritesItemDataField, MMMusicInfo, NSMutableArray, NSString;

@protocol RecordNodeDataSource <NSObject>
- (BOOL)CanbeForwardToChat;
- (BOOL)CanbeForwardToWC;
- (FavAudioInfo *)GetAudioInfo;
- (unsigned long)GetDataIndex;
- (FavoritesItemDataField *)GetDataItem;
- (NSString *)GetDataSrcName;
- (NSString *)GetFileExt;
- (NSString *)GetFileName;
- (NSString *)GetFilePath;
- (int)GetImageDataDownloadStatus;
- (unsigned long)GetImageIndex;
- (NSString *)GetImageLocalID;
- (NSString *)GetImagePath;
- (NSString *)GetImageSourcePath;
- (NSMutableArray *)GetImgArray;
- (unsigned long)GetImgCount;
- (MMMusicInfo *)GetMusicInfo;
- (id)GetParent;
- (int)GetParentDownloadStatus;
- (unsigned long)GetParentLocalID;
- (float)GetRecordNodeContentHeight;
- (NSString *)GetSightPath;
- (NSString *)GetThumbPath;
- (unsigned long)GetVideoDuration;
- (NSString *)GetVideoTitle;
- (unsigned long)GetVoiceFormat;
- (NSString *)GetWebPageDomin;
- (BOOL)IsUrlMusicThumbPath:(id *)arg1;
- (BOOL)IsUrlVideoThumbPath:(id *)arg1;
- (BOOL)IsUrlWebPageThumbPath:(id *)arg1;
- (BOOL)StartDownload;
@end

