//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface MSEMessageMetaDataAppMsgItem : NSObject <PBCoding>
{
    NSString *toUsername;
    NSString *title;
    NSString *contentUrl;
    NSString *thumbUrl;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *contentUrl; // @synthesize contentUrl;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *toUsername; // @synthesize toUsername;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
