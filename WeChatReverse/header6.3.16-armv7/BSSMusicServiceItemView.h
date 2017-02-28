//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BSSBaseItemView.h"

@class AttributeLabel, BSBusinessContactItem, MMMusicPlayerContoller, MMWebImageView, NSArray, UILabel;

@interface BSSMusicServiceItemView : BSSBaseItemView
{
    BSBusinessContactItem *_dataItem;
    NSArray *_keywordList;
    MMWebImageView *_headImgView;
    AttributeLabel *_titleLabel;
    AttributeLabel *_singerLabel;
    UILabel *_sourceLabel;
    MMMusicPlayerContoller *_playBtn;
}

+ (float)heightForItem;
- (void).cxx_destruct;
@property(retain, nonatomic) BSBusinessContactItem *dataItem; // @synthesize dataItem=_dataItem;
- (void)dealloc;
@property(retain, nonatomic) MMWebImageView *headImgView; // @synthesize headImgView=_headImgView;
- (void)initView;
- (id)initWithContactServiceItem:(id)arg1 andKeyWordList:(id)arg2;
@property(retain, nonatomic) NSArray *keywordList; // @synthesize keywordList=_keywordList;
@property(retain, nonatomic) MMMusicPlayerContoller *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) AttributeLabel *singerLabel; // @synthesize singerLabel=_singerLabel;
@property(retain, nonatomic) UILabel *sourceLabel; // @synthesize sourceLabel=_sourceLabel;
@property(retain, nonatomic) AttributeLabel *titleLabel; // @synthesize titleLabel=_titleLabel;

@end
