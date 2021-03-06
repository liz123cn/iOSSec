//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "VerifyPhoneDelegate.h"

@class NSMutableDictionary, NSString;

@interface BrandOpenSpecificViewHandler : MMObject <VerifyPhoneDelegate>
{
    NSMutableDictionary *m_urlToViewController;
    id <BrandOpenSpecificViewHandlerDelegate> _delegate;
    NSString *nsFromWhichUrl;
    NSString *nsPublisherName;
    unsigned long uiScene;
    NSString *nsExtInfo;
    unsigned long uiSponsorID;
}

- (void).cxx_destruct;
- (BOOL)canHandleViewJump:(id)arg1;
- (void)dealloc;
- (void)handleJumpURL:(id)arg1;
- (void)handleViewJump:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)jumpToAddFriendViewController:(BOOL)arg1;
- (void)jumpToCardListViewController;
- (void)jumpToExposeViewController;
- (void)jumpToLogViewController;
- (void)jumpToNewFriendViewController;
- (void)jumpToRecoverDataViewController;
- (void)jumpToScanViewController;
- (void)jumpToSearchBrandViewController;
- (void)jumpToSettingViewController:(id)arg1;
- (void)jumpToShakeCardViewController;
- (void)jumpToShareCardListViewController;
- (void)jumpToTimeLineViewController;
- (void)loadUrlToViewControllerArray;
@property(retain, nonatomic) NSString *nsExtInfo; // @synthesize nsExtInfo;
@property(retain, nonatomic) NSString *nsFromWhichUrl; // @synthesize nsFromWhichUrl;
@property(retain, nonatomic) NSString *nsPublisherName; // @synthesize nsPublisherName;
@property(nonatomic) unsigned long uiScene; // @synthesize uiScene;
@property(nonatomic) unsigned long uiSponsorID; // @synthesize uiSponsorID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

