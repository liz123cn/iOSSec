//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMService.h"

#import "IFriendListMgrExt.h"
#import "IMMWebViewControllerDeepLinkExt.h"
#import "IMsgExt.h"
#import "IVOIPUILogicMgrExt.h"
#import "IWCOutCallExt.h"
#import "MMService.h"
#import "MonoServiceMsgLogicDelegate.h"
#import "WCOutAddressBookLogicDelegate.h"

@class MMTimer, NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, OrderedDictionary, PhoneNumberFormatLogic, WCOutAddressBookLogic, WCOutCallLogic, WCOutChargeLogic, WCOutCountryCodeLogic, WCOutDataBase;

@interface WCOutFacade : MMService <IFriendListMgrExt, IWCOutCallExt, IMsgExt, IMMWebViewControllerDeepLinkExt, IVOIPUILogicMgrExt, WCOutAddressBookLogicDelegate, MonoServiceMsgLogicDelegate, MMService>
{
    NSMutableDictionary *m_hotCountryCodeDic;
    OrderedDictionary *m_lastCallItemOrderDic;
    NSMutableArray *m_wcoutContactItemArray;
    NSMutableDictionary *m_phoneNumToWCOutContact;
    unsigned long m_lastDownloadMFriendListTime;
    unsigned long m_lastReportContactTime;
    PhoneNumberFormatLogic *_m_phoneNumberFormatLogic;
    WCOutCountryCodeLogic *_m_countryCodeLogic;
    WCOutAddressBookLogic *_m_addressBookLogic;
    WCOutDataBase *_m_dataBase;
    NSRecursiveLock *_m_oLock;
    MMTimer *_inviteTimer;
    WCOutChargeLogic *_chargeLogic;
    WCOutCallLogic *_callLogic;
}

+ (void)clearReddotWCOut;
+ (BOOL)isOpenWCOutPlugin;
+ (BOOL)isWCOSwitchOpen;
+ (void)reportCallEntraceWithType:(unsigned int)arg1;
+ (void)reportClickStatWithType:(unsigned int)arg1;
+ (void)reportClickWithType:(unsigned int)arg1;
+ (void)reportRestrictionCountryCode:(id)arg1;
+ (void)reportSearchReportType:(unsigned int)arg1;
+ (void)reportTalkingClickStatWithType:(unsigned int)arg1;
+ (void)reportWCOAccountPageOp:(id)arg1;
+ (void)reportWCOAutoVerify:(id)arg1;
+ (void)reportWCOInviteFriendOp:(id)arg1;
+ (void)reportWCOPurchaseOp:(id)arg1;
+ (void)reportWCORechargePageOp:(id)arg1;
+ (void)reportWCORedDotStat:(unsigned int)arg1 OperationReddotClickScene:(unsigned int)arg2 NewUserReddotClickScene:(unsigned int)arg3;
+ (void)reportWechatOutIdKey:(unsigned int)arg1;
+ (BOOL)showReddotWCOut;
+ (BOOL)showWCOut;
- (void).cxx_destruct;
- (id)GetCurCallItem;
- (id)GetCurPhoneContact;
- (id)GetHotCountryCodeDicLog;
- (id)GetNeedShowLog;
- (void)InternalCallWCoutContact:(id)arg1 FromViewController:(id)arg2 AndEntrance:(unsigned int)arg3;
- (void)OnCallEndFinish;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)PhoneContactLoadedComplete;
- (void)PhoneContactLoadedFail;
- (void)accessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3;
- (BOOL)addressBookStatusIsDenied;
- (void)callFullPhoneNumber:(id)arg1 OfContact:(id)arg2 FromViewController:(id)arg3 AndEntrace:(unsigned int)arg4;
@property(retain, nonatomic) WCOutCallLogic *callLogic; // @synthesize callLogic=_callLogic;
- (void)callPhoneNumber:(id)arg1 WithCountryCode:(id)arg2 FromViewController:(id)arg3 AndEntrance:(unsigned int)arg4;
- (void)callWCOutCallItem:(id)arg1 FromViewController:(id)arg2 AndEntrance:(unsigned int)arg3;
- (void)canAccessDeepLink:(id)arg1 Url:(id)arg2 Webview:(id)arg3 Ret:(char *)arg4 NeedCheckBitset:(char *)arg5;
- (BOOL)canStartPSTN;
@property(retain, nonatomic) WCOutChargeLogic *chargeLogic; // @synthesize chargeLogic=_chargeLogic;
- (unsigned int)countOfCountryCodeStartWith:(id)arg1;
- (id)countryNameForCountryCode:(id)arg1;
- (id)countryNameForISOCountryCode:(id)arg1;
- (id)createWCOutRecentCallItemByCallItem:(id)arg1;
- (id)createWCOutRecentCallItemByFullPhoneNum:(id)arg1 CountryCode:(id)arg2 FromContact:(id)arg3;
- (void)dealloc;
- (id)defaultCoutryCode;
- (void)deleteLastCallWithPhoneNum:(id)arg1 WithCountryCode:(id)arg2;
- (BOOL)deleteRecentCallById:(int)arg1;
- (BOOL)deleteRecentCallByPhoneContact:(id)arg1;
- (BOOL)deleteRecentCallByPhoneNum:(id)arg1;
- (BOOL)deleteRecentCallByPhoneNum:(id)arg1 withCountryCode:(id)arg2;
- (void)didReceiveInviteGap:(int)arg1;
- (id)findWCOutContactByPhoneNum:(id)arg1;
- (id)findWCOutContactByPhoneNumInput:(id)arg1;
- (id)getAllCountryCodes;
- (id)getCountryCodeFromFullPhoneNum:(id)arg1;
- (id)getFormatedForFullPhoneNum:(id)arg1 countryCode:(id)arg2;
- (id)getFormatedForNum:(id)arg1;
- (id)getFormatedForNum:(id)arg1 countryCode:(id)arg2;
- (id)getHotCountryCodeList;
- (id)getLastRecentCallItems;
- (id)getPhoneNumFromFullPhoneNum:(id)arg1;
- (id)getPhoneNumFromFullPhoneNum:(id)arg1 countryCode:(id)arg2;
- (id)getPurePhoneNum:(id)arg1;
- (void)gotoChargeViewController;
- (void)hangUpCall;
- (int)insertRecentCall:(id)arg1;
@property(retain, nonatomic) MMTimer *inviteTimer; // @synthesize inviteTimer=_inviteTimer;
- (BOOL)isCalling;
- (BOOL)isChargeClosed;
- (BOOL)isChargeRecordClosed;
- (BOOL)isInviteClosed;
- (BOOL)isMonoServiceCheckingServer;
- (BOOL)isMonoServiceUIExist;
- (BOOL)isMonoServiceUIWorking;
- (BOOL)isRestrictedCountryCode:(id)arg1;
- (BOOL)isValidCountryCode:(id)arg1;
- (BOOL)loadAllData;
- (void)loadAllDataAsync;
- (void)loadHotCountryCode;
- (void)loadLastCallItemsAndHotCountryCodeDic;
- (void)loadWCOutPhoneContactAsync;
- (BOOL)loadWCOutPhoneContactsFromMMPhoneContacts;
- (BOOL)loadWCOutPhoneContactsMMInfo;
@property(retain, nonatomic) WCOutAddressBookLogic *m_addressBookLogic; // @synthesize m_addressBookLogic=_m_addressBookLogic;
@property(retain, nonatomic) WCOutCountryCodeLogic *m_countryCodeLogic; // @synthesize m_countryCodeLogic=_m_countryCodeLogic;
@property(retain, nonatomic) WCOutDataBase *m_dataBase; // @synthesize m_dataBase=_m_dataBase;
@property(retain, nonatomic) NSRecursiveLock *m_oLock; // @synthesize m_oLock=_m_oLock;
@property(retain, nonatomic) PhoneNumberFormatLogic *m_phoneNumberFormatLogic; // @synthesize m_phoneNumberFormatLogic=_m_phoneNumberFormatLogic;
- (void)onFriendListUpdated:(id)arg1 ErrorCode:(unsigned long)arg2 Message:(id)arg3;
- (void)onServiceInit;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)playEndingSound;
- (BOOL)pressKeyWhileCallingWithKeyCode:(int)arg1;
- (void)reportContactAndRecentContactStat;
- (id)selectAllRecentCallForWCOutContact:(id)arg1;
- (id)selectRecentCallForWCOutContact:(id)arg1 limit:(unsigned long)arg2;
- (void)setMute:(BOOL)arg1;
- (void)setSpeaker:(BOOL)arg1;
- (void)stopInviteRegister;
- (BOOL)updateWCOutContactsInfoWithMfriendList:(id)arg1;
- (void)updateWCOutPhoneContactsMMInfoAsync;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

