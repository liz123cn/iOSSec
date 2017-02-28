//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@class NSString;

@interface EmoticonUploadCgi : MMObject <PBMessageObserverDelegate>
{
    BOOL m_hasStartRequestOnce;
    id <EmoticonUploadCgiDelegate> m_delegate;
    unsigned long m_eventId;
    NSString *m_md5;
    unsigned long m_startPos;
    unsigned long m_totalLen;
    NSString *m_filePath;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)callFailedDelegate;
- (void)callOkDelegateMd5:(id)arg1;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1 md5:(id)arg2 delegate:(id)arg3;
- (void)internalRequest;
- (BOOL)isActive;
@property(nonatomic) __weak id <EmoticonUploadCgiDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) unsigned long m_eventId; // @synthesize m_eventId;
@property(retain, nonatomic) NSString *m_filePath; // @synthesize m_filePath;
@property(nonatomic) BOOL m_hasStartRequestOnce; // @synthesize m_hasStartRequestOnce;
@property(retain, nonatomic) NSString *m_md5; // @synthesize m_md5;
@property(nonatomic) unsigned long m_startPos; // @synthesize m_startPos;
@property(nonatomic) unsigned long m_totalLen; // @synthesize m_totalLen;
- (void)startRequest;

@end
