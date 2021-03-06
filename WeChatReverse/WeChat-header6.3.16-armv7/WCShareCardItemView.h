//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class NSArray, NSString, UIView, WCShareCardData;

@interface WCShareCardItemView : MMUIView
{
    BOOL _bForCard;
    NSArray *_shareCardList;
    WCShareCardData *_curDisplayShareCard;
    UIView *_cardBgView;
    UIView *_shadowView;
    UIView *_coverView;
    UIView *_cardBgContainerView;
    NSString *_shareUsernameText;
}

+ (float)LocalCityShareCardEmptyTipsHeight;
+ (float)ShareCardGatherViewHeight;
+ (id)genLocalCityEmptyTipsCellContentView;
- (void).cxx_destruct;
- (id)genCardBgView;
- (id)genLogoView;
- (BOOL)genShareUserNameAndDetectIfMoreThan2ShareUsr;
- (id)genTagItemViewWithTagItem:(id)arg1;
- (id)genTagListView;
- (void)initViewForShareCard;
- (id)initWithShareCard:(id)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;

@end

