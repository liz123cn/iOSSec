//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString;

@interface NewArrivalCountItem : NSObject <NSCoding>
{
    NSString *m_nsUsrName;
    unsigned long m_uiMsgID;
    unsigned long m_uiArrivalCount;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
@property(nonatomic) unsigned long m_uiArrivalCount; // @synthesize m_uiArrivalCount;
@property(nonatomic) unsigned long m_uiMsgID; // @synthesize m_uiMsgID;

@end

