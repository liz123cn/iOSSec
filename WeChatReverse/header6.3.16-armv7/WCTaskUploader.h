//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "WCDataUploaderDelegate.h"
#import "WCMediaUploaderDelegate.h"

@class NSMutableSet, NSString, WCUploadTask, WCUploader;

@interface WCTaskUploader : MMObject <WCMediaUploaderDelegate, WCDataUploaderDelegate>
{
    WCUploadTask *_uploadTask;
    WCUploader *_uploader;
    NSMutableSet *_runnedSubTask;
    int _runningState;
    id <WCTaskUploaderDelegate> _delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)handleError;
- (id)initWithTask:(id)arg1 withDelegate:(id)arg2;
- (void)onDataUploadFinished:(id)arg1 uploadResult:(int)arg2 uploadErrType:(int)arg3;
- (void)onMediaUploadFinished:(id)arg1 uploadResult:(int)arg2 uploadErrType:(int)arg3;
- (void)run;
- (void)setStop;
- (void)tryStartNextTask;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

