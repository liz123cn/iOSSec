//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FileQueue : NSObject
{
    NSString *m_nsFilePath;
    int m_codingMethod;
    Class m_elementClass;
}

- (void).cxx_destruct;
- (BOOL)clear;
- (void)dealloc;
- (id)getAll;
- (id)getArchiveTarget;
- (id)getTop;
- (id)initWithNSCodingFilePath:(id)arg1;
- (BOOL)modifyTop:(id)arg1;
- (BOOL)pop;
- (BOOL)push:(id)arg1;
- (void)setUnArchiveResult:(id)arg1;
- (BOOL)syncToFile;

@end
