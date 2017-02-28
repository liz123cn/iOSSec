//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface MMBezelWindowInfo : NSObject
{
    BOOL _enableAvatarAnimation;
    unsigned int _type;
    NSString *_identifier;
    NSString *_userName;
    NSString *_titleLabelString;
    NSString *_descriptionLabelString;
    UIImage *_avatarImage;
    unsigned int _actionStyle;
    unsigned int _avatarStyle;
    NSString *_actionTitle;
    unsigned int _count;
    CDUnknownBlockType _willShowWindowBlock;
    CDUnknownBlockType _didTapActionButtonBlock;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int actionStyle; // @synthesize actionStyle=_actionStyle;
@property(retain, nonatomic) NSString *actionTitle; // @synthesize actionTitle=_actionTitle;
@property(retain, nonatomic) UIImage *avatarImage; // @synthesize avatarImage=_avatarImage;
@property(nonatomic) unsigned int avatarStyle; // @synthesize avatarStyle=_avatarStyle;
@property(nonatomic) unsigned int count; // @synthesize count=_count;
@property(retain, nonatomic) NSString *descriptionLabelString; // @synthesize descriptionLabelString=_descriptionLabelString;
@property(copy, nonatomic) CDUnknownBlockType didTapActionButtonBlock; // @synthesize didTapActionButtonBlock=_didTapActionButtonBlock;
@property(nonatomic) BOOL enableAvatarAnimation; // @synthesize enableAvatarAnimation=_enableAvatarAnimation;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *infoID;
- (id)init;
@property(retain, nonatomic) NSString *titleLabelString; // @synthesize titleLabelString=_titleLabelString;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(copy, nonatomic) CDUnknownBlockType willShowWindowBlock; // @synthesize willShowWindowBlock=_willShowWindowBlock;

@end
