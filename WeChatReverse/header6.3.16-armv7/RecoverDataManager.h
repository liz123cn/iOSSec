//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MMPackageDownloadMgrExt.h"

@class NSMutableDictionary, RecoverDataWorker;

@interface RecoverDataManager : MMObject <MMPackageDownloadMgrExt>
{
    NSMutableDictionary *m_dicRecoverData;
    RecoverDataWorker *m_worker;
    id <RecoverDataManagerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)addRecoverData:(id)arg1 order:(unsigned int)arg2 arrItems:(id)arg3;
- (void)dealloc;
- (BOOL)doRecover:(id)arg1;
- (void)downloadConfigs;
- (void)downloadPackage:(id)arg1;
- (id)getUploadPath:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (BOOL)isLowSpaceForDBRecover:(id)arg1 suggestSize:(unsigned long long *)arg2 restSize:(unsigned long long *)arg3;
- (BOOL)isRecoverDB:(id)arg1;
- (void)notifyAddRecoverData:(id)arg1 order:(unsigned int)arg2;
- (void)notifyAddUploadData:(id)arg1 order:(unsigned int)arg2 items:(id)arg3;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageListUpdated:(id)arg1;
- (BOOL)parseConfigContent:(id)arg1 xmlReader:(struct CXmlReader *)arg2;
- (void)parseConfigItems:(struct CXmlReader *)arg1 name:(id)arg2 order:(unsigned int *)arg3 items:(id)arg4;
- (id)pathOfRecoverDB:(id)arg1;
- (BOOL)readItem:(struct XmlReaderNode_t *)arg1 item:(id)arg2;
- (void)receiveConfigContent:(id)arg1;

@end

