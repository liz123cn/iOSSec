//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class NSArray, NSString, UIView;

@interface WCShareCardMyCardEntryView : MMUIView
{
    BOOL _bForCard;
    NSArray *_arrNearByMyCardList;
    unsigned long _myCardCount;
    NSString *_subTitle;
    UIView *_cardBgView;
    UIView *_shadowView;
    UIView *_coverView;
    id <WCShareCardMyCardEntryViewDelegate> m_delegate;
}

+ (float)MyCardEntryViewHeight;
- (void).cxx_destruct;
- (id)genLogoListView:(struct CGSize)arg1;
- (void)initView;
- (id)initWithNearbyMyCardList:(id)arg1 myCardCount:(unsigned long)arg2 andSubTitle:(id)arg3;
- (void)layoutSubviews;
@property(nonatomic) __weak id <WCShareCardMyCardEntryViewDelegate> m_delegate; // @synthesize m_delegate;
- (void)setHighlighted:(BOOL)arg1;

@end

