//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SearchKeywordItem : NSObject
{
    NSString *_keyword;
    NSString *_regexword;
    BOOL _regextMode;
    BOOL _isEnglishWord;
    BOOL _regexMode;
}

- (void).cxx_destruct;
- (id)init;
@property(nonatomic) BOOL isEnglishWord; // @synthesize isEnglishWord=_isEnglishWord;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) BOOL regexMode; // @synthesize regexMode=_regexMode;
@property(retain, nonatomic) NSString *regexword; // @synthesize regexword=_regexword;

@end

