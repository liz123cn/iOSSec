//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCRecommendMetaInfo : NSObject
{
    int recommendType;
    int source;
    NSString *expId;
    NSString *contentXml;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contentXml; // @synthesize contentXml;
- (id)description;
@property(retain, nonatomic) NSString *expId; // @synthesize expId;
- (id)init;
@property(nonatomic) int recommendType; // @synthesize recommendType;
@property(nonatomic) int source; // @synthesize source;

@end

