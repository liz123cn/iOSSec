//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ChatRoomRemindMsg : NSObject
{
    unsigned long createTime;
    unsigned long msgSvrID;
    NSString *desc;
    NSString *chatRoomName;
    unsigned long actionType;
    NSString *actionName;
    NSString *actionUrl;
    unsigned long expireTime;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName;
@property(nonatomic) unsigned long actionType; // @synthesize actionType;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl;
@property(retain, nonatomic) NSString *chatRoomName; // @synthesize chatRoomName;
@property(nonatomic) unsigned long createTime; // @synthesize createTime;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(nonatomic) unsigned long expireTime; // @synthesize expireTime;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned long msgSvrID; // @synthesize msgSvrID;

@end
