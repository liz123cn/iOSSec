//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface AppPersonalInfoItem : NSObject <PBCoding>
{
    NSString *appID;
    NSString *infoXml;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *appID; // @synthesize appID;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(retain, nonatomic) NSString *infoXml; // @synthesize infoXml;
- (id)parseXML;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

