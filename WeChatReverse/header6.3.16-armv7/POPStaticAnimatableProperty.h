//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "POPAnimatableProperty.h"

@interface POPStaticAnimatableProperty : POPAnimatableProperty
{
    struct {
        id _field1;
        CDUnknownBlockType _field2;
        CDUnknownBlockType _field3;
        float _field4;
    } *_state;
}

- (id)name;
- (CDUnknownBlockType)readBlock;
- (float)threshold;
- (CDUnknownBlockType)writeBlock;

@end

