//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WloginProtocolBuff.h"

@class NSString;

@interface WloginTlv : NSObject <WloginProtocolBuff>
{
    unsigned short wTlvT;
}

- (id)copy;
- (int)decode:(char **)arg1 andBuffLen:(int *)arg2;
- (int)encode:(id)arg1;
- (id)getTlvTagString;
- (id)initWithTag:(unsigned short)arg1;
@property unsigned short wTlvT; // @synthesize wTlvT;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

