//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMImageGridView.h"

@class NSString;

@interface EmoticonStoreGridView : MMImageGridView
{
    NSString *m_emoticonPid;
    int m_currentSelectIndex;
}

- (void).cxx_destruct;
- (int)getRealIndexFromPoint:(struct CGPoint)arg1;
- (void)handleLongPress:(id)arg1;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isPoint:(struct CGPoint)arg1 inView:(id)arg2;
- (void)loadPreViewAtIndex:(int)arg1;
@property(nonatomic) int m_currentSelectIndex; // @synthesize m_currentSelectIndex;
@property(retain, nonatomic) NSString *m_emoticonPid; // @synthesize m_emoticonPid;
- (id)showPreviewAtIndex:(int)arg1;

@end

