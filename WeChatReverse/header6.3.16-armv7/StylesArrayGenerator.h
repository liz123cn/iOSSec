//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BasePatternGenerator.h"

@class NSMutableArray;

@interface StylesArrayGenerator : BasePatternGenerator
{
    struct _NSParserPosition _stPosition;
    NSMutableArray *_arrStyles;
}

- (void).cxx_destruct;
- (void)clearData;
- (id)getStyles;
- (id)init;
- (id)patternForContent:(id)arg1 range:(struct _NSRange)arg2 parser:(id)arg3;
@property(nonatomic) struct _NSParserPosition stPosition; // @synthesize stPosition=_stPosition;

@end

