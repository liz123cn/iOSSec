//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FTSFeatureItem : NSObject
{
    unsigned long _featureID;
    NSString *_title;
    NSString *_titlePY;
    NSString *_titleShortPY;
    NSString *_tag;
    NSString *_actionType;
    NSString *_actionUrl;
    NSString *_helpUrl;
    NSString *_updateUrl;
    int _pluginType;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(nonatomic) unsigned long featureID; // @synthesize featureID=_featureID;
@property(retain, nonatomic) NSString *helpUrl; // @synthesize helpUrl=_helpUrl;
- (id)init;
@property(nonatomic) int pluginType; // @synthesize pluginType=_pluginType;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *titlePY; // @synthesize titlePY=_titlePY;
@property(retain, nonatomic) NSString *titleShortPY; // @synthesize titleShortPY=_titleShortPY;
@property(retain, nonatomic) NSString *updateUrl; // @synthesize updateUrl=_updateUrl;
- (BOOL)shouldJumpNative;
- (BOOL)shouldJumpWeb;

@end

