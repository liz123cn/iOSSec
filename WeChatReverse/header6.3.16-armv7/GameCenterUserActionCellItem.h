//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString, UIImage;

@interface GameCenterUserActionCellItem : MMObject
{
    BOOL _showRedDot;
    BOOL _hideBottomBorder;
    UIImage *_icon;
    NSString *_iconUrl;
    NSString *_title;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) BOOL hideBottomBorder; // @synthesize hideBottomBorder=_hideBottomBorder;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(nonatomic) BOOL showRedDot; // @synthesize showRedDot=_showRedDot;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;

@end

