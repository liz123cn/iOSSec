//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "IContactMgrExt.h"
#import "IGroupMgrExt.h"

@class NSMutableDictionary;

@interface MainFrameCellDataManager : MMObject <IContactMgrExt, IGroupMgrExt>
{
    NSMutableDictionary *m_dictMainFrameCellData;
}

- (void).cxx_destruct;
- (void)OnChangeGroup:(id)arg1;
- (void)cleanupAllCache;
- (void)clearOldVersionCellDataFile;
- (void)dealloc;
- (id)getCellData:(id)arg1;
- (id)getCellDataByUsrName:(id)arg1;
- (id)init;
- (void)onModifyContact:(id)arg1;
- (void)removeCellData:(id)arg1;
- (id)updateCellData:(id)arg1;
- (void)updateTimeFieldForCellData;

@end

