//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSMutableArray, NSString, ReaderTopNewWrap, TemplateDetailToplineWrap, TemplateHeaderWrap, TemplateImageTextWrap, UIColor;

@interface ReaderWrap : NSObject
{
    NSString *m_nsTitle;
    NSString *m_nsUrl;
    NSString *m_nsNativeUrl;
    NSString *m_nsShortUrl;
    NSString *m_nsTid;
    NSString *m_nsSource;
    NSString *m_nsSourceIcon;
    NSDate *m_pubTime;
    unsigned long m_uiType;
    BOOL m_bHasVedio;
    NSString *m_nsCategory;
    NSString *m_nsUserName;
    NSString *m_nsNickName;
    ReaderTopNewWrap *m_TopNewWrap;
    unsigned long m_uiDelFlag;
    unsigned long m_uiContentAttributeBitSetFlag;
    unsigned long m_uiItemShowType;
    UIColor *m_topColor;
    NSMutableArray *m_arrStyles;
    NSMutableArray *m_arrLines;
    unsigned long _templateShowType;
    TemplateImageTextWrap *_imageTextWrap;
    TemplateHeaderWrap *_headerWrap;
    TemplateDetailToplineWrap *_toplineWrap;
    NSMutableArray *_leftColumns;
    NSMutableArray *_rightColumns;
    NSMutableArray *_opItems;
    unsigned int _m_index;
}

+ (id)getArrReaderWaps:(id)arg1;
+ (id)getFirstReaderTitle:(id)arg1;
+ (struct XmlReaderNode_t *)getReaderNode:(struct XmlReaderNode_t *)arg1;
+ (BOOL)parseKeyLineWrap:(id)arg1 valueLineWrap:(id)arg2 xmlNode:(struct XmlReaderNode_t *)arg3;
+ (BOOL)parseLineWrap:(id)arg1 xmlNode:(struct XmlReaderNode_t *)arg2;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
@property(retain, nonatomic) TemplateHeaderWrap *headerWrap; // @synthesize headerWrap=_headerWrap;
@property(retain, nonatomic) TemplateImageTextWrap *imageTextWrap; // @synthesize imageTextWrap=_imageTextWrap;
@property(retain, nonatomic) NSMutableArray *leftColumns; // @synthesize leftColumns=_leftColumns;
@property(retain, nonatomic) ReaderTopNewWrap *m_TopNewWrap; // @synthesize m_TopNewWrap;
@property(retain, nonatomic) NSMutableArray *m_arrLines; // @synthesize m_arrLines;
@property(retain, nonatomic) NSMutableArray *m_arrStyles; // @synthesize m_arrStyles;
@property(nonatomic) BOOL m_bHasVedio; // @synthesize m_bHasVedio;
@property(nonatomic) unsigned int m_index; // @synthesize m_index=_m_index;
@property(retain, nonatomic) NSString *m_nsCategory; // @synthesize m_nsCategory;
@property(retain, nonatomic) NSString *m_nsNativeUrl; // @synthesize m_nsNativeUrl;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(retain, nonatomic) NSString *m_nsShortUrl; // @synthesize m_nsShortUrl;
@property(retain, nonatomic) NSString *m_nsSource; // @synthesize m_nsSource;
@property(retain, nonatomic) NSString *m_nsSourceIcon; // @synthesize m_nsSourceIcon;
@property(retain, nonatomic) NSString *m_nsTid; // @synthesize m_nsTid;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(retain, nonatomic) NSString *m_nsUrl; // @synthesize m_nsUrl;
@property(retain, nonatomic) NSString *m_nsUserName; // @synthesize m_nsUserName;
@property(retain, nonatomic) NSDate *m_pubTime; // @synthesize m_pubTime;
@property(retain, nonatomic) UIColor *m_topColor; // @synthesize m_topColor;
@property(nonatomic) unsigned long m_uiContentAttributeBitSetFlag; // @synthesize m_uiContentAttributeBitSetFlag;
@property(nonatomic) unsigned long m_uiDelFlag; // @synthesize m_uiDelFlag;
@property(nonatomic) unsigned long m_uiItemShowType; // @synthesize m_uiItemShowType;
@property(nonatomic) unsigned long m_uiType; // @synthesize m_uiType;
@property(retain, nonatomic) NSMutableArray *opItems; // @synthesize opItems=_opItems;
@property(retain, nonatomic) NSMutableArray *rightColumns; // @synthesize rightColumns=_rightColumns;
@property(nonatomic) unsigned long templateShowType; // @synthesize templateShowType=_templateShowType;
@property(retain, nonatomic) TemplateDetailToplineWrap *toplineWrap; // @synthesize toplineWrap=_toplineWrap;

@end

