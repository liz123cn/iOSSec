//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "MMService.h"

@class NSString;

@interface ScanAppSpaceSizeService : MMService <MMService>
{
    BOOL _hasAppSpaceSize;
    int _runStatus;
    long long _appSpaceSize;
    long long _scannedFileCount;
}

@property long long appSpaceSize; // @synthesize appSpaceSize=_appSpaceSize;
- (void)asyncStartTask;
- (void)asyncStopTask;
- (void)folderSizeAtPath:(const char *)arg1;
@property BOOL hasAppSpaceSize; // @synthesize hasAppSpaceSize=_hasAppSpaceSize;
- (id)init;
- (void)onScanTaskFinished;
- (void)onScanTaskUpdateProgress;
- (void)onServiceTerminate;
@property int runStatus; // @synthesize runStatus=_runStatus;
@property long long scannedFileCount; // @synthesize scannedFileCount=_scannedFileCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

