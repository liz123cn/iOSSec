//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WebSearchActionResultItem : MMObject
{
    BOOL _hasResult;
    BOOL _hasClicked;
    NSString *_query;
    unsigned long _type;
}

- (void).cxx_destruct;
- (int)getActionType;
@property(nonatomic) BOOL hasClicked; // @synthesize hasClicked=_hasClicked;
@property(nonatomic) BOOL hasResult; // @synthesize hasResult=_hasResult;
- (id)init;
@property(retain, nonatomic) NSString *query; // @synthesize query=_query;
@property(nonatomic) unsigned long type; // @synthesize type=_type;

@end

