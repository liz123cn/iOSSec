//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface MMRegion : NSObject
{
    NSString *code;
    NSString *name;
    NSString *parentCode;
    int type;
    int numbersOfChildren;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *code; // @synthesize code;
- (id)description;
@property(retain, nonatomic) NSString *name; // @synthesize name;
@property(nonatomic) int numbersOfChildren; // @synthesize numbersOfChildren;
@property(retain, nonatomic) NSString *parentCode; // @synthesize parentCode;
@property(nonatomic) int type; // @synthesize type;

@end

