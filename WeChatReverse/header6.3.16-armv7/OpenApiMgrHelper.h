//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface OpenApiMgrHelper : NSObject
{
}

+ (id)FormAppMessage:(id)arg1 withAppMessage:(id)arg2 appID:(id)arg3;
+ (id)FormTextMsg:(id)arg1 withText:(id)arg2 appID:(id)arg3;
+ (id)checkAppMsgThumbData:(id)arg1;
+ (void)checkShowTabbar;
+ (id)createConfirmLogicHelper:(id)arg1 withAppData:(id)arg2 withAppId:(id)arg3 showTextView:(BOOL)arg4 appScene:(unsigned long)arg5;
+ (id)createConfirmLogicHelper:(id)arg1 withAppData:(id)arg2 withAppId:(id)arg3 showTextView:(BOOL)arg4 appScene:(unsigned long)arg5 redirectUrl:(id)arg6;
+ (id)getNetWorkErrorHtml;
+ (void)hideChatViewKeyborad;
+ (BOOL)isLogin;
+ (BOOL)isNeedInit;
+ (void)makeFileInternalMessage:(id)arg1;
+ (id)makeLocationMessageForShareTo3rdAppWithLatitude:(double)arg1 andLongitude:(double)arg2 title:(id)arg3;
+ (id)makeMediaMessageForShareTo3rdApp:(id)arg1 withType:(int)arg2;
+ (id)makeTextMessageForShareTo3rdApp:(id)arg1;
+ (id)makeURLMessageForShareTo3rdApp:(id)arg1 withTitle:(id)arg2;
+ (id)parseURLParams:(id)arg1;

@end

