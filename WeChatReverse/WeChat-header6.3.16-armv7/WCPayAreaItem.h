//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WCBaseTextFieldItem.h"

#import "MMRegionPickerViewControllerDelegate.h"

@class MMUIViewController, NSString;

@interface WCPayAreaItem : WCBaseTextFieldItem <MMRegionPickerViewControllerDelegate>
{
    MMUIViewController *m_currentViewController;
    NSString *m_country;
    NSString *m_province;
    NSString *m_city;
    BOOL _disableLocation;
    id <WCPayAreaItemDelegate> m_payAreaItemDelegate;
}

- (void).cxx_destruct;
- (void)MMRegionPickerDidChoosRegion:(id)arg1;
- (void)becomeFirstResponder;
- (void)dealloc;
@property(nonatomic) BOOL disableLocation; // @synthesize disableLocation=_disableLocation;
- (id)getCity;
- (id)getCountry;
- (id)getProvince;
- (BOOL)isUSorCA;
@property(nonatomic) __weak id <WCPayAreaItemDelegate> m_payAreaItemDelegate; // @synthesize m_payAreaItemDelegate;
- (void)setCurrentViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
