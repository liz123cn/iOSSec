//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "NSCopying.h"
#import "PBCoding.h"

@class NSString;

@interface CardTicketItem : MMObject <PBCoding, NSCopying>
{
    NSString *fromUserName;
    unsigned long fromScene;
    unsigned long cardType;
    NSString *cardTypeName;
    NSString *cardId;
    NSString *color;
    NSString *brandName;
    NSString *cardExt;
    unsigned long cardShareFrom;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *brandName; // @synthesize brandName;
@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt;
@property(retain, nonatomic) NSString *cardId; // @synthesize cardId;
@property(nonatomic) unsigned long cardShareFrom; // @synthesize cardShareFrom;
@property(nonatomic) unsigned long cardType; // @synthesize cardType;
@property(retain, nonatomic) NSString *cardTypeName; // @synthesize cardTypeName;
@property(retain, nonatomic) NSString *color; // @synthesize color;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(nonatomic) unsigned long fromScene; // @synthesize fromScene;
@property(retain, nonatomic) NSString *fromUserName; // @synthesize fromUserName;
- (BOOL)fromXML:(struct XmlReaderNode_t *)arg1;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
- (id)toXML;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

