//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MMGifView, NSData, NSMutableArray, NSString;

@interface GifItem : NSObject
{
    MMGifView *view;
    struct MxGifImage *image;
    NSData *data;
    int lastID;
    unsigned long lastTick;
    NSString *cachePath;
    int filter;
    _Bool updated;
    NSMutableArray *imgCache;
}

- (void).cxx_destruct;
- (void)addToImgCache:(id)arg1;
@property(retain, nonatomic) NSString *cachePath; // @synthesize cachePath;
@property(retain, nonatomic) NSData *data; // @synthesize data;
- (void)dealloc;
@property(nonatomic) int filter; // @synthesize filter;
@property(nonatomic) struct MxGifImage *image; // @synthesize image;
@property(retain, nonatomic) NSMutableArray *imgCache; // @synthesize imgCache;
- (id)init;
@property(nonatomic) int lastID; // @synthesize lastID;
@property(nonatomic) unsigned long lastTick; // @synthesize lastTick;
@property(nonatomic) _Bool updated; // @synthesize updated;
@property(nonatomic) MMGifView *view; // @synthesize view;

@end

