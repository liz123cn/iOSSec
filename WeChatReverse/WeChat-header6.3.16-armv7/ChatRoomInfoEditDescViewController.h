//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IGroupMgrExt.h"
#import "MMTableViewInfoDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITextViewDelegate.h"
#import "textViewDelegate.h"

@class CContact, MMTableViewCellInfo, MMTableViewInfo, MMTextView, NSMutableDictionary, NSString, UILabel, UIView;

@interface ChatRoomInfoEditDescViewController : MMUIViewController <IGroupMgrExt, UITextViewDelegate, MMTableViewInfoDelegate, UIAlertViewDelegate, textViewDelegate>
{
    CContact *m_chatRoomContact;
    MMTableViewInfo *m_tableViewInfo;
    NSString *m_nsOriginChatRoomDesc;
    MMTextView *m_descTextView;
    MMTableViewCellInfo *m_descCellInfo;
    UILabel *m_wordCountLabel;
    NSMutableDictionary *m_dicParam;
    BOOL m_bEditMode;
    BOOL m_bEditable;
    UIView *m_oHeaderView;
    UIView *m_oFooterView;
    BOOL _m_bHideEdit;
}

- (void).cxx_destruct;
- (void)OnCancel;
- (void)OnDone;
- (void)OnEdit;
- (void)OnReturn;
- (void)OnSetChatRoomDesc:(id)arg1 Desc:(id)arg2 Error:(id)arg3;
- (void)adjustDescTextView;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)checkNeedReload:(id)arg1;
- (void)dealloc;
- (void)doCancelEdit;
- (void)fixDescViewHeight;
- (id)init;
- (BOOL)isChanged;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
@property(nonatomic) BOOL m_bHideEdit; // @synthesize m_bHideEdit=_m_bHideEdit;
@property(retain, nonatomic) CContact *m_chatRoomContact; // @synthesize m_chatRoomContact;
- (void)makeDescEditView;
- (void)makeEditCell:(id)arg1 CellInfo:(id)arg2;
- (void)makeFooter;
- (id)makeHeader;
- (void)reloadTableData;
- (void)scrollRectToVisibleForView:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)touchesBegan_TableView:(id)arg1 withEvent:(id)arg2;
- (void)updateEditMode;
- (void)updateText:(id)arg1;
- (void)updateWordCount:(int)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
