//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PBCoding.h"

@class NSString;

@interface NewUserGuideConfig : NSObject <PBCoding>
{
    BOOL bShowMainFrameTip;
    BOOL bShowContactsAddTip;
    BOOL bShowVoiceTip;
    BOOL bShowVoipAndPhoneTip;
    BOOL bShowNearByRedDot;
    BOOL bShowShakeRedDot;
    BOOL bShowSightTip;
    unsigned long uiRegTime;
    unsigned long uiStartCount;
}

+ (void)initialize;
@property(nonatomic) BOOL bShowContactsAddTip; // @synthesize bShowContactsAddTip;
@property(nonatomic) BOOL bShowMainFrameTip; // @synthesize bShowMainFrameTip;
@property(nonatomic) BOOL bShowNearByRedDot; // @synthesize bShowNearByRedDot;
@property(nonatomic) BOOL bShowShakeRedDot; // @synthesize bShowShakeRedDot;
@property(nonatomic) BOOL bShowSightTip; // @synthesize bShowSightTip;
@property(nonatomic) BOOL bShowVoiceTip; // @synthesize bShowVoiceTip;
@property(nonatomic) BOOL bShowVoipAndPhoneTip; // @synthesize bShowVoipAndPhoneTip;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(nonatomic) unsigned long uiRegTime; // @synthesize uiRegTime;
@property(nonatomic) unsigned long uiStartCount; // @synthesize uiStartCount;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

