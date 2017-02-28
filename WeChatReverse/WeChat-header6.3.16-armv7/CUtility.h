//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface CUtility : NSObject
{
}

+ (unsigned long)ChatNotifyC2S:(unsigned long)arg1;
+ (unsigned long)ChatNotifyS2C:(unsigned long)arg1;
+ (BOOL)CheckSyncMediaNote:(id)arg1;
+ (unsigned long)CheckUsrNameType:(id)arg1;
+ (void)ClearAllWebViewCookies;
+ (id)DecodeBase64:(id)arg1;
+ (long)DecodePack:(id)arg1 Output:(id)arg2 DESKey:(char *)arg3 KeyLen:(unsigned long)arg4;
+ (id)DecodeWithBase64:(id)arg1;
+ (id)DoDns:(id)arg1;
+ (id)DoNewDns:(id)arg1;
+ (id)DoNewDns:(id)arg1 DnsType:(unsigned int *)arg2;
+ (id)DoNewDnsForSns:(id)arg1 DnsType:(unsigned int *)arg2;
+ (id)EncodeBase64:(id)arg1;
+ (id)EncodeWithBase64:(id)arg1;
+ (unsigned long)GenID;
+ (unsigned long)GenSeq;
+ (id)GetClientIDOfMsg:(id)arg1 LocalID:(unsigned long)arg2 Time:(unsigned long)arg3;
+ (id)GetDNSServers;
+ (id)GetDocPath;
+ (id)GetDownloadPathOfEmoticonPackage:(id)arg1;
+ (id)GetEmoticonLinkPid:(id)arg1;
+ (id)GetExcutablePath;
+ (id)GetHttpEndData;
+ (id)GetKeyValueFromPB:(id)arg1;
+ (id)GetLibraryCachePath;
+ (basic_string_7d00a7a9)GetMd5StrOfLocalUsr;
+ (basic_string_7d00a7a9)GetMd5StrOfUsr:(id)arg1;
+ (id)GetMimeTypeByFileExt:(id)arg1;
+ (int)GetNetWorkReachable;
+ (id)GetPathOfAlbumCoverRootPath;
+ (id)GetPathOfBakChat;
+ (id)GetPathOfCacheLocalUsrDir;
+ (id)GetPathOfDraftUsrDir;
+ (id)GetPathOfEmoticon:(id)arg1;
+ (id)GetPathOfF2F;
+ (id)GetPathOfFileTempPath;
+ (id)GetPathOfJSApiLocalDataBaseFile;
+ (id)GetPathOfJSApiLocalDataFile:(id)arg1 CurrentUrl:(id)arg2;
+ (id)GetPathOfLocalUsrDir;
+ (id)GetPathOfLocalUsrDirAsync;
+ (id)GetPathOfLocationCache;
+ (id)GetPathOfLocationThumb;
+ (id)GetPathOfLyricsRootPath;
+ (id)GetPathOfMaskedMesImgThumb:(id)arg1 LocalID:(unsigned long)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMassShortVideoDir:(id)arg1 andVideoName:(id)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesAudio:(id)arg1 LocalID:(unsigned long)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesAudioDir:(id)arg1;
+ (id)GetPathOfMesAudioDir:(id)arg1 DocPath:(id)arg2;
+ (id)GetPathOfMesAudioTrans:(id)arg1 LocalID:(unsigned long)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesHDImg:(id)arg1 LocalID:(unsigned long)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesHDImgTemp:(id)arg1 LocalID:(unsigned long)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesImg:(id)arg1 LocalID:(unsigned long)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesImgDir:(id)arg1;
+ (id)GetPathOfMesImgDir:(id)arg1 DocPath:(id)arg2;
+ (id)GetPathOfMesImgTemp:(id)arg1 LocalID:(unsigned long)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesImgThumb:(id)arg1 LocalID:(unsigned long)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesSettingDir;
+ (id)GetPathOfMesVideo:(id)arg1 LocalID:(unsigned long)arg2 DocPath:(id)arg3;
+ (id)GetPathOfMesVideoDir:(id)arg1;
+ (id)GetPathOfMesVideoDir:(id)arg1 DocPath:(id)arg2;
+ (id)GetPathOfMesVideoThumb:(id)arg1 LocalID:(unsigned long)arg2 DocPath:(id)arg3;
+ (id)GetPathOfPackage:(id)arg1;
+ (id)GetPathOfProductDetail;
+ (id)GetPathOfProductItem:(id)arg1;
+ (id)GetPathOfSHakePeopleStorage;
+ (id)GetPathOfShakeBeaconStorage;
+ (id)GetPathOfShakeBeaconStoragePB;
+ (id)GetPathOfShakeBgImg;
+ (id)GetPathOfShakeBgImgTmp:(unsigned long)arg1;
+ (id)GetPathOfShakeBkgUp;
+ (id)GetPathOfShakeMusicStorage;
+ (id)GetPathOfShakeMusicStoragePB;
+ (id)GetPathOfShakePageStorage;
+ (id)GetPathOfShakePageStoragePB;
+ (id)GetPathOfShakePeopleStoragePB;
+ (id)GetPathOfShakeShareStorage;
+ (id)GetPathOfShakeTvMsgStorage;
+ (id)GetPathOfShakeTvStorage;
+ (id)GetPathOfShakeTvStoragePB;
+ (id)GetPathOfSnsMusicStoragePB;
+ (id)GetPathOfSquareMesImgThumb:(id)arg1 LocalID:(unsigned long)arg2 DocPath:(id)arg3;
+ (id)GetPathOfTempCacheVideo;
+ (id)GetPathOfTempEmoticon:(id)arg1;
+ (id)GetPathOfTempPackage:(id)arg1;
+ (id)GetPathOfURLCache;
+ (id)GetPathOfUsrChatBKSetting;
+ (id)GetPathOfUsrShakeImg:(id)arg1;
+ (id)GetPathOfUsrWCBKSetting;
+ (id)GetPathOfWCAddressBaseFile;
+ (id)GetPathOfWCMallBaseFile;
+ (id)GetPathOfWCPayBaseFile;
+ (id)GetPathOfWCRedEnvelopesBaseFile;
+ (id)GetPathOfWeSport;
+ (id)GetPathOfWebMesAudioTrans:(id)arg1 LocalID:(id)arg2 DocPath:(id)arg3;
+ (id)GetRandomKey;
+ (id)GetRandomKeyWithSalt:(id)arg1;
+ (id)GetRandomMD5;
+ (id)GetRandomPathOfTrash;
+ (id)GetRandomUUID;
+ (id)GetRootPathOfTrash;
+ (id)GetSystemCachePath;
+ (id)GetTelephonyNetWorkCountryCode;
+ (id)GetTempPathOfDocVideoPath:(id)arg1;
+ (id)GetTempPathOfMesShortVideo:(id)arg1 n64SvrID:(long long)arg2 DocPath:(id)arg3;
+ (id)GetThumbPathOfEmoticon:(id)arg1;
+ (id)GetThumbPathOfPackage:(id)arg1;
+ (id)GetTmpPath;
+ (id)GetUUIDNew;
+ (id)GetUserAgentSuffix;
+ (id)GetUserAlbumRootDir;
+ (unsigned long)GetVersion;
+ (unsigned long)GetVersionFromPList;
+ (unsigned long)IPStringToInt:(id)arg1;
+ (void)Initial;
+ (id)IntToIPString:(unsigned long)arg1;
+ (BOOL)IsCurLanguageChineseTraditional;
+ (BOOL)IsFacebookAuthName:(id)arg1;
+ (BOOL)IsURLFromAppStore:(id)arg1;
+ (CDStruct_c3b9c2ee)MakeLocationCoordinate2D:(double)arg1 andLongitude:(double)arg2;
+ (id)MergeSyncBuffer:(id)arg1 NewBuffer:(id)arg2;
+ (id)NSStringToUTF8Hex:(id)arg1;
+ (BOOL)NeedNewSync:(unsigned long)arg1;
+ (char *)NewStrFromNSStr:(id)arg1;
+ (id)NsDataEncodeBase64:(id)arg1;
+ (id)ParseFullVersionString:(unsigned long)arg1;
+ (void)ParseVersion:(unsigned long)arg1 Major:(unsigned int *)arg2 Minor:(unsigned int *)arg3 Minorex:(unsigned int *)arg4;
+ (id)ParseVersionString:(unsigned long)arg1;
+ (void)PrintClientInfo;
+ (id)ReplaceClientVersion:(id)arg1;
+ (id)ReplaceInvalidChar:(id)arg1;
+ (id)ReplaceSingleQuote:(id)arg1;
+ (void)ReportFailIPToNewDNS:(id)arg1;
+ (id)SafeUnarchive:(id)arg1;
+ (id)SafeUnarchive:(id)arg1 hasError:(char *)arg2;
+ (id)SafeUnarchiveFromData:(id)arg1;
+ (id)SafeUtf8WithCString:(const char *)arg1;
+ (void)SetDefaultUserAgent;
+ (BOOL)SetDoNotBackupForPath:(id)arg1;
+ (void)SetLocalUsrNameMD5:(id)arg1;
+ (void)SetNewVersion:(unsigned long)arg1;
+ (void)SetPathOfLocalUsrDir;
+ (id)SockAddrToIPV4String:(struct sockaddr_in *)arg1;
+ (id)SyncBufferToString:(id)arg1;
+ (id)UTF8HexToNSString:(id)arg1;
+ (void)UpdateUserAgent;
+ (id)componentsSeparated:(id)arg1 byString:(id)arg2;
+ (BOOL)containOnlyLetterOrDigit:(id)arg1;
+ (id)dumpSqlString:(id)arg1;
+ (id)ellipseImageFromColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)filterAllWhiteSpaceAndNewLineString:(id)arg1;
+ (id)filterString:(id)arg1;
+ (id)filterWhiteSpaceAndNewLineString:(id)arg1;
+ (unsigned long)genCurrentTime;
+ (unsigned long long)genCurrentTimeInMs;
+ (unsigned long long)genCurrentTimeInMsFrom1970;
+ (id)genWebpUrlWithOriUrl:(id)arg1;
+ (id)getCurSystemLanguage;
+ (id)getDomainName:(id)arg1;
+ (int)getGeneralNetworkType;
+ (id)getIconImageByFileExt:(id)arg1 iconSize:(int)arg2;
+ (id)getIconNameByFileExt:(id)arg1 iconSize:(int)arg2;
+ (id)getMatchFullPinYinText:(id)arg1 searchText:(id)arg2 dicPinYin:(id)arg3;
+ (id)getMatchShortPinYinText:(id)arg1 searchText:(id)arg2 dicPinYin:(id)arg3;
+ (unsigned long)getRegSrcVersionNum;
+ (id)getStringFromUrl:(id)arg1 needle:(id)arg2;
+ (id)getSystemTimeZoneString;
+ (int)getWebpNetworkType;
+ (BOOL)hasPinYinPrefix:(id)arg1 searchText:(id)arg2 options:(unsigned int)arg3;
+ (id)hashForString:(id)arg1;
+ (id)hashPathForString:(id)arg1;
+ (id)imageBorderFromColor:(id)arg1 size:(struct CGSize)arg2 conerSize:(float)arg3;
+ (id)imageFromColor:(id)arg1 size:(struct CGSize)arg2;
+ (int)imageTypeForImageData:(id)arg1;
+ (BOOL)is64BitEnvironment;
+ (BOOL)isBeingDebugged;
+ (BOOL)isEnglishLetter:(unsigned short)arg1;
+ (BOOL)isEnglishWord:(id)arg1;
+ (BOOL)isEnterpriseSingleUsrName:(id)arg1;
+ (BOOL)isEnterpriseUsrName:(id)arg1;
+ (BOOL)isGIFFile:(id)arg1;
+ (BOOL)isLeadSurrogates:(unsigned short)arg1;
+ (BOOL)isNeedUseWebpFormatUrl:(id)arg1;
+ (BOOL)isNumber:(id)arg1;
+ (BOOL)isTrailSurrogates:(unsigned short)arg1;
+ (BOOL)isValidWeChatID:(id)arg1;
+ (id)obfuscate:(id)arg1 withKey:(id)arg2;
+ (id)snapshotForUIView:(id)arg1;
+ (id)stringOfFriendlySize:(double)arg1 maxFractionDigits:(unsigned int)arg2;
+ (id)stringOfFriendlySizeForApple:(double)arg1 maxFractionDigits:(unsigned int)arg2;
+ (id)trimString:(id)arg1;

@end
