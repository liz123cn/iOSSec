//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WCPayCheckPayPwdByTokenResponse : NSObject
{
    NSString *m_nsCheckPwdToken;
    BOOL m_bIsFreeSMS;
    NSString *m_nsMobileNo;
    NSString *m_nsRelationKey;
}

- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) BOOL m_bIsFreeSMS; // @synthesize m_bIsFreeSMS;
@property(retain, nonatomic) NSString *m_nsCheckPwdToken; // @synthesize m_nsCheckPwdToken;
@property(retain, nonatomic) NSString *m_nsMobileNo; // @synthesize m_nsMobileNo;
@property(retain, nonatomic) NSString *m_nsRelationKey; // @synthesize m_nsRelationKey;

@end

