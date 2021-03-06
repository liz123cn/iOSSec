//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CBaseFile, NSString;

@interface CDownloadFile : NSObject
{
    NSString *m_nsFileName;
    long long m_i64FileSize;
    struct stFileHeader m_stFileHeader;
    CBaseFile *m_oFile;
    unsigned long m_uiMode;
    BOOL m_bComplete;
    NSString *m_nsDownloadPath;
}

+ (long long)GetFileSize:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)Close;
- (BOOL)DoComplete;
- (BOOL)DumpHeader;
- (unsigned long)GetDownloadSize;
- (unsigned long)GetRealFileSize;
- (BOOL)InitDownloadFile;
- (BOOL)IsComplete;
- (BOOL)IsOpen;
- (BOOL)Open;
- (BOOL)ReadData:(id)arg1 Length:(unsigned long)arg2 Offset:(long long)arg3;
- (BOOL)ReadHeader;
- (void)SetDownloadInfo:(long long)arg1 FileName:(id)arg2 Mode:(unsigned long)arg3;
- (BOOL)WriteData:(id)arg1 Offset:(long long)arg2;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSString *m_nsDownloadPath; // @synthesize m_nsDownloadPath;
@property(retain, nonatomic) NSString *m_nsFileName; // @synthesize m_nsFileName;

@end

