//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayWordingItem : NSObject
{
    BOOL needShow;
    NSString *entryTip;
    NSString *title;
    NSString *desc;
    NSString *subTitle;
    NSString *subDesc;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *entryTip; // @synthesize entryTip;
- (id)init;
@property(nonatomic) BOOL needShow; // @synthesize needShow;
@property(retain, nonatomic) NSString *subDesc; // @synthesize subDesc;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;

@end

