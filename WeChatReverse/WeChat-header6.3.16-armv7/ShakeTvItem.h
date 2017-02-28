//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "PBCoding.h"

@class NSMutableArray, NSString;

@interface ShakeTvItem : NSObject <PBCoding, NSCoding, NSCopying>
{
    NSString *tvId;
    NSString *title;
    NSString *topic;
    NSString *thumbUrl;
    NSString *playUrl;
    NSString *playStatid;
    NSString *actionUrl;
    NSString *actionStatid;
    NSString *shareUrl;
    NSMutableArray *actionLists;
    BOOL isAutoplay;
    NSString *subTitle;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *actionLists; // @synthesize actionLists;
@property(retain, nonatomic) NSString *actionStatid; // @synthesize actionStatid;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) BOOL isAutoplay; // @synthesize isAutoplay;
@property(retain, nonatomic) NSString *playStatid; // @synthesize playStatid;
@property(retain, nonatomic) NSString *playUrl; // @synthesize playUrl;
@property(retain, nonatomic) NSString *shareUrl; // @synthesize shareUrl;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *topic; // @synthesize topic;
@property(retain, nonatomic) NSString *tvId; // @synthesize tvId;
- (id)toXml;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
