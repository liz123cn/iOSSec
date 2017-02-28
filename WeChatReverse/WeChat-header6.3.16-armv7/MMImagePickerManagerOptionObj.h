//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSArray;

@interface MMImagePickerManagerOptionObj : MMObject
{
    BOOL _isCamera;
    BOOL _isFrontCameraDevice;
    BOOL _isOnlyShowVideoMode;
    BOOL _isNotShowVideoSizeAlertView;
    BOOL _canSendOriginalImage;
    BOOL _canSendVideoMessage;
    BOOL _canSendMultiImage;
    BOOL _needThumbImage;
    BOOL _isShowForMessage;
    BOOL m_isJustReturnMMAsset;
    BOOL m_directToFirstAlbum;
    unsigned int _uiMaxVideoDuration;
    int _previewType;
    int _maxImageCount;
    int _compressType;
    NSArray *_selectedImageURLs;
    NSArray *_selectedImageAssets;
    int _finishWordMode;
    id _delegateObj;
    int m_pickerScene;
    unsigned int m_adjustRevertIndex;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL canSendMultiImage; // @synthesize canSendMultiImage=_canSendMultiImage;
@property(nonatomic) BOOL canSendOriginalImage; // @synthesize canSendOriginalImage=_canSendOriginalImage;
@property(nonatomic) BOOL canSendVideoMessage; // @synthesize canSendVideoMessage=_canSendVideoMessage;
@property(nonatomic) int compressType; // @synthesize compressType=_compressType;
@property(nonatomic) __weak id delegateObj; // @synthesize delegateObj=_delegateObj;
@property(nonatomic) int finishWordMode; // @synthesize finishWordMode=_finishWordMode;
- (id)init;
@property(nonatomic) BOOL isCamera; // @synthesize isCamera=_isCamera;
@property(nonatomic) BOOL isFrontCameraDevice; // @synthesize isFrontCameraDevice=_isFrontCameraDevice;
@property(nonatomic) BOOL isNotShowVideoSizeAlertView; // @synthesize isNotShowVideoSizeAlertView=_isNotShowVideoSizeAlertView;
@property(nonatomic) BOOL isOnlyShowVideoMode; // @synthesize isOnlyShowVideoMode=_isOnlyShowVideoMode;
@property(nonatomic) BOOL isShowForMessage; // @synthesize isShowForMessage=_isShowForMessage;
@property(nonatomic) unsigned int m_adjustRevertIndex; // @synthesize m_adjustRevertIndex;
@property(nonatomic) BOOL m_directToFirstAlbum; // @synthesize m_directToFirstAlbum;
@property(nonatomic) BOOL m_isJustReturnMMAsset; // @synthesize m_isJustReturnMMAsset;
@property(nonatomic) int m_pickerScene; // @synthesize m_pickerScene;
@property(nonatomic) int maxImageCount; // @synthesize maxImageCount=_maxImageCount;
@property(nonatomic) BOOL needThumbImage; // @synthesize needThumbImage=_needThumbImage;
@property(nonatomic) int previewType; // @synthesize previewType=_previewType;
@property(retain, nonatomic) NSArray *selectedImageAssets; // @synthesize selectedImageAssets=_selectedImageAssets;
@property(retain, nonatomic) NSArray *selectedImageURLs; // @synthesize selectedImageURLs=_selectedImageURLs;
@property(nonatomic) unsigned int uiMaxVideoDuration; // @synthesize uiMaxVideoDuration=_uiMaxVideoDuration;

@end
