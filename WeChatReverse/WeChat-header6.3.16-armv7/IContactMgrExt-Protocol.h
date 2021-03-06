//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CContact, NSString;

@protocol IContactMgrExt

@optional
- (void)OnChangeNotifyStatus:(NSString *)arg1 withStatus:(BOOL)arg2;
- (void)onContactListUpdate:(unsigned long)arg1;
- (void)onDeleteContact:(CContact *)arg1;
- (void)onFailedToGetContactsFromSvr;
- (void)onModifyContact:(CContact *)arg1;
- (void)onModifyContactDraft:(CContact *)arg1;
- (void)onModifyContactHeadImage:(NSString *)arg1;
- (void)onModifyCustomMenu:(CContact *)arg1;
- (void)onModifySelfContact:(CContact *)arg1;
- (void)onNewContact:(CContact *)arg1;
- (void)onRemoveContactFromAddressBook:(CContact *)arg1;
@end

