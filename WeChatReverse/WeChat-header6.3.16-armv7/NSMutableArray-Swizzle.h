//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSMutableArray.h"

@interface NSMutableArray (Swizzle)
+ (void)load;
+ (void)swizzleAddObject:(Class)arg1;
+ (void)swizzleInsertObjectAtIndex:(Class)arg1;
+ (void)swizzleRemoveObjectAtIndex:(Class)arg1;
+ (void)swizzleReplaceObjectAtIndexWithObject:(Class)arg1;
- (void)mmAddObject:(id)arg1;
- (void)mmInsertObject:(id)arg1 atIndex:(unsigned int)arg2;
- (void)mmRemoveObjectAtIndex:(unsigned int)arg1;
- (void)mmReplaceObjectAtIndex:(unsigned int)arg1 withObject:(id)arg2;
@end

