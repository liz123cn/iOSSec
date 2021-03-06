//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "EmoticonBackupMd5ListCgiDelegate.h"
#import "EmoticonUploadCgiDelegate.h"

@class EmoticonBackupMd5ListCgi, EmoticonUploadCgi;

@interface EmoticonBackupLogicObject : MMObject <EmoticonBackupMd5ListCgiDelegate, EmoticonUploadCgiDelegate>
{
    BOOL m_isActive;
    BOOL m_hasStartLogic;
    BOOL _m_isIgnoreOnceLimit;
    EmoticonBackupMd5ListCgi *m_backupCgi;
    EmoticonUploadCgi *m_uploadCgi;
    id <EmoticonBackupLogicObjectDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)callFailedDelegate;
- (void)callOkDelegate;
- (BOOL)canResumeEmoticonBackupMd5List;
- (BOOL)canStartCgiNow;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 isIgnoreOnceLimit:(BOOL)arg2;
- (BOOL)isActive;
@property(retain, nonatomic) EmoticonBackupMd5ListCgi *m_backupCgi; // @synthesize m_backupCgi;
@property(nonatomic) __weak id <EmoticonBackupLogicObjectDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) BOOL m_hasStartLogic; // @synthesize m_hasStartLogic;
@property(nonatomic) BOOL m_isActive; // @synthesize m_isActive;
@property(nonatomic) BOOL m_isIgnoreOnceLimit; // @synthesize m_isIgnoreOnceLimit=_m_isIgnoreOnceLimit;
@property(retain, nonatomic) EmoticonUploadCgi *m_uploadCgi; // @synthesize m_uploadCgi;
- (void)onEmoticonBackupMd5ListFailed;
- (void)onEmoticonBackupMd5ListNoNeedToBackUp;
- (void)onEmoticonBackupMd5ListOk;
- (void)onEmoticonBackupMd5ListOverLimitWithNeedUploadMd5List:(id)arg1;
- (void)onEmoticonBackupMd5ListRunOutWithNeedUploadMd5List:(id)arg1;
- (void)onEmoticonUploadMd5Failed:(id)arg1;
- (void)onEmoticonUploadMd5Ok:(id)arg1;
- (void)startLogic;
- (void)uploadEmoticon;

@end

