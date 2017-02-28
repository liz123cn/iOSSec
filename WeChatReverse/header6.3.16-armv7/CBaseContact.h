//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "PBCoding.h"

@class NSData, NSDictionary, NSString;

@interface CBaseContact : NSObject <PBCoding, NSCoding>
{
    NSString *m_nsUsrName;
    NSString *m_nsEncodeUserName;
    NSString *m_nsAliasName;
    unsigned long m_uiConType;
    NSString *m_nsNickName;
    NSString *m_nsFullPY;
    NSString *m_nsShortPY;
    NSString *m_nsRemark;
    NSString *m_nsRemarkPYShort;
    NSString *m_nsRemarkPYFull;
    unsigned long m_uiSex;
    unsigned long m_uiType;
    unsigned long m_uiChatState;
    NSData *m_dtUsrImg;
    NSString *m_nsImgStatus;
    NSString *m_nsHDImgStatus;
    NSString *m_nsHeadImgUrl;
    NSString *m_nsHeadHDImgUrl;
    NSString *m_nsHeadHDMd5;
    NSString *m_nsDraft;
    unsigned long m_uiDraftTime;
    NSString *m_nsAtUserList;
    unsigned long m_uiQQUin;
    NSString *m_nsQQNickName;
    NSString *m_nsQQRemark;
    NSString *m_nsMobileIdentify;
    NSString *m_nsGoogleContactName;
    NSString *m_nsGoogleContactNickName;
    unsigned long m_uiFriendScene;
    unsigned long m_uiImgKey;
    unsigned long m_uiExtKey;
    unsigned long m_uiImgKeyAtLastGet;
    unsigned long m_uiExtKeyAtLastGet;
    BOOL m_hasDetectPlugin;
    BOOL m_isPlugin;
    BOOL m_hasDetectSelf;
    BOOL m_isSelf;
    NSString *m_nsAntispamTicket;
    NSDictionary *_externalInfoJSONCache;
}

+ (void)initialize;
- (void).cxx_destruct;
- (id)chatRoomTopic;
- (int)compare:(id)arg1;
- (BOOL)copyFrom:(id)arg1;
@property(readonly, copy) NSString *description;
- (void)encodeWithCoder:(id)arg1;
@property(retain, nonatomic) NSDictionary *externalInfoJSONCache; // @synthesize externalInfoJSONCache=_externalInfoJSONCache;
- (id)getContactDisplayName;
- (id)getContactDisplayUsrName;
- (id)getContactHeadImage;
- (id)getContactTalkRoomName;
- (id)getEncodeUserName;
- (int)getImageStatusCode;
- (id)getQQDisplayName;
- (id)getRemark;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (BOOL)hasContactDisplayUsrName;
- (BOOL)hasContactDisplayUsrNameByCache;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isBlack;
- (BOOL)isBrandSessionHolder;
- (BOOL)isChatRoomContact;
- (BOOL)isChatStatusNotifyOpen;
- (BOOL)isChatroom;
- (BOOL)isEnterpriseContact;
- (BOOL)isEqualToContact:(id)arg1;
- (BOOL)isEqualToName:(id)arg1;
- (BOOL)isFavour;
- (BOOL)isFileHelper;
- (BOOL)isGroupCard;
- (BOOL)isHasGMail;
- (BOOL)isHasHDImg;
- (BOOL)isHasQQ;
- (BOOL)isHasQQDisplayName;
- (BOOL)isLbsroom;
- (BOOL)isMMContact;
- (BOOL)isMacHelper;
- (BOOL)isNeedGetHDImg;
- (BOOL)isNeedGetUsrImg;
- (BOOL)isNeedGetUsrImgWithoutCheckLocalFile;
- (BOOL)isQQ;
- (BOOL)isQQMBlog;
- (BOOL)isSelf;
- (BOOL)isSnsBlack;
- (BOOL)isTemplateMsgHolder;
- (BOOL)isValid;
- (BOOL)isWeSportContact;
- (BOOL)isWeixin;
- (BOOL)isWeixinTeamContact;
- (id)localizedStringForMale:(id)arg1 female:(id)arg2 andUnkownSex:(id)arg3;
@property(retain, nonatomic) NSData *m_dtUsrImg; // @synthesize m_dtUsrImg;
@property(readonly, nonatomic) BOOL m_isPlugin; // @synthesize m_isPlugin;
@property(retain, nonatomic) NSString *m_nsAliasName; // @synthesize m_nsAliasName;
@property(retain, nonatomic) NSString *m_nsAntispamTicket; // @synthesize m_nsAntispamTicket;
@property(retain, nonatomic) NSString *m_nsAtUserList; // @synthesize m_nsAtUserList;
@property(retain, nonatomic) NSString *m_nsDraft; // @synthesize m_nsDraft;
@property(retain, nonatomic) NSString *m_nsEncodeUserName; // @synthesize m_nsEncodeUserName;
@property(retain, nonatomic) NSString *m_nsFullPY; // @synthesize m_nsFullPY;
@property(retain, nonatomic) NSString *m_nsGoogleContactName; // @synthesize m_nsGoogleContactName;
@property(retain, nonatomic) NSString *m_nsGoogleContactNickName; // @synthesize m_nsGoogleContactNickName;
@property(retain, nonatomic) NSString *m_nsHDImgStatus; // @synthesize m_nsHDImgStatus;
@property(retain, nonatomic) NSString *m_nsHeadHDImgUrl; // @synthesize m_nsHeadHDImgUrl;
@property(retain, nonatomic) NSString *m_nsHeadHDMd5; // @synthesize m_nsHeadHDMd5;
@property(retain, nonatomic) NSString *m_nsHeadImgUrl; // @synthesize m_nsHeadImgUrl;
@property(retain, nonatomic) NSString *m_nsImgStatus; // @synthesize m_nsImgStatus;
@property(retain, nonatomic) NSString *m_nsMobileIdentify; // @synthesize m_nsMobileIdentify;
@property(retain, nonatomic) NSString *m_nsNickName; // @synthesize m_nsNickName;
@property(retain, nonatomic) NSString *m_nsQQNickName; // @synthesize m_nsQQNickName;
@property(retain, nonatomic) NSString *m_nsQQRemark; // @synthesize m_nsQQRemark;
@property(retain, nonatomic) NSString *m_nsRemark; // @synthesize m_nsRemark;
@property(retain, nonatomic) NSString *m_nsRemarkPYFull; // @synthesize m_nsRemarkPYFull;
@property(retain, nonatomic) NSString *m_nsRemarkPYShort; // @synthesize m_nsRemarkPYShort;
@property(retain, nonatomic) NSString *m_nsShortPY; // @synthesize m_nsShortPY;
@property(retain, nonatomic) NSString *m_nsUsrName; // @synthesize m_nsUsrName;
@property(nonatomic) unsigned long m_uiChatState; // @synthesize m_uiChatState;
@property(nonatomic) unsigned long m_uiConType; // @synthesize m_uiConType;
@property(nonatomic) unsigned long m_uiDraftTime; // @synthesize m_uiDraftTime;
@property(nonatomic) unsigned long m_uiExtKey; // @synthesize m_uiExtKey;
@property(nonatomic) unsigned long m_uiExtKeyAtLastGet; // @synthesize m_uiExtKeyAtLastGet;
@property(nonatomic) unsigned long m_uiFriendScene; // @synthesize m_uiFriendScene;
@property(nonatomic) unsigned long m_uiImgKey; // @synthesize m_uiImgKey;
@property(nonatomic) unsigned long m_uiImgKeyAtLastGet; // @synthesize m_uiImgKeyAtLastGet;
@property(nonatomic) unsigned long m_uiQQUin; // @synthesize m_uiQQUin;
@property(nonatomic) unsigned long m_uiSex; // @synthesize m_uiSex;
@property(nonatomic) unsigned long m_uiType; // @synthesize m_uiType;
- (void)saveUserImage;
- (void)setBlack:(BOOL)arg1;
- (void)setChatRoomTopic:(id)arg1;
- (void)setNickNameWithoutEmojiChange:(id)arg1;
- (void)setRemarkWithoutEmojiChange:(id)arg1;
- (void)setSnsBlack:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
