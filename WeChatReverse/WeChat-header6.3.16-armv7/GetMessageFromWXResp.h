//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseResp.h"

@class NSString, WXMediaMessage;

@interface GetMessageFromWXResp : BaseResp
{
    BOOL bText;
    NSString *text;
    WXMediaMessage *message;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL bText; // @synthesize bText;
- (id)init;
@property(retain, nonatomic) WXMediaMessage *message; // @synthesize message;
@property(retain, nonatomic) NSString *text; // @synthesize text;

@end
