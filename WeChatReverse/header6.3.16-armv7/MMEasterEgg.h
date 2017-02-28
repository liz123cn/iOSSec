//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSMutableArray, NSString;

@interface MMEasterEgg : NSObject
{
    NSString *m_nsEmoji;
    NSDate *m_oBeginDate;
    NSDate *m_oEndDate;
    unsigned long m_uiReport;
    NSMutableArray *m_arrKeyWords;
    NSArray *m_arrSupportLanguages;
}

- (void).cxx_destruct;
- (BOOL)checkAsciiMatch:(id)arg1 range:(struct _NSRange)arg2;
- (BOOL)isEffective;
@property(retain, nonatomic) NSMutableArray *m_arrKeyWords; // @synthesize m_arrKeyWords;
@property(retain, nonatomic) NSArray *m_arrSupportLanguages; // @synthesize m_arrSupportLanguages;
@property(retain, nonatomic) NSString *m_nsEmoji; // @synthesize m_nsEmoji;
@property(retain, nonatomic) NSDate *m_oBeginDate; // @synthesize m_oBeginDate;
@property(retain, nonatomic) NSDate *m_oEndDate; // @synthesize m_oEndDate;
@property(nonatomic) unsigned long m_uiReport; // @synthesize m_uiReport;
- (id)matchKeyWord:(id)arg1;
- (BOOL)regexMatchString:(id)arg1 withRegex:(id)arg2;

@end

