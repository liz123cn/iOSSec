//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

@class EnterpriseBrandEntryItemViewLayoutParam, UIImageView, UILabel;

@interface EnterpriseBrandEntryItemView : MMMultiMenuTableViewCell
{
    EnterpriseBrandEntryItemViewLayoutParam *_layoutParam;
    UIImageView *_iconView;
    UILabel *_titleLabel;
}

+ (float)cellHeight;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;
- (void)layoutSubviews;
- (void)updateWithImageName:(id)arg1 title:(id)arg2;

@end
