//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface WCCardPkgUtil : NSObject
{
}

+ (id)CardData2WCUploadTask:(id)arg1 CardExt:(id)arg2;
+ (BOOL)GetWCCardPkgSyncInfoFileIsExist;
+ (BOOL)IsWCCardTransferAppServiceInPlane:(id)arg1;
+ (BOOL)ShouldShowWaterMark:(id)arg1;
+ (id)getCardDisplayAuxTitle:(id)arg1;
+ (id)getCardDisplaySubTitle:(id)arg1;
+ (id)getCardDisplayTitle:(id)arg1;
+ (id)getDefaultCardTypeName:(unsigned long)arg1;
+ (id)getDistance:(unsigned long)arg1;
+ (id)getHighlightedBgColor;
+ (id)getListViewBackgroundColor;
+ (id)getUserWCCardPkgRootDir;
+ (id)getViewBackgroundColor;
+ (id)getWCCardPkgConfigPath;
+ (id)getWCCardPkgDBPath;
+ (id)getWCCardPkgMsgTipsPath;
+ (id)getWCCardPkgSyncBufferPath;
+ (BOOL)isEnoughCardInfoToShow:(id)arg1;
+ (BOOL)isFromAppSence:(unsigned long)arg1;
+ (BOOL)isFromFriendFeedScene:(unsigned long)arg1;
+ (BOOL)isFromFriendSence:(unsigned long)arg1;
+ (BOOL)isFromMyselfSence:(unsigned long)arg1;
+ (BOOL)isFromOutAppSence:(unsigned long)arg1;
+ (BOOL)isKnownCardType:(unsigned long)arg1;
+ (BOOL)isShownInListCardStatus:(unsigned long)arg1;
+ (void)mergeCardData:(id)arg1 cardItem:(id)arg2 toMessageWrap:(id)arg3;
+ (void)openMyPackageEntrance;
+ (void)uploadKVPageName:(id)arg1 cardType:(unsigned long)arg2 cardTpID:(id)arg3 cardID:(id)arg4;
+ (void)uploadKVPageName:(id)arg1 cardType:(unsigned long)arg2 cardTpID:(id)arg3 cardID:(id)arg4 hasTip:(unsigned long)arg5 fromScene:(unsigned long)arg6 ChattingName:(id)arg7 HasAnnounce:(BOOL)arg8 svrRedDotTipsWording:(id)arg9;

@end

