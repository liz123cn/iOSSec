//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface WCRedEnvelopesMessageInfo : NSObject <NSCoding>
{
    NSString *userName;
    int commentType;
    unsigned long long amount;
    unsigned int createTime;
    NSString *sendId;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long amount; // @synthesize amount;
@property(nonatomic) int commentType; // @synthesize commentType;
@property(nonatomic) unsigned int createTime; // @synthesize createTime;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *sendId; // @synthesize sendId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName;

@end
