//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMIconActionSheetContentView, NSObject, UIImageView, UILabel;

@interface MMIconActionSheetCell : UIView
{
    UILabel *titleLabel;
    MMIconActionSheetContentView *contentView;
    UIImageView *imageView;
    int index;
    NSObject *userInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMIconActionSheetContentView *contentView; // @synthesize contentView;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView;
@property(nonatomic) int index; // @synthesize index;
- (id)init;
- (id)initWithIndex:(int)arg1;
- (float)lineHeight;
- (void)setEnable:(BOOL)arg1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel;
- (void)setTitleText:(id)arg1;
@property(retain, nonatomic) NSObject *userInfo; // @synthesize userInfo;

@end

