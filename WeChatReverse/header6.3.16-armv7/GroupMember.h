//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface GroupMember : NSObject
{
    NSString *m_nsMemberName;
    unsigned long m_uiMemberStatus;
    NSString *m_nsNickName;
    NSString *m_nsFullPY;
    unsigned long m_uiSex;
    NSString *m_nsRemark;
    NSString *m_nsRemarkShortPY;
    NSString *m_nsRemarkFullPY;
    NSString *m_nsCountry;
    NSString *m_nsProvince;
    NSString *m_nsCity;
    NSString *m_nsSignature;
}

- (void).cxx_destruct;
- (id)description;
- (id)init;
@property(retain, nonatomic) NSString *m_nsCity; // @synthesize m_nsCity;
@property(retain, nonatomic) NSString *m_nsCountry; // @synthesize m_nsCountry;
@property(retain, nonatomic) NSString *m_nsFullPY; // @synthesize m_nsFullPY;
@property(retain, nonatomic) NSString *m_nsMemberName; // @synthesize m_nsMemberName;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(retain, nonatomic) NSString *m_nsProvince; // @synthesize m_nsProvince;
@property(retain, nonatomic) NSString *m_nsRemark; // @synthesize m_nsRemark;
@property(retain, nonatomic) NSString *m_nsRemarkFullPY; // @synthesize m_nsRemarkFullPY;
@property(retain, nonatomic) NSString *m_nsRemarkShortPY; // @synthesize m_nsRemarkShortPY;
@property(retain, nonatomic) NSString *m_nsSignature; // @synthesize m_nsSignature;
@property(nonatomic) unsigned long m_uiMemberStatus; // @synthesize m_uiMemberStatus;
@property(nonatomic) unsigned long m_uiSex; // @synthesize m_uiSex;

@end

