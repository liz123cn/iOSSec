//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMail, NSArray;

@interface MailItem : NSObject
{
    unsigned long mailID;
    unsigned long realSize;
    CMail *mailBody;
    NSArray *uploadImageList;
    NSArray *attachInfoList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *attachInfoList; // @synthesize attachInfoList;
@property(retain, nonatomic) CMail *mailBody; // @synthesize mailBody;
@property(nonatomic) unsigned long mailID; // @synthesize mailID;
@property(nonatomic) unsigned long realSize; // @synthesize realSize;
@property(retain, nonatomic) NSArray *uploadImageList; // @synthesize uploadImageList;

@end

