//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CBaseContact.h"

@class NSString;

@interface CQQContact : CBaseContact
{
    unsigned long m_uiAge;
    unsigned long m_uiUin;
    NSString *m_nsSign;
    NSString *m_nsAddress;
    NSString *m_nsBirthday;
}

- (void).cxx_destruct;
- (BOOL)copyFrom:(id)arg1;
- (id)description;
- (id)init;
- (BOOL)isMyQQ;
@property(retain, nonatomic) NSString *m_nsAddress; // @synthesize m_nsAddress;
@property(retain, nonatomic) NSString *m_nsBirthday; // @synthesize m_nsBirthday;
@property(retain, nonatomic, setter=setNsSignature:) NSString *m_nsSign; // @synthesize m_nsSign;
@property(nonatomic) unsigned long m_uiAge; // @synthesize m_uiAge;
@property(nonatomic) unsigned long m_uiUin; // @synthesize m_uiUin;

@end

