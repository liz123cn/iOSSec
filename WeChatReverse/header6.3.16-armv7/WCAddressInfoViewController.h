//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCAddressBaseViewController.h"

@class NSIndexPath, NSMutableArray, UIButton, WCAddressPickerItem, WCBaseKeyboardToolBar, WCBaseTextFieldItem, WCBaseTextViewItem;

@interface WCAddressInfoViewController : WCAddressBaseViewController
{
    UIButton *m_footerButton;
    WCBaseTextFieldItem *m_textFieldNameItem;
    WCAddressPickerItem *m_pickerDistrictItem;
    WCBaseTextViewItem *m_textViewStreetItem;
    WCBaseTextFieldItem *m_textFieldPostalCodeItem;
    WCBaseTextFieldItem *m_textFieldPhoneItem;
    WCBaseKeyboardToolBar *m_keyboardBar;
    NSMutableArray *m_arrayInfo;
    id <WCAddressInfoViewControllerDelegate> m_delegate;
    NSIndexPath *m_selectItemIndex;
}

- (void).cxx_destruct;
- (void)OnCancelClick;
- (void)OnComfireEnsureAlert;
- (void)WCBaseInfoItemBeginEdit:(id)arg1;
- (void)WCBaseInfoItemCancelEdit:(id)arg1;
- (void)WCBaseInfoItemEditChanged:(id)arg1;
- (void)WCBaseInfoItemEndEdit:(id)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (BOOL)checkIsEmpty:(id)arg1;
- (void)clickInfoCell:(id)arg1 index:(id)arg2;
- (void)dealloc;
- (BOOL)getData:(id)arg1;
- (id)init;
- (void)initInfoTemplate;
- (void)initNavigationBar;
- (void)makeInfoCell:(id)arg1 cellInfo:(id)arg2;
- (void)onNext;
- (void)refreshViewWithData:(id)arg1;
- (void)reloadTableView;
- (void)setDelegate:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

@end

