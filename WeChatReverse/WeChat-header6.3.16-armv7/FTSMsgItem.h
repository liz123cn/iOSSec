//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface FTSMsgItem : NSObject
{
    NSString *_userName;
    unsigned long _localId;
    unsigned long _createTime;
}

- (void).cxx_destruct;
- (int)compareMsgItemAscending:(id)arg1;
@property(nonatomic) unsigned long createTime; // @synthesize createTime=_createTime;
- (id)init;
- (BOOL)isEqual:(id)arg1;
@property(nonatomic) unsigned long localId; // @synthesize localId=_localId;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;

@end
