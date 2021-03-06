//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CEmoticonWrap, MMGifView, UIImageView;

@interface MMEmoticonView : UIView
{
    CEmoticonWrap *emoticonWrap;
    float maxHeight;
    UIImageView *m_imageView;
    MMGifView *m_gifView;
    struct CGSize _noImageSize;
}

+ (unsigned int)getIdKeyDisplayFailed;
+ (unsigned int)getIdKeyIdEmoticon;
- (void).cxx_destruct;
- (void)dealloc;
@property(retain, nonatomic) CEmoticonWrap *emoticonWrap; // @synthesize emoticonWrap;
- (BOOL)formGifView:(BOOL)arg1;
- (BOOL)formImageView:(id)arg1;
- (BOOL)formImageView:(id)arg1 newSize:(struct CGSize)arg2;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isPlayGif;
@property(retain, nonatomic) MMGifView *m_gifView; // @synthesize m_gifView;
@property(retain, nonatomic) UIImageView *m_imageView; // @synthesize m_imageView;
@property(nonatomic) float maxHeight; // @synthesize maxHeight;
@property(nonatomic) struct CGSize noImageSize; // @synthesize noImageSize=_noImageSize;
- (BOOL)setEmoticonWrap:(id)arg1 PlayGif:(BOOL)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setGifViewMaxEdge:(float)arg1;
- (void)setImageHidden:(BOOL)arg1;
- (void)setPlayGif:(BOOL)arg1;

@end

