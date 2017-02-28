//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FavLocationItem, FavProductItem, FavStreamVideoItem, FavTVItem, FavURLItem, FavoritesDataItemSource, NSString;

@interface FavoritesItemDataField : NSObject
{
    int _dataType;
    NSString *_dataFmt;
    NSString *_sourceDataID;
    NSString *_localDataID;
    NSString *_dataTitle;
    NSString *_dataDescription;
    NSString *_cdnThumbUrl;
    NSString *_cdnThumbKey;
    NSString *_cdnDataUrl;
    NSString *_cdnDataKey;
    int _cdnEncryVer;
    float _thumbWidth;
    float _thumbHeight;
    unsigned long _thumbSize;
    unsigned long _dataSize;
    unsigned long _duration;
    NSString *_streamWebUrl;
    NSString *_streamDataUrl;
    NSString *_streamLowbandUrl;
    NSString *_ext;
    NSString *_streamId;
    int _dataStatus;
    NSString *_thumbMd5;
    NSString *_thumbHead256Md5;
    NSString *_dataMd5;
    NSString *_dataHead256Md5;
    NSString *_sourceThumbPath;
    NSString *_sourceDataPath;
    NSString *_dataSrcName;
    NSString *_dataSrcTime;
    FavoritesDataItemSource *_dataSrc;
    FavLocationItem *_locItem;
    FavURLItem *_urlItem;
    FavProductItem *_productItem;
    FavTVItem *_tvItem;
    FavStreamVideoItem *_streamVideoItem;
    NSString *_statExtStr;
    float _nodeHeight;
    NSString *_htmlId;
    unsigned long _fileType;
}

+ (id)GetPathByMd5:(id)arg1 isThumb:(BOOL)arg2 DataFmt:(id)arg3;
- (void).cxx_destruct;
- (void)CountMd5:(id)arg1 isThumb:(BOOL)arg2;
- (void)DataToCheckCdnItem:(id)arg1;
- (id)GenFavItemDataClientIDByCreateTime:(int)arg1 Index:(int)arg2;
- (id)Get3rdAppFileDataTempPath;
- (id)Get3rdAppThumbDataTempPath;
- (id)GetDataDir;
- (id)GetDataPath;
- (id)GetThumbPath;
- (void)ThumbToCheckCdnItem:(id)arg1;
@property(retain, nonatomic) NSString *cdnDataKey; // @synthesize cdnDataKey=_cdnDataKey;
@property(retain, nonatomic) NSString *cdnDataUrl; // @synthesize cdnDataUrl=_cdnDataUrl;
@property(nonatomic) int cdnEncryVer; // @synthesize cdnEncryVer=_cdnEncryVer;
@property(retain, nonatomic) NSString *cdnThumbKey; // @synthesize cdnThumbKey=_cdnThumbKey;
@property(retain, nonatomic) NSString *cdnThumbUrl; // @synthesize cdnThumbUrl=_cdnThumbUrl;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *dataDescription; // @synthesize dataDescription=_dataDescription;
@property(retain, nonatomic) NSString *dataFmt; // @synthesize dataFmt=_dataFmt;
@property(retain, nonatomic) NSString *dataHead256Md5; // @synthesize dataHead256Md5=_dataHead256Md5;
@property(retain, nonatomic) NSString *dataMd5; // @synthesize dataMd5=_dataMd5;
@property(nonatomic) unsigned long dataSize; // @synthesize dataSize=_dataSize;
@property(retain, nonatomic) FavoritesDataItemSource *dataSrc; // @synthesize dataSrc=_dataSrc;
@property(retain, nonatomic) NSString *dataSrcName; // @synthesize dataSrcName=_dataSrcName;
@property(retain, nonatomic) NSString *dataSrcTime; // @synthesize dataSrcTime=_dataSrcTime;
@property(nonatomic) int dataStatus; // @synthesize dataStatus=_dataStatus;
@property(retain, nonatomic) NSString *dataTitle; // @synthesize dataTitle=_dataTitle;
@property(nonatomic) int dataType; // @synthesize dataType=_dataType;
@property(nonatomic) unsigned long duration; // @synthesize duration=_duration;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *ext; // @synthesize ext=_ext;
@property(nonatomic) unsigned long fileType; // @synthesize fileType=_fileType;
- (BOOL)hasNoDataOrThumb;
- (BOOL)hasThumbForItem;
@property(retain, nonatomic) NSString *htmlId; // @synthesize htmlId=_htmlId;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) FavLocationItem *locItem; // @synthesize locItem=_locItem;
@property(retain, nonatomic) NSString *localDataID; // @synthesize localDataID=_localDataID;
@property(nonatomic) float nodeHeight; // @synthesize nodeHeight=_nodeHeight;
@property(retain, nonatomic) FavProductItem *productItem; // @synthesize productItem=_productItem;
@property(retain, nonatomic) NSString *sourceDataID; // @synthesize sourceDataID=_sourceDataID;
@property(retain, nonatomic) NSString *sourceDataPath; // @synthesize sourceDataPath=_sourceDataPath;
@property(retain, nonatomic) NSString *sourceThumbPath; // @synthesize sourceThumbPath=_sourceThumbPath;
@property(retain, nonatomic) NSString *statExtStr; // @synthesize statExtStr=_statExtStr;
@property(retain, nonatomic) NSString *streamDataUrl; // @synthesize streamDataUrl=_streamDataUrl;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(retain, nonatomic) NSString *streamLowbandUrl; // @synthesize streamLowbandUrl=_streamLowbandUrl;
@property(retain, nonatomic) FavStreamVideoItem *streamVideoItem; // @synthesize streamVideoItem=_streamVideoItem;
@property(retain, nonatomic) NSString *streamWebUrl; // @synthesize streamWebUrl=_streamWebUrl;
@property(retain, nonatomic) NSString *thumbHead256Md5; // @synthesize thumbHead256Md5=_thumbHead256Md5;
@property(nonatomic) float thumbHeight; // @synthesize thumbHeight=_thumbHeight;
@property(retain, nonatomic) NSString *thumbMd5; // @synthesize thumbMd5=_thumbMd5;
@property(nonatomic) unsigned long thumbSize; // @synthesize thumbSize=_thumbSize;
@property(nonatomic) float thumbWidth; // @synthesize thumbWidth=_thumbWidth;
@property(retain, nonatomic) FavTVItem *tvItem; // @synthesize tvItem=_tvItem;
@property(retain, nonatomic) FavURLItem *urlItem; // @synthesize urlItem=_urlItem;

@end
