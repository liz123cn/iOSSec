//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface WebviewLocalResItem : MMObject <PBCoding>
{
    NSString *_localResId;
    NSString *_savePath;
    NSString *_svrId;
    NSString *_appId;
    NSString *_cdnUrl;
    NSString *_cdnAESKey;
    unsigned long _fileSize;
    NSString *_mediaType;
    NSString *_fileExt;
    NSString *localResId;
    NSString *savePath;
    NSString *svrId;
    NSString *appId;
    NSString *cdnUrl;
    NSString *cdnAESKey;
    unsigned long fileSize;
    NSString *mediaType;
    NSString *fileExt;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appId; // @synthesize appId;
@property(retain, nonatomic) NSString *cdnAESKey; // @synthesize cdnAESKey;
@property(retain, nonatomic) NSString *cdnUrl; // @synthesize cdnUrl;
@property(retain, nonatomic) NSString *fileExt; // @synthesize fileExt;
@property(nonatomic) unsigned long fileSize; // @synthesize fileSize;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *localResId; // @synthesize localResId;
@property(retain, nonatomic) NSString *mediaType; // @synthesize mediaType;
@property(retain, nonatomic) NSString *savePath; // @synthesize savePath;
@property(retain, nonatomic) NSString *svrId; // @synthesize svrId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

