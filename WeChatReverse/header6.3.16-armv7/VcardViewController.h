//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ABNewPersonViewControllerDelegate.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "CNContactPickerDelegate.h"
#import "CNContactViewControllerDelegate.h"
#import "ILinkEventExt.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "WCActionSheetDelegate.h"

@class MMTableView, MMVcardItem, NSString;

@interface VcardViewController : MMUIViewController <CNContactViewControllerDelegate, CNContactPickerDelegate, ABPeoplePickerNavigationControllerDelegate, ABNewPersonViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate, ILinkEventExt>
{
    MMVcardItem *_vcardItem;
    MMTableView *_tableView;
    NSString *_copyedText;
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> _mapSectionToSectionType;
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> _mapPersonCellToCellType;
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> _mapUrlCellToCellType;
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> _mapBirthdayCellToCellType;
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> _mapNoteCellToCellType;
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> _mapLogoCellToCellType;
    struct map<unsigned int, unsigned int, std::__1::less<unsigned int>, std::__1::allocator<std::__1::pair<const unsigned int, unsigned int>>> _mapSoundCellToCellType;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
- (void)addAddressProperty:(void *)arg1;
- (void)addAddressProperty:(id)arg1 fromVcardAddress:(id)arg2;
- (void)addEmailProperty:(void *)arg1;
- (void)addPhoneProperty:(void *)arg1;
- (void)addRelatedNameProperty:(void *)arg1;
- (void)addSingleValueProperty:(void *)arg1;
- (void)addToExistContact;
- (void)addUrlProperty:(void *)arg1;
- (void)callPhoneNumber:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)contactPicker:(id)arg1 didSelectContact:(id)arg2;
- (void)contactPickerDidCancel:(id)arg1;
- (void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2;
- (BOOL)containDigit:(id)arg1;
- (id)convertVcardAddressToCNAddress:(id)arg1;
- (void)copyVcardPropertyToContact:(id)arg1;
@property(retain, nonatomic) NSString *copyedText; // @synthesize copyedText=_copyedText;
- (void)createNewContact;
- (id)ensureHttpScheme:(id)arg1;
- (int)getLinesForLabelValueText:(id)arg1;
- (id)getShowName:(id)arg1;
- (float)heightForCellAddress:(id)arg1;
- (float)heightForCellText:(id)arg1;
- (float)heightForPersonSectionRow:(unsigned int)arg1;
- (float)heightForUrlSectionRow:(unsigned int)arg1;
- (void)initBirthdaySectionCellType;
- (void)initCellType;
- (void)initData;
- (void)initFooterView;
- (void)initHeaderView;
- (void)initLogoSectionCellType;
- (void)initNoteSectionCellType;
- (void)initPersonSectionCellType;
- (void)initSectionType;
- (void)initSoundSectionCellType;
- (void)initUrlSectionCellType;
- (void)initView;
- (void)makeAddressCell:(id)arg1 addressType:(id)arg2 addressItem:(id)arg3;
- (void)makeBirthdaySectionCell:(id)arg1 row:(unsigned int)arg2;
- (void)makeCell:(id)arg1 col:(id)arg2 value:(id)arg3;
- (void)makeLogoSectionCell:(id)arg1 row:(unsigned int)arg2;
- (void)makeNoteSectionCell:(id)arg1 row:(unsigned int)arg2;
- (void)makePersonSectionCell:(id)arg1 row:(unsigned int)arg2;
- (void)makeSoundCell:(id)arg1;
- (void)makeSoundSectionCell:(id)arg1 row:(unsigned int)arg2;
- (void)makeUrlSectionCell:(id)arg1 row:(unsigned int)arg2;
- (void)newPersonViewController:(id)arg1 didCompleteWithNewPerson:(void *)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)onAddContact:(id)arg1;
- (void)onCancel:(id)arg1;
- (void)onCopy:(id)arg1;
- (void)onLinkLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onPhoneLongPressed:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (void)onReturn;
- (void)openNewPersonViewController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2;
- (void)peoplePickerNavigationController:(id)arg1 didSelectPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2;
- (BOOL)peoplePickerNavigationController:(id)arg1 shouldContinueAfterSelectingPerson:(void *)arg2 property:(int)arg3 identifier:(int)arg4;
- (void)peoplePickerNavigationControllerDidCancel:(id)arg1;
- (void)selectPersonSectionRow:(unsigned int)arg1;
- (void)selectSoundSectionRow:(unsigned int)arg1;
- (void)selectUrlSectionRow:(unsigned int)arg1;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) MMVcardItem *vcardItem; // @synthesize vcardItem=_vcardItem;
- (void)showMenuItemForText:(id)arg1 withRect:(struct CGRect)arg2 withView:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)validAddressFields:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

