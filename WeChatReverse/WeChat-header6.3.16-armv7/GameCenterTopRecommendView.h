//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class TopRecommendBannerData;

@interface GameCenterTopRecommendView : MMUIView
{
    TopRecommendBannerData *_recoBanner;
    id <GameCenterTopRecommendViewDelegate> _delegate;
}

+ (float)heightForRecommendData:(id)arg1;
- (void).cxx_destruct;
- (void)createGameListViewWithSuperView:(id)arg1;
@property(nonatomic) __weak id <GameCenterTopRecommendViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)gameViewWithWidth:(float)arg1 game:(id)arg2;
- (id)genLabelWithFontSize:(float)arg1 text:(id)arg2 textColor:(id)arg3 x:(float)arg4 y:(float)arg5 maxWidth:(float)arg6 superView:(id)arg7;
- (id)initWithFrame:(struct CGRect)arg1 recommendData:(id)arg2;
- (void)onBgBtnClicked:(id)arg1;
- (void)onTapImage:(id)arg1;
- (void)setupViews;

@end

