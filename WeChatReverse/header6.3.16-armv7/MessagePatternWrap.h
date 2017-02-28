//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSObject<OS_dispatch_queue>, NSString;

@interface MessagePatternWrap : NSObject
{
    NSMutableArray *m_arrPatternList;
    BOOL m_bChange;
    NSString *m_nsChatName;
    NSObject<OS_dispatch_queue> *m_worker;
}

+ (id)GetPathOfPatternCache:(id)arg1;
+ (id)GetPathOfPatternCacheWithPb:(id)arg1;
- (void).cxx_destruct;
- (void)DelMsg:(id)arg1;
- (void)DelMsgPatten:(id)arg1;
- (id)GetPattern:(id)arg1;
- (void)LoadFromFile;
- (void)RemoveFromFile;
- (void)SaveToFile;
- (void)SetPattern:(id)arg1;
- (void)dealloc;
- (void)doSaveToFile:(id)arg1;
- (id)initWithChatName:(id)arg1 andWorker:(id)arg2;
- (BOOL)isBrandContactMsg:(id)arg1;
@property(retain, nonatomic) NSMutableArray *m_arrPatternList; // @synthesize m_arrPatternList;
@property BOOL m_bChange; // @synthesize m_bChange;
@property(retain, nonatomic) NSString *m_nsChatName; // @synthesize m_nsChatName;

@end
