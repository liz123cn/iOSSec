//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSArray, NSString;

@interface WCPayNoticeInfo : NSObject <NSCoding>
{
    unsigned long m_uiNoticeID;
    NSString *m_nsTitle;
    NSString *m_nsHeadTips;
    NSArray *m_arrContent;
    unsigned long long m_uiAmountCount;
    NSString *m_nsFootTip;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSArray *m_arrContent; // @synthesize m_arrContent;
@property(retain, nonatomic) NSString *m_nsFootTip; // @synthesize m_nsFootTip;
@property(retain, nonatomic) NSString *m_nsHeadTips; // @synthesize m_nsHeadTips;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(nonatomic) unsigned long long m_uiAmountCount; // @synthesize m_uiAmountCount;
@property(nonatomic) unsigned long m_uiNoticeID; // @synthesize m_uiNoticeID;

@end

