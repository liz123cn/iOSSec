//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSSBaseItemView.h"

@class AttributeLabel, BSBusinessContactItem, MMWebImageView, NSArray, UILabel;

@interface BSSHouseServiceItemView : BSSBaseItemView
{
    BSBusinessContactItem *_dataItem;
    NSArray *_keywordList;
    MMWebImageView *_houseImgView;
    AttributeLabel *_titleLabel;
    UILabel *_priceLabel;
    UILabel *_unitLabel;
    UILabel *_sourceLabel;
}

+ (float)heightForItem;
- (void).cxx_destruct;
@property(retain, nonatomic) BSBusinessContactItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)dealloc;
@property(retain, nonatomic) MMWebImageView *houseImgView; // @synthesize houseImgView=_houseImgView;
- (void)initView;
- (id)initWithContactServiceItem:(id)arg1 andKeyWordList:(id)arg2;
@property(retain, nonatomic) NSArray *keywordList; // @synthesize keywordList=_keywordList;
@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) AttributeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UILabel *unitLabel; // @synthesize unitLabel=_unitLabel;

@end

