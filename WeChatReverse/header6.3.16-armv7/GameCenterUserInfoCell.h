//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class MMHeadImageView, UIImageView, UILabel;

@interface GameCenterUserInfoCell : MMTableViewCell
{
    MMHeadImageView *_headImageView;
    UILabel *_nickLabel;
    UILabel *_msgLabel;
    UIImageView *_levelBadgeView;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)initSubviews;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (struct UIEdgeInsets)layoutMargins;
- (void)layoutSubviews;
- (id)levelBadgeImage:(unsigned long)arg1;
- (void)updateWithContact:(id)arg1 andUserInfo:(id)arg2 andMsg:(id)arg3 andMoreUrl:(id)arg4;

@end

