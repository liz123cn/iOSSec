//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMComponentData.h"

@class NSString;

@interface MMFavNameComponentData : MMComponentData
{
    NSString *m_nameId;
    NSString *m_fromUsr;
    NSString *m_brand;
    NSString *m_toUsr;
    NSString *m_realChatName;
    int favType;
    unsigned long _m_uiFavUpDateTime;
}

- (void).cxx_destruct;
@property(nonatomic) int favType; // @synthesize favType;
@property(retain, nonatomic) NSString *m_brand; // @synthesize m_brand;
@property(retain, nonatomic) NSString *m_fromUsr; // @synthesize m_fromUsr;
@property(retain, nonatomic) NSString *m_nameId; // @synthesize m_nameId;
@property(retain, nonatomic) NSString *m_realChatName; // @synthesize m_realChatName;
@property(retain, nonatomic) NSString *m_toUsr; // @synthesize m_toUsr;
@property(nonatomic) unsigned long m_uiFavUpDateTime; // @synthesize m_uiFavUpDateTime=_m_uiFavUpDateTime;

@end
