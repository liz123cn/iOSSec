//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSString, SystemMsgTextWrap, UIImage, UIView;

@interface SystemMsgWrap : NSObject <NSCoding>
{
    SystemMsgTextWrap *m_title;
    SystemMsgTextWrap *m_description;
    UIImage *m_backgroundImage;
    UIView *m_backgroundView;
    NSString *m_url;
    NSString *m_backupURL;
    BOOL m_enableClose;
    BOOL m_closeButtonTransparent;
}

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) UIImage *m_backgroundImage; // @synthesize m_backgroundImage;
@property(retain, nonatomic) UIView *m_backgroundView; // @synthesize m_backgroundView;
@property(retain, nonatomic) NSString *m_backupURL; // @synthesize m_backupURL;
@property(nonatomic) BOOL m_closeButtonTransparent; // @synthesize m_closeButtonTransparent;
@property(retain, nonatomic) SystemMsgTextWrap *m_description; // @synthesize m_description;
@property(nonatomic) BOOL m_enableClose; // @synthesize m_enableClose;
@property(retain, nonatomic) SystemMsgTextWrap *m_title; // @synthesize m_title;
@property(retain, nonatomic) NSString *m_url; // @synthesize m_url;

@end

