//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FastStrUtil : NSObject
{
}

+ (BOOL)code:(struct CFastStr *)arg1 key:(const char *)arg2 integer:(unsigned long)arg3;
+ (BOOL)code:(struct CFastStr *)arg1 key:(const char *)arg2 string:(id)arg3;
+ (unsigned long)decodeToInteger:(struct XmlReaderNode_t *)arg1 attribute:(const char *)arg2;
+ (unsigned long)decodeToInteger:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;
+ (id)decodeToString:(struct XmlReaderNode_t *)arg1 key:(const char *)arg2;

@end

