//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (MethodSwizzlingCategory)
+ (void)switchSomeCriticalMethod;
+ (BOOL)swizzleClassMethod:(SEL)arg1 withClassMethod:(SEL)arg2;
+ (BOOL)swizzleClassMethod:(SEL)arg1 withImp:(CDUnknownFunctionPointerType)arg2 store:(CDUnknownFunctionPointerType *)arg3;
+ (BOOL)swizzleMethod:(SEL)arg1 withImp:(CDUnknownFunctionPointerType)arg2 store:(CDUnknownFunctionPointerType *)arg3;
+ (BOOL)swizzleMethod:(SEL)arg1 withMethod:(SEL)arg2;
@end

