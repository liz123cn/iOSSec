//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MemSig, NSData, NSMutableDictionary, NSString, RemortServerList, SafeSingleItemWrapper;

@interface WtloginPlatformInfo : NSObject
{
    NSString *macAddr;
    NSString *ipStr;
    unsigned int clientIp;
    NSString *devType;
    NSString *iosVer;
    NSString *osName;
    char *if_names[32];
    char *ip_names[32];
    char *hw_addrs[32];
    unsigned long ip_addrs[32];
    int nextAddr;
    NSString *filePath;
    NSMutableDictionary *wtloginConfigDic;
    NSData *guid;
    unsigned char cIsNew;
    unsigned char cIsDiff;
    unsigned char cIsGetGuid;
    unsigned char cGUIDSrc;
    unsigned char cReadFailFlag;
    unsigned char cDevChgFlag;
    SafeSingleItemWrapper *ksidWrapper;
    MemSig *deviceSig;
    unsigned int dwMyVer;
    unsigned int dwMyPubNo;
    unsigned int dwMyClientType;
    NSString *sigFilePath;
    NSMutableDictionary *sigDictionary;
    RemortServerList *stServerinfo;
    NSString *wtloginIosSdkVer;
    NSString *wtloginBuildTime;
    unsigned int wtloginBigVer;
    int dwDiffTime;
    unsigned int dwClientIP;
}

+ (id)dataSafeFilePathWithName:(id)arg1;
+ (id)wtloginCrtCarrierName;
+ (int)wtloginNetState;
- (void)FreeAddresses;
- (void)GetHWAddresses;
- (void)GetIPAddresses;
- (void)InitAddresses;
- (void)_checkDevice;
- (id)appBundleShortVersionString;
- (id)appBundleVersion;
- (id)appMainBundleIndentify;
@property(readonly) unsigned char cDevChgFlag; // @synthesize cDevChgFlag;
@property(readonly) unsigned char cGUIDSrc; // @synthesize cGUIDSrc;
@property(readonly) unsigned char cIsDiff; // @synthesize cIsDiff;
@property(readonly) unsigned char cIsGetGuid; // @synthesize cIsGetGuid;
@property(readonly) unsigned char cIsNew; // @synthesize cIsNew;
@property(readonly) unsigned char cReadFailFlag; // @synthesize cReadFailFlag;
- (void)clearNameToUin:(id)arg1;
- (void)clearPwdSigUser:(unsigned int)arg1;
@property(readonly) unsigned int clientIp; // @synthesize clientIp;
- (id)configObjectForKey:(id)arg1;
- (id)crtCarrierName;
- (void)dealloc;
@property(readonly) NSString *devType; // @synthesize devType;
@property(retain) MemSig *deviceSig; // @synthesize deviceSig;
@property unsigned int dwClientIP; // @synthesize dwClientIP;
@property int dwDiffTime; // @synthesize dwDiffTime;
@property unsigned int dwMyClientType; // @synthesize dwMyClientType;
@property unsigned int dwMyPubNo; // @synthesize dwMyPubNo;
@property unsigned int dwMyVer; // @synthesize dwMyVer;
- (void)genGuid;
- (id)getDeviceVersion;
@property(readonly) NSData *guid; // @synthesize guid;
- (id)guidForReport;
- (id)init;
@property(readonly) NSString *iosVer; // @synthesize iosVer;
@property(readonly) NSString *ipStr; // @synthesize ipStr;
- (id)ksidForUser:(id)arg1;
- (id)ksidFromKeyChain;
- (id)lastLoginAppVer;
- (id)lastLoginSdkVer;
- (unsigned int)lastLoginTime;
@property(readonly) NSString *macAddr; // @synthesize macAddr;
- (id)macaddress;
@property(readonly) NSMutableDictionary *nameDictionary;
- (int)netState;
@property(readonly) NSString *osName; // @synthesize osName;
- (void)printAllMemsig;
- (id)pwdSigUser:(unsigned int)arg1;
- (int)readGuidArrayFromPasteBoard:(id)arg1;
- (void)resetKeyChain;
- (BOOL)resetLastLoginInfo;
- (void)setConfigObject:(id)arg1 forKey:(id)arg2;
- (BOOL)setKsidToConfig:(id)arg1 forAccount:(id)arg2;
- (BOOL)setKsidToKeyChain:(id)arg1;
- (BOOL)setNameToConfig:(id)arg1 forUin:(unsigned int)arg2;
- (BOOL)setSavePwdSigToConfig:(id)arg1 forAccount:(unsigned int)arg2;
- (BOOL)setSigVailidateTime:(unsigned int)arg1 bySigType:(unsigned int)arg2;
@property(readonly) NSMutableDictionary *sigDictionary; // @synthesize sigDictionary;
- (unsigned int)sigVailidateBySigType:(unsigned int)arg1;
@property(readonly) RemortServerList *stServerinfo; // @synthesize stServerinfo;
- (id)tgtgtKeyFromKeyChain;
- (BOOL)tryDecrypt:(id)arg1 byKey:(id)arg2 andOutData:(id)arg3;
- (int)writeGuidToPasteBoard:(id)arg1;
- (void)writeSigDataTofile;
@property(readonly) unsigned int wtloginBigVer; // @synthesize wtloginBigVer;
@property(readonly) NSString *wtloginBuildTime; // @synthesize wtloginBuildTime;
@property(readonly) NSString *wtloginIosSdkVer; // @synthesize wtloginIosSdkVer;
- (void)wtloginPlatformDataInit;

@end
