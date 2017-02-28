//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SettingBaseViewController.h"

@class MMLoadingView, NSArray;

@interface SettingLanguageViewController : SettingBaseViewController
{
    unsigned long m_uiCurIndex;
    unsigned long m_uiCurWorkingIndex;
    NSArray *m_arrLanguages;
    NSArray *m_arrLanguageDisplayNames;
    MMLoadingView *m_loadingView;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)doChangeLanguage;
- (void)fixNavigationBar;
- (void)initLanguageData;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)save;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)viewDidLoad;

@end
