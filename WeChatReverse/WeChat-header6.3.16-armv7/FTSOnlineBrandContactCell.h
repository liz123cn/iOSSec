//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AttributeLabel, FTSBussinessResultItem, MMBrandHeadImageView, MMWebImageView, NSMutableArray, UIImageView, UILabel;

@interface FTSOnlineBrandContactCell : MMTableViewCell
{
    FTSBussinessResultItem *_resultItem;
    NSMutableArray *_arrKeyword;
    MMBrandHeadImageView *_brandHeadImageView;
    AttributeLabel *_displayNameLabel;
    AttributeLabel *_descLabel;
    MMWebImageView *_detailIconImageView;
    UILabel *_detailLabel;
    UIImageView *_certImgView;
    UIImageView *_registerImgView;
}

- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)initView;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)updateResultItem:(id)arg1 arrKeyword:(id)arg2;
- (void)updateStatus:(BOOL)arg1;

@end

