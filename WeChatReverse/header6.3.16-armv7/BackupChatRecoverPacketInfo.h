//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface BackupChatRecoverPacketInfo : NSObject
{
    NSMutableArray *m_arrMessagePackagePaths;
    NSMutableArray *m_arrMediaFileName;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
@property(retain, nonatomic) NSMutableArray *m_arrMediaFileName; // @synthesize m_arrMediaFileName;
@property(retain, nonatomic) NSMutableArray *m_arrMessagePackagePaths; // @synthesize m_arrMessagePackagePaths;
- (id)newRecoverChatMsgListAtIndex:(unsigned int)arg1;

@end

