//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray, NSString;

@interface WCContentItem : NSObject <NSCoding>
{
    NSString *title;
    NSString *desc;
    NSString *titlePattern;
    NSString *descPattern;
    NSString *linkUrl;
    NSString *linkUrl2;
    int type;
    int flag;
    NSString *username;
    NSString *nickname;
    int createtime;
    NSMutableArray *mediaList;
}

- (void).cxx_destruct;
@property(nonatomic) int createtime; // @synthesize createtime;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *descPattern; // @synthesize descPattern;
- (void)encodeWithCoder:(id)arg1;
@property(nonatomic) int flag; // @synthesize flag;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
@property(retain, nonatomic) NSString *linkUrl; // @synthesize linkUrl;
@property(retain, nonatomic) NSString *linkUrl2; // @synthesize linkUrl2;
@property(retain, nonatomic) NSMutableArray *mediaList; // @synthesize mediaList;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *titlePattern; // @synthesize titlePattern;
@property(nonatomic) int type; // @synthesize type;
@property(retain, nonatomic) NSString *username; // @synthesize username;

@end

