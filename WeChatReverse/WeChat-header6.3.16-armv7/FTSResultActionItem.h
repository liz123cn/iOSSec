//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FTSResultActionItem : NSObject
{
    NSString *_keyword;
    unsigned int _actionType;
    unsigned int _searchType;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int actionType; // @synthesize actionType=_actionType;
- (id)genStatString;
- (id)init;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) unsigned int searchType; // @synthesize searchType=_searchType;

@end
