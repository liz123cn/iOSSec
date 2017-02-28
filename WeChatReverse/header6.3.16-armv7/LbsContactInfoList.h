//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface LbsContactInfoList : NSObject
{
    NSMutableArray *m_LbsContactList;
    int m_iRet;
    NSString *m_nsErrorMsg;
    int m_iState;
    int m_iFlushTime;
    BOOL m_iIsShowRoom;
    int m_iRoomMemberCount;
}

- (void).cxx_destruct;
- (void)addToLbsContactList:(id)arg1;
- (unsigned int)countOfLbsContactList;
- (id)description;
- (BOOL)fromSKBuffer:(struct SKBuffer *)arg1;
- (void)getLbsContactList:(id *)arg1 range:(struct _NSRange)arg2;
@property(nonatomic) int iRet; // @synthesize iRet=m_iRet;
- (id)init;
- (void)insertLbsContactList:(id)arg1 atIndexes:(id)arg2;
- (void)insertObject:(id)arg1 inLbsContactListAtIndex:(unsigned int)arg2;
- (id)keyPaths;
@property(retain, nonatomic) NSMutableArray *lbsContactList; // @synthesize lbsContactList=m_LbsContactList;
@property(nonatomic) int m_iFlushTime; // @synthesize m_iFlushTime;
@property(nonatomic) BOOL m_iIsShowRoom; // @synthesize m_iIsShowRoom;
@property(nonatomic) int m_iRoomMemberCount; // @synthesize m_iRoomMemberCount;
@property(nonatomic) int m_iState; // @synthesize m_iState;
@property(retain, nonatomic) NSString *m_nsErrorMsg; // @synthesize m_nsErrorMsg;
- (id)objectInLbsContactListAtIndex:(unsigned int)arg1;
- (void)removeFromLbsContactList:(id)arg1;
- (void)removeLbsContactListAtIndexes:(id)arg1;
- (void)removeObjectFromLbsContactListAtIndex:(unsigned int)arg1;
- (void)replaceLbsContactListAtIndexes:(id)arg1 withLbsContactList:(id)arg2;
- (void)replaceObjectInLbsContactListAtIndex:(unsigned int)arg1 withObject:(id)arg2;

@end
