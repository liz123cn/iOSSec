//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PLCrashMachExceptionPort : NSObject
{
    unsigned int _mask;
    unsigned int _port;
    int _behavior;
    int _flavor;
}

+ (id)exceptionPortsForTask:(unsigned int)arg1 mask:(unsigned int)arg2 error:(id *)arg3;
+ (id)exceptionPortsForThread:(unsigned int)arg1 mask:(unsigned int)arg2 error:(id *)arg3;
@property(readonly, nonatomic) int behavior; // @synthesize behavior=_behavior;
- (void)dealloc;
@property(readonly, nonatomic) int flavor; // @synthesize flavor=_flavor;
- (id)initWithServerPort:(unsigned int)arg1 mask:(unsigned int)arg2 behavior:(int)arg3 flavor:(int)arg4;
@property(readonly, nonatomic) unsigned int mask; // @synthesize mask=_mask;
- (BOOL)registerForTask:(unsigned int)arg1 previousPortSet:(id *)arg2 error:(id *)arg3;
- (BOOL)registerForThread:(unsigned int)arg1 previousPortSet:(id *)arg2 error:(id *)arg3;
@property(readonly, nonatomic) unsigned int server_port; // @synthesize server_port=_port;

@end
