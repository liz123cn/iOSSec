//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString;

@interface BSSTitleItemView : UIView
{
    NSString *_title;
    int _section;
}

+ (float)heightForItemWithSection:(int)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initTitleItemViewWithSectionTtile:(id)arg1 andSection:(int)arg2;
- (void)initView;
@property(nonatomic) int section; // @synthesize section=_section;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

