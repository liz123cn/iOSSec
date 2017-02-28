//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIView.h"

@class WCProductSKUAttrItem;

@interface WCRadioButtonGroup : MMUIView
{
    WCProductSKUAttrItem *_skuAttrItem;
    id <WCRadioButtonGroupDelegate> _groupDelegate;
}

+ (int)calculateEqualWidthButtonLineCount:(id)arg1;
+ (int)calculateNOEqualWidthButtonLineCount:(id)arg1;
+ (float)calculateNOEqualWidthLimitMinWidth:(id)arg1;
+ (float)calculateRadioButtonGroupHeight:(id)arg1;
+ (int)calculateSuitableColumn:(id)arg1;
+ (BOOL)canUseEqualWidthStandard:(id)arg1;
- (void).cxx_destruct;
- (void)addSKUButtonInfo:(id)arg1 andItemValue:(id)arg2;
@property(nonatomic) __weak id <WCRadioButtonGroupDelegate> groupDelegate; // @synthesize groupDelegate=_groupDelegate;
- (void)loadAllEqualButton;
- (void)loadAllNOEqualButton;
- (void)loadRadioButtonGroupView;
- (void)radioButtonClicked:(id)arg1;
@property(retain, nonatomic) WCProductSKUAttrItem *skuAttrItem; // @synthesize skuAttrItem=_skuAttrItem;

@end

