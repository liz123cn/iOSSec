//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ShakeMusicItem;

@protocol IMusicSearchExt <NSObject>

@optional
- (void)OnEndRecord;
- (void)OnGetMusicItem:(ShakeMusicItem *)arg1 andOffset:(float)arg2 andSessionId:(unsigned long)arg3;
- (void)OnMusicError:(int)arg1 andSessionId:(unsigned long)arg2;
- (void)OnStartRecord;
@end

