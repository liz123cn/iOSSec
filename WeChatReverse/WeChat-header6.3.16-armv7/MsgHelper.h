//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MsgHelper : NSObject
{
}

+ (BOOL)AddMessageToChatExt:(id)arg1 MsgWrap:(id)arg2 DB:(id)arg3;
+ (BOOL)AddMessageToDB:(id)arg1 MsgWrap:(id)arg2 Des:(unsigned long)arg3 DB:(id)arg4 Lock:(id)arg5 GetChangeDisplay:(char *)arg6 InsertNew:(char *)arg7;
+ (BOOL)AddMsg:(id)arg1 EventInfo:(id)arg2 ChatName:(id)arg3 Des:(unsigned long)arg4 DBRet:(char *)arg5 DB:(id)arg6 Lock:(id)arg7 DuplicateList:(id)arg8 GetChangeDisplay:(char *)arg9 InsertNew:(char *)arg10;
+ (BOOL)CanNotAddToDB:(id)arg1 ChatName:(id)arg2;
+ (void)ClearDownloadData:(id)arg1 ChatName:(id)arg2;
+ (id)GetChatName:(id)arg1 Des:(unsigned int *)arg2;
+ (void)HandleThumb:(id)arg1 Message:(id)arg2 Lock:(id)arg3;
+ (BOOL)InternalCanNotAddDB:(id)arg1 ChatName:(id)arg2;
+ (BOOL)IsNotifyOnAddMsg:(id)arg1 ChatName:(id)arg2;
+ (BOOL)IsNotifyOnNotAddDB:(id)arg1 ChatName:(id)arg2;
+ (BOOL)IsShowPush:(BOOL)arg1 Des:(unsigned long)arg2 Msg:(id)arg3;
+ (void)ProcessOnAddNewMsg:(id)arg1 ChatName:(id)arg2 Lock:(id)arg3;

@end

