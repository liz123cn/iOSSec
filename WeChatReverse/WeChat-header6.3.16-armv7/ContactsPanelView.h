//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIScrollView.h"

@class NSMutableArray, UIImageView;

@interface ContactsPanelView : MMUIScrollView
{
    NSMutableArray *m_arrKeys;
    NSMutableArray *m_arrImages;
    unsigned long m_uiImageSize;
    unsigned long m_uiCellSize;
    unsigned long m_uiLeftMargin;
    unsigned long m_uiRightMargin;
    _Bool m_bShouldDeleteOnClick;
    UIImageView *m_emptyView;
    BOOL m_showEmptyView;
    int m_headerType;
    id <ContactsPanelViewDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)RemoveImageForKey:(id)arg1;
- (void)SetCellSize:(unsigned long)arg1;
- (void)SetImageForKey:(id)arg1 animated:(BOOL)arg2;
- (void)SetImageSize:(unsigned long)arg1;
- (void)SetImageType:(int)arg1;
- (void)SetLeftMargin:(unsigned long)arg1;
- (void)SetRightMargin:(unsigned long)arg1;
- (void)addImage:(id)arg1 animated:(BOOL)arg2;
- (void)deleteImage:(unsigned long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(nonatomic) __weak id <ContactsPanelViewDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) BOOL m_showEmptyView; // @synthesize m_showEmptyView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

