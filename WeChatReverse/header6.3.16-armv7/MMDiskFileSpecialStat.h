//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MMDiskFileSpecialStat : NSObject
{
    unsigned int m_fileNum;
    unsigned long m_fileSize;
}

+ (void)initialize;
+ (void)sumSpecialFileStat:(int)arg1 specialType:(int)arg2 withFileSize:(unsigned long)arg3 toDic:(id)arg4;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
@property(nonatomic) unsigned int m_fileNum; // @synthesize m_fileNum;
@property(nonatomic) unsigned long m_fileSize; // @synthesize m_fileSize;

@end

