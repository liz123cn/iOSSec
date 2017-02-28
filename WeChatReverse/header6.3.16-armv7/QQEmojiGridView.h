//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class NSMutableArray;

@interface QQEmojiGridView : MMUIView
{
    NSMutableArray *m_emoticonWrapArray;
    int m_column;
    int m_row;
    NSMutableArray *m_emoticonViewArray;
    float m_itemWidth;
    float m_itemHeight;
    float m_edgeTop;
    float m_edgeLeft;
    float m_intervalX;
    float m_intervalY;
    id <QQEmojiGridViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)calculateLayout;
- (id)cellKey;
- (void)dealloc;
- (int)getRealIndexFromPoint:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) int m_column; // @synthesize m_column;
@property(nonatomic) __weak id <QQEmojiGridViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) float m_edgeLeft; // @synthesize m_edgeLeft;
@property(nonatomic) float m_edgeTop; // @synthesize m_edgeTop;
@property(retain, nonatomic) NSMutableArray *m_emoticonViewArray; // @synthesize m_emoticonViewArray;
@property(retain, nonatomic) NSMutableArray *m_emoticonWrapArray; // @synthesize m_emoticonWrapArray;
@property(nonatomic) float m_intervalX; // @synthesize m_intervalX;
@property(nonatomic) float m_intervalY; // @synthesize m_intervalY;
@property(nonatomic) float m_itemHeight; // @synthesize m_itemHeight;
@property(nonatomic) float m_itemWidth; // @synthesize m_itemWidth;
@property(nonatomic) int m_row; // @synthesize m_row;
- (void)onLongPressOnEmoticon:(id)arg1;
- (void)reloadData;
- (void)setGridViewDelegate:(id)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

