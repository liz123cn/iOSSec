//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCRedEnvelopesInfo : NSObject <NSCoding>
{
    NSString *sendId;
    BOOL hasReward;
    BOOL bFree;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL bFree; // @synthesize bFree;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) BOOL hasReward; // @synthesize hasReward;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *sendId; // @synthesize sendId;

@end

