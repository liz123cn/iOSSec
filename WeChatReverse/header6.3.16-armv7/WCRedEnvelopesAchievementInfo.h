//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableDictionary, NSString;

@interface WCRedEnvelopesAchievementInfo : NSObject <NSCoding>
{
    NSString *feedId;
    int feedType;
    NSMutableDictionary *dicGrabInfo;
    NSMutableDictionary *dicRewardInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *dicGrabInfo; // @synthesize dicGrabInfo;
@property(retain, nonatomic) NSMutableDictionary *dicRewardInfo; // @synthesize dicRewardInfo;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *feedId; // @synthesize feedId;
@property(nonatomic) int feedType; // @synthesize feedType;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

