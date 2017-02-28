//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSMutableArray;

@interface EmoticonBackupMd5ListCgi : MMObject <PBMessageObserverDelegate>
{
    BOOL m_hasStartRequestOnce;
    BOOL m_ignoreLimit;
    id <EmoticonBackupMd5ListCgiDelegate> m_delegate;
    NSMutableArray *m_md5List;
    unsigned long m_eventId;
    NSMutableArray *m_needUploadMd5List;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)callFailedDelegate;
- (void)callNoNeedToBackupDelegate;
- (void)callOkDelegate;
- (void)dealloc;
- (id)initWithMd5List:(id)arg1 delegate:(id)arg2;
- (void)internalRequest;
- (BOOL)isActive;
@property(nonatomic) __weak id <EmoticonBackupMd5ListCgiDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned long m_eventId; // @synthesize m_eventId;
@property(nonatomic) BOOL m_hasStartRequestOnce; // @synthesize m_hasStartRequestOnce;
@property(nonatomic) BOOL m_ignoreLimit; // @synthesize m_ignoreLimit;
@property(retain, nonatomic) NSMutableArray *m_md5List; // @synthesize m_md5List;
@property(retain, nonatomic) NSMutableArray *m_needUploadMd5List; // @synthesize m_needUploadMd5List;
- (void)startRequest;

@end

