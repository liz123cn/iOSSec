//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MMWebImageView, NSString, NSURL, ShareOpenSDKStateItem, UIImage, UILabel, WCLanDeviceStateItemProgressView;

@interface MMShareActionSheetCell : UIView
{
    UIView *m_contentView;
    UIView *m_header;
    MMWebImageView *m_imageView;
    UILabel *m_titleLabel;
    UILabel *m_subTitleLabel;
    UIView *m_stateView;
    WCLanDeviceStateItemProgressView *m_progressView;
    UILabel *m_resultLabel;
    UIView *m_resultBgView;
    int m_index;
    NSString *m_title;
    UIImage *m_iconImg;
    NSURL *m_iconImgUrl;
    id m_userInfo;
    ShareOpenSDKStateItem *m_stateItem;
}

- (void).cxx_destruct;
- (id)init;
- (float)lineHeight;
@property(retain, nonatomic) UIImage *m_iconImg; // @synthesize m_iconImg;
@property(retain, nonatomic) NSURL *m_iconImgUrl; // @synthesize m_iconImgUrl;
@property(nonatomic) int m_index; // @synthesize m_index;
@property(retain, nonatomic) ShareOpenSDKStateItem *m_stateItem; // @synthesize m_stateItem;
@property(copy, nonatomic) NSString *m_title; // @synthesize m_title;
@property(retain, nonatomic) id m_userInfo; // @synthesize m_userInfo;

@end

