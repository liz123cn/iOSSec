//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCoding.h"

@class NSString;

@interface RightTopMenuItem : MMObject <NSCoding>
{
    NSString *m_nsID;
    BOOL m_bShowNew;
    BOOL m_bHasShowNew;
    unsigned long m_uiNewVersion;
    unsigned long m_uiOrder;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(nonatomic) BOOL m_bHasShowNew; // @synthesize m_bHasShowNew;
@property(nonatomic) BOOL m_bShowNew; // @synthesize m_bShowNew;
@property(retain, nonatomic) NSString *m_nsID; // @synthesize m_nsID;
@property(nonatomic) unsigned long m_uiNewVersion; // @synthesize m_uiNewVersion;
@property(nonatomic) unsigned long m_uiOrder; // @synthesize m_uiOrder;

@end

