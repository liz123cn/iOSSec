//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CContact, NSString;

@protocol BSSDetailPageLogicControllerDelegate <NSObject>
- (void)onResultViewNeedReload;
- (void)onSearchStart;
- (void)onSelectItemWithContactInfo:(CContact *)arg1 andSearchId:(NSString *)arg2;
- (void)onSelectItemWithProductId:(NSString *)arg1;
- (void)onSelectItemWithUrlAddress:(NSString *)arg1;
- (void)onSvrError;
@end
