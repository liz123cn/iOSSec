//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class LbsLocationNew, NSMutableArray, NSString;

@interface WebSearchRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) unsigned long long businessType; // @dynamic businessType;
@property(nonatomic) unsigned int cliVersion; // @dynamic cliVersion;
@property(nonatomic) unsigned int isHomePage; // @dynamic isHomePage;
@property(retain, nonatomic) NSString *keyword; // @dynamic keyword;
@property(retain, nonatomic) LbsLocationNew *location; // @dynamic location;
@property(retain, nonatomic) NSMutableArray *matchUserList; // @dynamic matchUserList;
@property(nonatomic) unsigned int offset; // @dynamic offset;
@property(retain, nonatomic) NSMutableArray *prefixQuery; // @dynamic prefixQuery;
@property(retain, nonatomic) NSString *prefixSug; // @dynamic prefixSug;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int sceneActionType; // @dynamic sceneActionType;
@property(retain, nonatomic) NSString *searchId; // @dynamic searchId;
@property(retain, nonatomic) NSString *sugId; // @dynamic sugId;
@property(nonatomic) unsigned int sugType; // @dynamic sugType;

@end

