//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "MessageObserverDelegate.h"
#import "PBMessageObserverDelegate.h"

@class FIFOFileQueue, NSMutableDictionary;

@interface WCAdvertiseCommentUploadMgr : MMObject <PBMessageObserverDelegate, MessageObserverDelegate>
{
    FIFOFileQueue *m_queue;
    NSMutableDictionary *m_inQueueCommentsForWCObject;
    int m_uploadingCount;
    id <WCAdvertiseCommentUploadMgrDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)MessageReturn:(unsigned long)arg1 MessageInfo:(id)arg2 Event:(unsigned long)arg3;
- (void)addComment:(id)arg1;
- (void)addCommentToWCObjectCache:(id)arg1;
- (void)dealloc;
- (void)deleteAllCommentInQueue;
- (BOOL)doComment:(id)arg1;
- (id)getInQueueCommentForWCObject:(id)arg1;
- (id)init;
@property(nonatomic) __weak id <WCAdvertiseCommentUploadMgrDelegate> m_delegate; // @synthesize m_delegate;
- (void)popTopTask;
- (void)pushBackTopTask;
- (void)removeCommentFromWCObjectCache:(id)arg1;
- (void)removeInQueueLikeCommentForWCObject:(id)arg1;
- (void)tryStartNextTask;

@end

