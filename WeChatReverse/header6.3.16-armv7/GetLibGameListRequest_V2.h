//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class BaseRequest, NSMutableArray, NSString;

@interface GetLibGameListRequest_V2 : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSString *country; // @dynamic country;
@property(retain, nonatomic) NSMutableArray *installedAppList; // @dynamic installedAppList;
@property(retain, nonatomic) NSString *lang; // @dynamic lang;
@property(nonatomic) unsigned int limit; // @dynamic limit;
@property(nonatomic) BOOL needBaseInfo; // @dynamic needBaseInfo;
@property(nonatomic) unsigned int offSet; // @dynamic offSet;
@property(nonatomic) unsigned int sortId; // @dynamic sortId;

@end

