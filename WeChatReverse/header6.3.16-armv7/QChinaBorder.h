//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface QChinaBorder : NSObject
{
    struct CGPath *chinaBorderPath;
}

+ (id)instance;
- (struct CGPath *)constructChinaBorderPath;
- (struct CGPath *)constructPathWithString:(id)arg1 unitSeparator:(id)arg2 itemSeparator:(id)arg3;
- (BOOL)containsCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)dealloc;
- (id)init;

@end

