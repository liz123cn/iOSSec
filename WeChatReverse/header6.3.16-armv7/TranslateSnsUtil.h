//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface TranslateSnsUtil : MMObject
{
}

+ (BOOL)IsEnChar:(unsigned short)arg1;
+ (BOOL)IsIgnoreChar:(unsigned short)arg1;
+ (BOOL)couldTranslateSns;
+ (BOOL)couldTranslateSnsComment:(id)arg1;
+ (BOOL)couldTranslateSnsContent:(id)arg1;
+ (id)getUserTranslateRootDir;
+ (BOOL)isSameLanguage:(id)arg1;
+ (BOOL)isTranslateSnsOff;

@end

