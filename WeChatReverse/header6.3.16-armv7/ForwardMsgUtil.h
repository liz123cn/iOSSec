//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@interface ForwardMsgUtil : MMObject
{
}

+ (void)ForwardMsg:(id)arg1 ToContact:(id)arg2 NeedSrcInfo:(BOOL)arg3;
+ (void)ForwardMsgList:(id)arg1 ToContact:(id)arg2 NeedSrcInfo:(BOOL)arg3;
+ (id)GenForwardMsgFromMsgWrap:(id)arg1 ToContact:(id)arg2 NeedSrcInfo:(BOOL)arg3;
+ (id)GenForwardVideoFromMsgWrap:(id)arg1 NeedSrcInfo:(BOOL)arg2;
+ (id)appMsgFromMsgWrap:(id)arg1;
+ (id)cardMsgFromMsgWrap:(id)arg1;
+ (id)emojiMsgFromMsgWrap:(id)arg1;
+ (id)genForwardAppRecordItemFromMsg:(id)arg1;
+ (id)getContactNickName:(id)arg1;
+ (id)getMsgRealFrom:(id)arg1;
+ (id)imgMsgFromMsgWrap:(id)arg1;
+ (id)locMsgFromMsgWrap:(id)arg1;
+ (id)readerAppMsgFromReaderWrap:(id)arg1;
+ (id)textMsgFromMsgWrap:(id)arg1;

@end

