//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface MultiTalkGroupMemberItem : MMObject <PBCoding>
{
    NSString *userName;
    NSString *inviteUserName;
    int status;
    int reason;
    long inviteTime;
    int holdStatus;
}

+ (void)initialize;
- (void).cxx_destruct;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) int holdStatus; // @synthesize holdStatus;
@property(nonatomic) long inviteTime; // @synthesize inviteTime;
@property(retain, nonatomic) NSString *inviteUserName; // @synthesize inviteUserName;
@property(nonatomic) int reason; // @synthesize reason;
@property(nonatomic) int status; // @synthesize status;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

