//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface VPResourceItem : MMObject
{
    NSString *nsRes;
    unsigned long uiResId;
    unsigned long uiScene;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSString *nsRes; // @synthesize nsRes;
@property(nonatomic) unsigned long uiResId; // @synthesize uiResId;
@property(nonatomic) unsigned long uiScene; // @synthesize uiScene;

@end

