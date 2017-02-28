//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FICEntity.h"

@class NSString, UIImage, WCMediaItem;

@interface MMFICTimelinePreviewImg : NSObject <FICEntity>
{
    WCMediaItem *_mediaItem;
    NSString *_entityUUID;
    NSString *_sourceImageUUID;
    unsigned int _eliminationFactor;
}

+ (id)genFICEntity:(id)arg1;
- (void).cxx_destruct;
- (CDUnknownBlockType)drawingBlockForImage:(id)arg1;
@property(nonatomic) unsigned int eliminationFactor; // @synthesize eliminationFactor=_eliminationFactor;
@property(readonly, nonatomic) NSString *entityUUID;
@property(readonly, nonatomic) NSString *formatName;
- (id)init;
- (BOOL)isEqual:(id)arg1;
@property(retain, nonatomic) WCMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property(readonly, nonatomic) UIImage *sourceImage;
@property(readonly, nonatomic) NSString *sourceImageUUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

