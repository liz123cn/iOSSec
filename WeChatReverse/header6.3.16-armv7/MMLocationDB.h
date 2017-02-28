//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class WCDataBase, WCDataBaseTable;

@interface MMLocationDB : NSObject
{
    WCDataBase *m_db;
    WCDataBaseTable *m_table;
}

- (void).cxx_destruct;
- (void)closeDB;
- (void)closeDBBeforeInit;
- (id)getAddressByLocation:(CDStruct_c3b9c2ee)arg1;
- (id)init;
@property(retain, nonatomic) WCDataBase *m_db; // @synthesize m_db;
@property(retain, nonatomic) WCDataBaseTable *m_table; // @synthesize m_table;
- (id)pathForDatabase;
- (BOOL)setAddress:(id)arg1 ByLocation:(CDStruct_c3b9c2ee)arg2;
- (void)setupDatabase;

@end

