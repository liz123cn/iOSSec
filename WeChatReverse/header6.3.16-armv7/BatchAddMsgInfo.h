//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, NSString;

@interface BatchAddMsgInfo : NSObject
{
    BOOL isCanAddDB;
    BOOL addDBResult;
    BOOL isNotify;
    BOOL isNeedChangeDisplay;
    BOOL isInsertNew;
    CMessageWrap *wrapMsg;
    NSString *chatName;
    unsigned long uiDes;
    NSString *clusterType;
    unsigned int _addMsgType;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL addDBResult; // @synthesize addDBResult;
@property(nonatomic) unsigned int addMsgType; // @synthesize addMsgType=_addMsgType;
@property(retain, nonatomic) NSString *chatName; // @synthesize chatName;
@property(retain, nonatomic) NSString *clusterType; // @synthesize clusterType;
@property(nonatomic) BOOL isCanAddDB; // @synthesize isCanAddDB;
@property(nonatomic) BOOL isInsertNew; // @synthesize isInsertNew;
@property(nonatomic) BOOL isNeedChangeDisplay; // @synthesize isNeedChangeDisplay;
@property(nonatomic) BOOL isNotify; // @synthesize isNotify;
@property(nonatomic) unsigned long uiDes; // @synthesize uiDes;
@property(retain, nonatomic) CMessageWrap *wrapMsg; // @synthesize wrapMsg;

@end
