//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCDBCoding.h"

@class NSString, WCDeviceExtData;

@interface WCDevice : NSObject <WCDBCoding>
{
    NSString *m_deviceType;
    NSString *m_deviceID;
    NSString *m_usrname;
    NSString *m_deviceName;
    long long m_DID;
    NSString *m_mac;
    NSString *m_md5Str;
    NSString *m_connProto;
    unsigned long m_connStrategy;
    unsigned long m_closeStrategy;
    long m_manuDataMacOffset;
    long m_serNumMacOffset;
    WCDeviceExtData *m_extData;
    unsigned long IntRes1;
    unsigned long IntRes2;
    NSString *StrRes1;
    NSString *StrRes2;
    long long m___rowID;
}

+ (id)dummyObject;
- (void).cxx_destruct;
@property(nonatomic) unsigned long IntRes1; // @synthesize IntRes1;
@property(nonatomic) unsigned long IntRes2; // @synthesize IntRes2;
@property(retain, nonatomic) NSString *StrRes1; // @synthesize StrRes1;
@property(retain, nonatomic) NSString *StrRes2; // @synthesize StrRes2;
@property(nonatomic) long long __rowID; // @synthesize __rowID=m___rowID;
- (const WCDBCondition_e9b1f587 *)db_IntRes1;
- (const WCDBCondition_e9b1f587 *)db_IntRes2;
- (const WCDBCondition_8be2a476 *)db_StrRes1;
- (const WCDBCondition_8be2a476 *)db_StrRes2;
- (const WCDBCondition_24a5b6f7 *)db_m_DID;
- (const WCDBCondition_e9b1f587 *)db_m_closeStrategy;
- (const WCDBCondition_8be2a476 *)db_m_connProto;
- (const WCDBCondition_e9b1f587 *)db_m_connStrategy;
- (const WCDBCondition_8be2a476 *)db_m_deviceID;
- (const WCDBCondition_8be2a476 *)db_m_deviceName;
- (const WCDBCondition_8be2a476 *)db_m_deviceType;
- (const WCDBCondition_8be2a476 *)db_m_mac;
- (const WCDBCondition_750820ee *)db_m_manuDataMacOffset;
- (const WCDBCondition_8be2a476 *)db_m_md5Str;
- (const WCDBCondition_750820ee *)db_m_serNumMacOffset;
- (const WCDBCondition_8be2a476 *)db_m_usrname;
- (void)dealloc;
- (id)deviceDisplayIconUrl;
- (id)deviceDisplayTitle;
- (id)deviceMacNumber;
- (const map_18e36f99 *)getFileValueTagIndexMap;
- (id)getFileValueTypeTable;
- (const map_18e36f99 *)getPackedValueTagIndexMap;
- (id)getPackedValueTypeTable;
- (const map_55ceb464 *)getValueNameIndexMap;
- (id)getValueTable;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (BOOL)hasAbility:(id)arg1;
- (id)init;
- (BOOL)isAlwaysConnectInChatView;
- (BOOL)isBLEDevice;
- (BOOL)isBleSimpleDev;
- (BOOL)isBluetoohDevice;
- (BOOL)isContinueConnectWhenExit;
- (BOOL)isEADevice;
- (BOOL)isM7Device;
- (BOOL)isPedometerDev;
- (BOOL)isValidDevice;
- (BOOL)isWeightScaleDev;
- (BOOL)isWifiDevice;
@property(nonatomic) long long m_DID; // @synthesize m_DID;
@property(nonatomic) unsigned long m_closeStrategy; // @synthesize m_closeStrategy;
@property(retain, nonatomic) NSString *m_connProto; // @synthesize m_connProto;
@property(nonatomic) unsigned long m_connStrategy; // @synthesize m_connStrategy;
@property(retain, nonatomic) NSString *m_deviceID; // @synthesize m_deviceID;
@property(retain, nonatomic) NSString *m_deviceName; // @synthesize m_deviceName;
@property(retain, nonatomic) NSString *m_deviceType; // @synthesize m_deviceType;
@property(retain, nonatomic) WCDeviceExtData *m_extData; // @synthesize m_extData;
@property(retain, nonatomic) NSString *m_mac; // @synthesize m_mac;
@property(nonatomic) long m_manuDataMacOffset; // @synthesize m_manuDataMacOffset;
@property(retain, nonatomic) NSString *m_md5Str; // @synthesize m_md5Str;
@property(nonatomic) long m_serNumMacOffset; // @synthesize m_serNumMacOffset;
@property(retain, nonatomic) NSString *m_usrname; // @synthesize m_usrname;
- (void)setupDataBeforeWriteDB;
- (void)setupDataFromDB;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
