//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ImageFileInfo : NSObject
{
    BOOL isExistInServer;
    NSString *thumbPath;
    NSString *imagePath;
    NSString *attachID;
    unsigned long checkedCount;
    unsigned long startPos;
    unsigned long totalSize;
    NSString *clientID;
    long long n64msgID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *attachID; // @synthesize attachID;
@property(nonatomic) unsigned long checkedCount; // @synthesize checkedCount;
@property(retain, nonatomic) NSString *clientID; // @synthesize clientID;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath;
- (id)init;
@property(nonatomic) BOOL isExistInServer; // @synthesize isExistInServer;
@property(nonatomic) long long n64msgID; // @synthesize n64msgID;
@property(nonatomic) unsigned long startPos; // @synthesize startPos;
@property(retain, nonatomic) NSString *thumbPath; // @synthesize thumbPath;
@property(nonatomic) unsigned long totalSize; // @synthesize totalSize;

@end

