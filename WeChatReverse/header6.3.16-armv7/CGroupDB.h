//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMMDB;

@interface CGroupDB : NSObject
{
    CMMDB *m_oMMDB;
}

- (void).cxx_destruct;
- (BOOL)AddGroupMember:(id)arg1 withMemberList:(id)arg2;
- (BOOL)AddGroupMember:(id)arg1 withMemberList:(id)arg2 needReload:(BOOL)arg3;
- (BOOL)DeleteGroupMember:(id)arg1 withMemberList:(id)arg2;
- (id)GetGroupMember:(id)arg1;
- (id)GetMMDB;
- (BOOL)QuitGroup:(id)arg1 withUsrName:(id)arg2;
- (BOOL)SetGroupTopic:(id)arg1 withTopic:(id)arg2;
- (id)init;
- (void)initDB:(id)arg1;
- (BOOL)insertOrUpdateGroupContact:(id)arg1;
- (BOOL)insertOrUpdateGroupMember:(id)arg1 withMemberList:(id)arg2;
- (BOOL)isUserName:(id)arg1 ExistInList:(id)arg2;

@end

