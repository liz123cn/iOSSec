//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class NSArray;

@interface GameCenterHotAdListView : MMUIView
{
    NSArray *_adList;
    id <GameCenterHotAdListViewDelegate> _delegate;
}

+ (float)heightForData:(id)arg1;
- (void).cxx_destruct;
- (id)createImageView:(id)arg1;
- (id)createImageView:(id)arg1 secondImageView:(id)arg2;
- (id)createImageView:(id)arg1 secondImageView:(id)arg2 thirdImageView:(id)arg3;
@property(nonatomic) __weak id <GameCenterHotAdListViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)initWithFrame:(struct CGRect)arg1 hotAdList:(id)arg2;
- (id)makeSingleImgView:(id)arg1 frame:(struct CGRect)arg2 superView:(id)arg3;
- (void)onTapImg:(id)arg1;
- (void)setupView;

@end

