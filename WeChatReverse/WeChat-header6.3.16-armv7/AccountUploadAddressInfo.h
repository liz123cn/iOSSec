//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AccountUploadAddressInfo : NSObject
{
    NSString *m_nsTitle;
    NSString *m_nsDetail;
    unsigned long m_uiSwitch;
}

- (void).cxx_destruct;
- (void)ParseFromStyle:(id)arg1;
- (void)ParseFromXml:(id)arg1;
- (id)init;
@property(retain, nonatomic) NSString *m_nsDetail; // @synthesize m_nsDetail;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(nonatomic) unsigned long m_uiSwitch; // @synthesize m_uiSwitch;

@end
