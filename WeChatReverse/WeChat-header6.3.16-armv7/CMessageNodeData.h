//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CMessageWrap, UIView;

@interface CMessageNodeData : NSObject
{
    int m_eMsgNodeType;
    CMessageWrap *m_msgWrap;
    UIView *m_view;
    unsigned long m_uCreateTime;
}

- (void).cxx_destruct;
- (unsigned int)GetNodeViewType;
- (int)compare:(id)arg1;
- (id)init;
@property(nonatomic) int m_eMsgNodeType; // @synthesize m_eMsgNodeType;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(nonatomic) unsigned long m_uCreateTime; // @synthesize m_uCreateTime;
@property(retain, nonatomic) UIView *m_view; // @synthesize m_view;

@end
