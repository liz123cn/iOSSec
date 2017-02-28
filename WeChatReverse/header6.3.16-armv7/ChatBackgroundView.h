//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIControl.h"

@class ChatBackgroundItem, NSIndexPath;

@interface ChatBackgroundView : MMUIControl
{
    ChatBackgroundItem *m_cbItem;
    NSIndexPath *m_indexPath;
    id <ChatBackgroundViewDelegate> m_delegate;
    int m_index;
}

- (void).cxx_destruct;
- (int)getStatus;
- (void)initViewWithData;
- (id)initWithFrame:(struct CGRect)arg1 andData:(id)arg2;
@property(retain, nonatomic) ChatBackgroundItem *m_cbItem; // @synthesize m_cbItem;
@property(nonatomic) __weak id <ChatBackgroundViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) int m_index; // @synthesize m_index;
@property(retain, nonatomic) NSIndexPath *m_indexPath; // @synthesize m_indexPath;
- (void)onClick;
- (void)setStatus:(int)arg1;
- (void)startDownloadingAnimation;

@end

