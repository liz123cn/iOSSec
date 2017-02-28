//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface WCOutPhoneContact : NSObject
{
    BOOL isWeChatFriend;
    NSString *nickname;
    NSString *nicknamePinYin;
    NSString *nicknamePinYinShort;
    NSDictionary *phoneWithLabels;
    NSDictionary *phoneToMd5Dic;
    NSString *mmNickname;
    NSString *mmUsername;
    NSString *bigHeadImgUrl;
    NSString *smallHeadImgUrl;
    NSString *mainCountryCode;
    NSString *mainPurePhoneNum;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bigHeadImgUrl; // @synthesize bigHeadImgUrl;
- (id)initWithMMPhoneContact:(id)arg1;
- (id)initWithWCOutPhoneContact:(id)arg1;
- (id)initWithWCOutRecentCallItem:(id)arg1;
@property(readonly, nonatomic) BOOL isAdressBookContact;
@property(nonatomic) BOOL isWeChatFriend; // @synthesize isWeChatFriend;
@property(readonly, nonatomic) BOOL isWeChatUser;
@property(retain, nonatomic) NSString *mainCountryCode; // @synthesize mainCountryCode;
@property(retain, nonatomic) NSString *mainPurePhoneNum; // @synthesize mainPurePhoneNum;
@property(retain, nonatomic) NSString *mmNickname; // @synthesize mmNickname;
@property(retain, nonatomic) NSString *mmUsername; // @synthesize mmUsername;
@property(retain, nonatomic) NSString *nickname; // @synthesize nickname;
@property(retain, nonatomic) NSString *nicknamePinYin; // @synthesize nicknamePinYin;
@property(retain, nonatomic) NSString *nicknamePinYinShort; // @synthesize nicknamePinYinShort;
@property(retain, nonatomic) NSDictionary *phoneToMd5Dic; // @synthesize phoneToMd5Dic;
@property(retain, nonatomic) NSDictionary *phoneWithLabels; // @synthesize phoneWithLabels;
@property(retain, nonatomic) NSString *smallHeadImgUrl; // @synthesize smallHeadImgUrl;

@end

