//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CBottle : NSObject
{
    int m_uiStatus;
    unsigned long m_uiCreateTime;
    unsigned long m_uiSvrID;
    unsigned long m_uiLocalID;
    unsigned long m_uiSex;
    unsigned long m_uiDistance;
    unsigned long m_bottleType;
    unsigned long m_uiMsgType;
    unsigned long m_uiParentID;
    NSString *m_nsImgStatus;
    NSString *m_nsEnryptUsrName;
    NSString *m_nsBottleID;
    NSString *m_nsBottleName;
    NSString *m_nsNickName;
    NSString *m_nsCountry;
    NSString *m_nsProvince;
    NSString *m_nsCity;
    NSString *m_nsSignature;
    BOOL m_isBrandUser;
    NSString *m_brandUsername;
    NSString *m_brandNickname;
    NSString *m_brandIconUrl;
    NSString *m_nsHeadImgUrl;
    NSString *m_nsHeadHDImgUrl;
}

+ (unsigned long)genBottleIDByLocalUsrName:(id)arg1;
+ (id)genLocalUsrNameByBottleID:(unsigned long)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;
@property(nonatomic) unsigned long m_bottleType; // @synthesize m_bottleType;
@property(retain, nonatomic) NSString *m_brandIconUrl; // @synthesize m_brandIconUrl;
@property(retain, nonatomic) NSString *m_brandNickname; // @synthesize m_brandNickname;
@property(retain, nonatomic) NSString *m_brandUsername; // @synthesize m_brandUsername;
@property(nonatomic) BOOL m_isBrandUser; // @synthesize m_isBrandUser;
@property(retain, nonatomic) NSString *m_nsBottleID; // @synthesize m_nsBottleID;
@property(retain, nonatomic) NSString *m_nsBottleName; // @synthesize m_nsBottleName;
@property(retain, nonatomic) NSString *m_nsCity; // @synthesize m_nsCity;
@property(retain, nonatomic) NSString *m_nsCountry; // @synthesize m_nsCountry;
@property(retain, nonatomic) NSString *m_nsEnryptUsrName; // @synthesize m_nsEnryptUsrName;
@property(retain, nonatomic) NSString *m_nsHeadHDImgUrl; // @synthesize m_nsHeadHDImgUrl;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;
@property(retain, nonatomic) NSString *m_nsImgStatus; // @synthesize m_nsImgStatus;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(retain, nonatomic) NSString *m_nsProvince; // @synthesize m_nsProvince;
@property(retain, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(nonatomic) unsigned long m_uiCreateTime; // @synthesize m_uiCreateTime;
@property(nonatomic) unsigned long m_uiDistance; // @synthesize m_uiDistance;
@property(nonatomic) unsigned long m_uiLocalID; // @synthesize m_uiLocalID;
@property(nonatomic) unsigned long m_uiMsgType; // @synthesize m_uiMsgType;
@property(nonatomic) unsigned long m_uiParentID; // @synthesize m_uiParentID;
@property(nonatomic) unsigned long m_uiSex; // @synthesize m_uiSex;
@property(nonatomic) int m_uiStatus; // @synthesize m_uiStatus;
@property(nonatomic) unsigned long m_uiSvrID; // @synthesize m_uiSvrID;

@end
