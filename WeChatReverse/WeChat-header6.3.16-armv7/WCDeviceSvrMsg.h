//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSString;

@interface WCDeviceSvrMsg : NSObject
{
    int m_type;
    NSString *m_deviceId;
    NSString *m_deviceType;
    NSData *m_data;
    unsigned long m_wifiStatus;
    long long m_sessionId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSData *m_data; // @synthesize m_data;
@property(retain, nonatomic) NSString *m_deviceId; // @synthesize m_deviceId;
@property(retain, nonatomic) NSString *m_deviceType; // @synthesize m_deviceType;
@property(nonatomic) long long m_sessionId; // @synthesize m_sessionId;
@property(nonatomic) int m_type; // @synthesize m_type;
@property(nonatomic) unsigned long m_wifiStatus; // @synthesize m_wifiStatus;

@end

