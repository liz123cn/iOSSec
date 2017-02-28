//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PBMessageObserverDelegate.h"
#import "UIAlertViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class CContact, NSString, UITextField;

@interface MMSayHelloViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, PBMessageObserverDelegate, UIAlertViewDelegate>
{
    UITextField *m_sayHelloTextView;
    NSString *m_helloContent;
    CContact *m_helloReceiver;
    unsigned long m_eventID;
    id <MMSayHelloViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)dealloc;
@property(nonatomic) __weak id <MMSayHelloViewControllerDelegate> delegate; // @synthesize delegate=m_delegate;
- (BOOL)doSayHello:(id)arg1;
- (id)filterString:(id)arg1;
@property(retain, nonatomic) NSString *helloContent; // @synthesize helloContent=m_helloContent;
@property(retain, nonatomic) CContact *helloReceiver; // @synthesize helloReceiver=m_helloReceiver;
- (id)init;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onCancelSendSayHello;
- (void)onSendSayHello:(id)arg1;
- (void)quitSayHello;
@property(retain, nonatomic) UITextField *sayHelloTextView; // @synthesize sayHelloTextView=m_sayHelloTextView;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)updateWordCount:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

