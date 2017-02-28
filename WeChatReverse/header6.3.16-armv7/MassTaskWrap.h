//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding.h"

@class NSArray, NSString;

@interface MassTaskWrap : MMObject <PBCoding>
{
    NSArray *m_target;
    NSString *m_usrNameList;
    NSString *thumb_path;
    NSString *video_path;
    unsigned long video_time;
    unsigned long video_size;
    unsigned long thumb_size;
    unsigned long m_uiVideoOffset;
    BOOL front_camera;
    unsigned long m_uiVideoSource;
    BOOL m_bForward;
    NSString *m_nsMsgDataUrl;
    NSString *m_nsAesKey;
    NSString *m_msgSource;
    unsigned long m_thumb_width;
    unsigned long m_thumb_height;
    NSString *m_nsFileMD5;
    BOOL _uploadFinish;
}

+ (void)initialize;
- (void).cxx_destruct;
- (void)dealloc;
@property(nonatomic) BOOL front_camera; // @synthesize front_camera;
- (const map_18e36f99 *)getValueTagIndexMap;
- (id)getValueTypeTable;
- (id)initFormMassWrap:(id)arg1;
@property(nonatomic) BOOL m_bForward; // @synthesize m_bForward;
@property(retain, nonatomic) NSString *m_msgSource; // @synthesize m_msgSource;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsFileMD5; // @synthesize m_nsFileMD5;
@property(retain, nonatomic) NSString *m_nsMsgDataUrl; // @synthesize m_nsMsgDataUrl;
@property(retain, nonatomic) NSArray *m_target; // @synthesize m_target;
@property(nonatomic) unsigned long m_thumb_height; // @synthesize m_thumb_height;
@property(nonatomic) unsigned long m_thumb_width; // @synthesize m_thumb_width;
@property(nonatomic) unsigned long m_uiVideoOffset; // @synthesize m_uiVideoOffset;
@property(nonatomic) unsigned long m_uiVideoSource; // @synthesize m_uiVideoSource;
@property(retain, nonatomic) NSString *m_usrNameList; // @synthesize m_usrNameList;
@property(retain, nonatomic) NSString *thumb_path; // @synthesize thumb_path;
@property(nonatomic) unsigned long thumb_size; // @synthesize thumb_size;
@property(nonatomic) BOOL uploadFinish; // @synthesize uploadFinish=_uploadFinish;
@property(retain, nonatomic) NSString *video_path; // @synthesize video_path;
@property(nonatomic) unsigned long video_size; // @synthesize video_size;
@property(nonatomic) unsigned long video_time; // @synthesize video_time;
- (id)toMassWrap;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
