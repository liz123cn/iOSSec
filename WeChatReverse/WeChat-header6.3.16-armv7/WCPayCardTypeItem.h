//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseTextFieldItem.h"

#import "UIPickerViewDataSource.h"
#import "UIPickerViewDelegate.h"
#import "WCBizPickerViewDelegate.h"

@class NSArray, NSMutableArray, NSMutableDictionary, NSString, UILabel, WCBizPickerView, WCPayCardBinInfo;

@interface WCPayCardTypeItem : WCBaseTextFieldItem <UIPickerViewDelegate, UIPickerViewDataSource, WCBizPickerViewDelegate>
{
    UILabel *m_textLabel;
    WCBizPickerView *m_pickerView;
    NSMutableArray *m_arrSection;
    NSMutableDictionary *m_dicRows;
    WCPayCardBinInfo *m_selectType;
    int m_iCurrentSectoin;
    NSArray *m_arrOrderAvailableCards;
}

- (void).cxx_destruct;
- (void)WCBizPickerViewDidCancel;
- (void)WCBizPickerViewDidComplete:(id)arg1;
- (void)becomeFirstResponder;
- (void)dealloc;
- (id)getStringFrom:(id)arg1;
- (id)getValue;
- (void)initView:(struct CGRect)arg1;
- (BOOL)isOrderAvailableCard:(id)arg1;
- (int)numberOfComponentsInPickerView:(id)arg1;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (id)pickerView:(id)arg1 viewForRow:(int)arg2 forComponent:(int)arg3 reusingView:(id)arg4;
- (void)setCardTypeList:(id)arg1;
- (void)setOrderAvailableCardList:(id)arg1;
- (void)setSelectCardType:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextAlignment:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

