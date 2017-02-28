//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSString;

@interface VoipActionInfoObject : MMObject <PBCoding>
{
    BOOL m_hasClickIgnoreCallOnce;
    BOOL m_hasClickVoiceMinimizeWithEarMode;
    BOOL m_hasClickVideoMinimize;
    BOOL m_hasShowEarDeviceUnPluginTips;
}

+ (id)Instance;
+ (id)getSavePath;
+ (id)getSaveRootDir;
+ (void)initialize;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)init;
@property(nonatomic) BOOL m_hasClickIgnoreCallOnce; // @synthesize m_hasClickIgnoreCallOnce;
@property(nonatomic) BOOL m_hasClickVideoMinimize; // @synthesize m_hasClickVideoMinimize;
@property(nonatomic) BOOL m_hasClickVoiceMinimizeWithEarMode; // @synthesize m_hasClickVoiceMinimizeWithEarMode;
@property(nonatomic) BOOL m_hasShowEarDeviceUnPluginTips; // @synthesize m_hasShowEarDeviceUnPluginTips;
- (void)saveToFile;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

