//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, WCSNSRewardInfo, WCUserComment;

@interface WCSNSMessage : NSObject
{
    NSString *msgID;
    NSString *objID;
    NSString *parentObjID;
    WCUserComment *comment;
    WCUserComment *refComment;
    BOOL hasRead;
    unsigned int delStatus;
    WCSNSRewardInfo *rewardInfo;
}

+ (id)fromSnsActionGroup:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) WCUserComment *comment; // @synthesize comment;
@property(nonatomic) unsigned int delStatus; // @synthesize delStatus;
- (id)description;
@property(nonatomic) BOOL hasRead; // @synthesize hasRead;
- (id)init;
- (BOOL)isWCDataItemDeleted;
- (BOOL)isWCMessageDeleted;
@property(retain, nonatomic) NSString *msgID; // @synthesize msgID;
@property(retain, nonatomic) NSString *objID; // @synthesize objID;
@property(retain, nonatomic) NSString *parentObjID; // @synthesize parentObjID;
@property(retain, nonatomic) WCUserComment *refComment; // @synthesize refComment;
@property(retain, nonatomic) WCSNSRewardInfo *rewardInfo; // @synthesize rewardInfo;

@end

