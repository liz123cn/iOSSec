//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMMultiMenuTableViewCell.h"

@class ContactsItemView;

@interface NewContactsItemCell : MMMultiMenuTableViewCell
{
    ContactsItemView *m_contactsItemView;
    ContactsItemView *m_contactsItemWithRemarkPlusView;
    BOOL isSupportCustomDeleteButton;
    BOOL bUseDynamicSize;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL bUseDynamicSize; // @synthesize bUseDynamicSize;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
@property(nonatomic) BOOL isSupportCustomDeleteButton; // @synthesize isSupportCustomDeleteButton;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (void)updateWithContact:(id)arg1;

@end

