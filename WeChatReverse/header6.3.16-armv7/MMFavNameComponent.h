//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMComponent.h"

#import "IStrangerContactMgrExt.h"

@class MMUILabel, NSString;

@interface MMFavNameComponent : MMComponent <IStrangerContactMgrExt>
{
    MMUILabel *_nameLabel;
}

+ (float)calHeightWithComData:(id)arg1;
- (void).cxx_destruct;
- (void)configContentLayout;
- (void)configLabel;
- (void)dealloc;
- (id)getContactDisplayName:(id)arg1;
- (id)getTitleText;
- (void)onStrangerContactUpdated:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

