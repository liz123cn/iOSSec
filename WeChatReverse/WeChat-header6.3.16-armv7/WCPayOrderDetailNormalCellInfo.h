//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayOrderDetailNormalCellInfo : NSObject
{
    NSString *m_nsKey;
    NSString *m_nsValue;
    NSString *m_nsJumpedUrl;
    unsigned long m_uiJumpedType;
    BOOL m_bIsSegmentationCell;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) BOOL m_bIsSegmentationCell; // @synthesize m_bIsSegmentationCell;
@property(retain, nonatomic) NSString *m_nsJumpedUrl; // @synthesize m_nsJumpedUrl;
@property(retain, nonatomic) NSString *m_nsKey; // @synthesize m_nsKey;
@property(retain, nonatomic) NSString *m_nsValue; // @synthesize m_nsValue;
@property(nonatomic) unsigned long m_uiJumpedType; // @synthesize m_uiJumpedType;

@end

