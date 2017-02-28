//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IOplogExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextViewDelegate.h"

@class MMTableView, NSString, UILabel, UITextView;

@interface SettingModifySignViewController : MMUIViewController <UITextViewDelegate, UITableViewDelegate, UITableViewDataSource, IOplogExt>
{
    UITextView *m_textView;
    NSString *m_nsLastSign;
    id <settingModifySignDelegate> m_delegate;
    UILabel *m_wordCountLabel;
    MMTableView *m_tableView;
}

- (void).cxx_destruct;
- (void)OnReturn;
- (void)dealloc;
- (void)initTableView;
@property(nonatomic) __weak id <settingModifySignDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsLastSign; // @synthesize m_nsLastSign;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)oplogRet:(int)arg1 errMsg:(id)arg2 eventID:(unsigned long)arg3 cgiWrap:(id)arg4;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForHeaderInSection:(int)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidChange:(id)arg1;
- (void)updateWordCount:(int)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

