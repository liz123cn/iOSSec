//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class MMTableView, MMTableViewCellInfo, MMTableViewInfo, NSMutableArray, NSString;

@interface WCProductReceiptEditViewController : MMUIViewController <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    MMTableViewCellInfo *m_editInfo;
    MMTableView *m_searchTableView;
    NSMutableArray *m_sourceArray;
    NSMutableArray *m_destArray;
    NSString *m_receiptStr;
    float m_keyBoardHeight;
    id <WCProudctReceiptEditDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)disMissThisViewAnimated;
- (void)initData;
- (void)initSearchTableView;
- (void)initView;
- (id)initWithReceiptStr:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
@property(nonatomic) __weak id <WCProudctReceiptEditDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSMutableArray *m_destArray; // @synthesize m_destArray;
@property(retain, nonatomic) NSString *m_receiptStr; // @synthesize m_receiptStr;
@property(retain, nonatomic) NSMutableArray *m_sourceArray; // @synthesize m_sourceArray;
- (void)onClearHistoryRecord;
- (void)onSaveText;
- (void)reloadSearchTableView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)updateDestAry:(id)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
