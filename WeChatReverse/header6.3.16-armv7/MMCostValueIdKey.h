//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMCostValueIdKey : NSObject
{
    unsigned int m_uID;
    unsigned int m_uTotalValueTimeKey;
    unsigned int m_uTotalCountKey;
    NSString *m_nsDes;
    unsigned int m_uTotalCostValueKey;
}

+ (id)constructOneItemWithId:(unsigned int)arg1 withTotalCostValueKey:(unsigned int)arg2 withTotalCountKey:(unsigned int)arg3 withDes:(id)arg4;
- (void).cxx_destruct;
- (id)init;
@property(retain, nonatomic) NSString *m_nsDes; // @synthesize m_nsDes;
@property(nonatomic) unsigned int m_uID; // @synthesize m_uID;
@property(nonatomic) unsigned int m_uTotalCostValueKey; // @synthesize m_uTotalCostValueKey;
@property(nonatomic) unsigned int m_uTotalCountKey; // @synthesize m_uTotalCountKey;

@end

