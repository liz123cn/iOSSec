//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSString, WCUrl;

@interface WCMediaItem : NSObject <NSCoding>
{
    NSString *mid;
    int type;
    int subType;
    NSString *title;
    NSString *desc;
    NSString *titlePattern;
    NSString *descPattern;
    NSString *userData;
    NSString *source;
    NSMutableArray *previewUrls;
    WCUrl *dataUrl;
    WCUrl *lowBandUrl;
    WCUrl *attachUrl;
    WCUrl *attachThumbUrl;
    NSString *attachShareTitle;
    struct CGSize imgSize;
    int attachVideoTotalTime;
    BOOL likeFlag;
    int likeCount;
    NSMutableArray *likeUsers;
    int commentCount;
    NSMutableArray *commentUsers;
    int withCount;
    NSMutableArray *withUsers;
    int createTime;
    BOOL bSnsScene;
    BOOL bSupoortValidateMd5;
    BOOL bUseXorEncrypt;
    unsigned long long xorEncrpyKey;
    int _entrance;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *attachShareTitle; // @synthesize attachShareTitle;
@property(retain, nonatomic) WCUrl *attachThumbUrl; // @synthesize attachThumbUrl;
@property(retain, nonatomic) WCUrl *attachUrl; // @synthesize attachUrl;
@property(nonatomic) int attachVideoTotalTime; // @synthesize attachVideoTotalTime;
@property(nonatomic) BOOL bSnsScene; // @synthesize bSnsScene;
@property(nonatomic) BOOL bSupoortValidateMd5; // @synthesize bSupoortValidateMd5;
@property(nonatomic) BOOL bUseXorEncrypt; // @synthesize bUseXorEncrypt;
- (id)cityForData;
@property(nonatomic) int commentCount; // @synthesize commentCount;
@property(retain, nonatomic) NSMutableArray *commentUsers; // @synthesize commentUsers;
- (id)comparativePathForPreview;
@property(nonatomic) int createTime; // @synthesize createTime;
@property(retain, nonatomic) WCUrl *dataUrl; // @synthesize dataUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *descPattern; // @synthesize descPattern;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) int entrance; // @synthesize entrance=_entrance;
- (BOOL)hasAttachVideo;
- (BOOL)hasData;
- (BOOL)hasPreview;
- (BOOL)hasSight;
- (id)hashPathForString:(id)arg1;
- (id)imageOfSize:(int)arg1;
@property(nonatomic) struct CGSize imgSize; // @synthesize imgSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
@property(nonatomic) int likeCount; // @synthesize likeCount;
@property(nonatomic) BOOL likeFlag; // @synthesize likeFlag;
@property(retain, nonatomic) NSMutableArray *likeUsers; // @synthesize likeUsers;
- (CDStruct_c3b9c2ee)locationForData;
@property(retain, nonatomic) WCUrl *lowBandUrl; // @synthesize lowBandUrl;
- (id)mediaID;
- (int)mediaType;
@property(retain, nonatomic) NSString *mid; // @synthesize mid;
- (id)pathForAttachVideoData;
- (id)pathForData;
- (id)pathForPreview;
- (id)pathForSightData;
- (id)pathForTempAttachVideoData;
@property(retain, nonatomic) NSMutableArray *previewUrls; // @synthesize previewUrls;
- (BOOL)saveDataFromData:(id)arg1;
- (BOOL)saveDataFromMedia:(id)arg1;
- (BOOL)saveDataFromPath:(id)arg1;
- (BOOL)savePreviewFromData:(id)arg1;
- (BOOL)savePreviewFromMedia:(id)arg1;
- (BOOL)savePreviewFromPath:(id)arg1;
- (BOOL)saveSightDataFromData:(id)arg1;
- (BOOL)saveSightDataFromMedia:(id)arg1;
- (BOOL)saveSightDataFromPath:(id)arg1;
- (BOOL)saveSightPreviewFromMedia:(id)arg1;
- (BOOL)saveVideoDataFromData:(id)arg1 filePath:(id)arg2 continueMode:(BOOL)arg3;
@property(retain, nonatomic) NSString *source; // @synthesize source;
@property(nonatomic) int subType; // @synthesize subType;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *titlePattern; // @synthesize titlePattern;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *userData; // @synthesize userData;
@property(nonatomic) int withCount; // @synthesize withCount;
@property(retain, nonatomic) NSMutableArray *withUsers; // @synthesize withUsers;
@property(nonatomic) unsigned long long xorEncrpyKey; // @synthesize xorEncrpyKey;
- (id)videoStreamForData;
- (id)voiceStreamForData;

@end

