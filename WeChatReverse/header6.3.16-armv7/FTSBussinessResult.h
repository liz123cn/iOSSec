//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableArray, NSString;

@interface FTSBussinessResult : MMObject
{
    unsigned long long _bussinessType;
    unsigned long _continueFlag;
    NSString *_title;
    NSMutableArray *_arrResultItem;
    unsigned long _totalCount;
    NSMutableArray *_arrKeyword;
    NSString *_searchId;
}

+ (id)fromServerObject:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *arrKeyword; // @synthesize arrKeyword=_arrKeyword;
@property(retain, nonatomic) NSMutableArray *arrResultItem; // @synthesize arrResultItem=_arrResultItem;
@property(nonatomic) unsigned long long bussinessType; // @synthesize bussinessType=_bussinessType;
@property(nonatomic) unsigned long continueFlag; // @synthesize continueFlag=_continueFlag;
- (id)init;
@property(retain, nonatomic) NSString *searchId; // @synthesize searchId=_searchId;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long totalCount; // @synthesize totalCount=_totalCount;

@end

