//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface MFriendMobileInfo : MMObject
{
    NSString *_hashValue;
    NSString *_userName;
    NSString *_nickName;
    unsigned long _status;
    NSString *_bigHeadImgUrl;
    NSString *_smallHeadImgUrl;
    NSString *m_nsAntispamTicket;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bigHeadImgUrl; // @synthesize bigHeadImgUrl=_bigHeadImgUrl;
- (int)compareMFriendMobileInfoAscending:(id)arg1;
- (void)dealloc;
@property(retain, nonatomic) NSString *hashValue; // @synthesize hashValue=_hashValue;
- (id)init;
@property(retain, nonatomic) NSString *m_nsAntispamTicket; // @synthesize m_nsAntispamTicket;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName=_nickName;
@property(retain, nonatomic) NSString *smallHeadImgUrl; // @synthesize smallHeadImgUrl=_smallHeadImgUrl;
@property(nonatomic) unsigned long status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end

