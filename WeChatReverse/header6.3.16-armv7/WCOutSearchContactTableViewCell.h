//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AttributeLabel, MMHeadImageView;

@interface WCOutSearchContactTableViewCell : MMTableViewCell
{
    MMHeadImageView *_headImageView;
    AttributeLabel *_nameLabel;
    AttributeLabel *_phoneLabel;
}

- (void).cxx_destruct;
- (void)configureCellWithName:(id)arg1 phone:(id)arg2 mmusername:(id)arg3 headImageURL:(id)arg4 searchText:(id)arg5;
@property(retain, nonatomic) MMHeadImageView *headImageView; // @synthesize headImageView=_headImageView;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
@property(retain, nonatomic) AttributeLabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(retain, nonatomic) AttributeLabel *phoneLabel; // @synthesize phoneLabel=_phoneLabel;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;

@end

