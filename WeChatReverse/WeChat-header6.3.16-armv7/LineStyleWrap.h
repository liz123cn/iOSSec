//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIColor, UIFont;

@interface LineStyleWrap : NSObject
{
    NSString *m_nsChars;
    UIColor *m_color;
    UIFont *m_font;
    float m_fOffset;
    BOOL m_bUnderline;
    float m_fRealLength;
}

- (void).cxx_destruct;
- (int)compare:(id)arg1;
@property(nonatomic) BOOL m_bUnderline; // @synthesize m_bUnderline;
@property(retain, nonatomic) UIColor *m_color; // @synthesize m_color;
@property(nonatomic) float m_fOffset; // @synthesize m_fOffset;
@property(nonatomic) float m_fRealLength; // @synthesize m_fRealLength;
@property(retain, nonatomic) UIFont *m_font; // @synthesize m_font;
@property(retain, nonatomic) NSString *m_nsChars; // @synthesize m_nsChars;

@end
