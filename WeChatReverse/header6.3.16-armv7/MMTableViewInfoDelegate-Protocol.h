//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"
#import "UIScrollViewDelegate.h"
#import "tableViewDelegate.h"

@class MMTableViewCellInfo, NSIndexPath;

@protocol MMTableViewInfoDelegate <NSObject, UIScrollViewDelegate, tableViewDelegate>

@optional
- (void)accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)arg1 Cell:(MMTableViewCellInfo *)arg2;
- (void)commitEditingForRowAtIndexPath:(NSIndexPath *)arg1 Cell:(MMTableViewCellInfo *)arg2;
@end

