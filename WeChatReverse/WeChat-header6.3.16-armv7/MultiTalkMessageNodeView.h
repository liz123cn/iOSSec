//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BaseMessageNodeView.h"

@class MultiTalkSessionItem, NSDictionary, NSString, UIImageView;

@interface MultiTalkMessageNodeView : BaseMessageNodeView
{
    UIImageView *m_backgroundImageView;
    MultiTalkSessionItem *m_sessionItem;
    NSDictionary *m_contentJsonDict;
    unsigned int m_msgLocalID;
    NSString *m_talkingMembers;
    NSString *m_talkingDuration;
    float m_nodeContentHeight;
    float m_nodeContentWidth;
    float m_headerContentHeight;
    float m_talkingDurationContentHeight;
    float m_talkingMembersContentHeight;
}

+ (BOOL)canCreateMessageNodeViewInstanceWithMessageWrap:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (id)getBkgImage;
- (void)initMultiTalkNodeViewData;
- (void)layoutSubviewsInternal;
@property(retain, nonatomic) UIImageView *m_backgroundImageView; // @synthesize m_backgroundImageView;
@property(retain, nonatomic) NSDictionary *m_contentJsonDict; // @synthesize m_contentJsonDict;
@property(nonatomic) float m_headerContentHeight; // @synthesize m_headerContentHeight;
@property(nonatomic) unsigned int m_msgLocalID; // @synthesize m_msgLocalID;
@property(nonatomic) float m_nodeContentHeight; // @synthesize m_nodeContentHeight;
@property(nonatomic) float m_nodeContentWidth; // @synthesize m_nodeContentWidth;
@property(retain, nonatomic) MultiTalkSessionItem *m_sessionItem; // @synthesize m_sessionItem;
@property(retain, nonatomic) NSString *m_talkingDuration; // @synthesize m_talkingDuration;
@property(nonatomic) float m_talkingDurationContentHeight; // @synthesize m_talkingDurationContentHeight;
@property(retain, nonatomic) NSString *m_talkingMembers; // @synthesize m_talkingMembers;
@property(nonatomic) float m_talkingMembersContentHeight; // @synthesize m_talkingMembersContentHeight;
- (void)reLayoutSubviews;
- (struct CGSize)sizeForFrame:(struct CGRect)arg1;

@end
