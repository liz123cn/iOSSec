//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableString.h"

@interface NSMutableString (RegexKitLiteAdditions)
- (int)replaceOccurrencesOfRegex:(id)arg1 options:(unsigned int)arg2 inRange:(struct _NSRange)arg3 error:(id *)arg4 enumerationOptions:(unsigned int)arg5 usingBlock:(CDUnknownBlockType)arg6;
- (int)replaceOccurrencesOfRegex:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (int)replaceOccurrencesOfRegex:(id)arg1 withString:(id)arg2;
- (int)replaceOccurrencesOfRegex:(id)arg1 withString:(id)arg2 options:(unsigned int)arg3 range:(struct _NSRange)arg4 error:(id *)arg5;
- (int)replaceOccurrencesOfRegex:(id)arg1 withString:(id)arg2 range:(struct _NSRange)arg3;
@end

