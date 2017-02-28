//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface GameCenterMediaItem : MMObject <PBCoding>
{
    BOOL videoH5Play;
    unsigned int mediaType;
    NSString *thumbURL;
    NSString *mediaURL;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType;
@property(retain, nonatomic) NSString *mediaURL; // @synthesize mediaURL;
- (void)parseFromResp:(id)arg1;
@property(retain, nonatomic) NSString *thumbURL; // @synthesize thumbURL;
@property(nonatomic) BOOL videoH5Play; // @synthesize videoH5Play;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
