//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSArray, NSString;

@interface WCCardDetailTable : MMObject <PBCoding>
{
    NSString *_title;
    NSString *_subtitle;
    unsigned long _showNum;
    NSArray *_rows;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *rows; // @synthesize rows=_rows;
@property(nonatomic) unsigned long showNum; // @synthesize showNum=_showNum;
@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

