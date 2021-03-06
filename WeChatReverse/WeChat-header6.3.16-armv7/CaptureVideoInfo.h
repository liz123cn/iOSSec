//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface CaptureVideoInfo : NSObject
{
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
    NSString *m_nsStreamVideoUrl;
    unsigned long m_uiStreamVideoTime;
    NSString *m_nsStreamVideoTitle;
    NSString *m_nsStreamVideoWording;
    NSString *m_nsStreamVideoWebUrl;
    NSString *m_nsStreamVideoThumbUrl;
    NSString *m_nsStreamVideoPublishId;
    NSString *m_nsStreamVideoAdUxInfo;
    NSString *m_nsStatExtStr;
    NSString *m_msgSource;
    unsigned long thumb_width;
    unsigned long thumb_height;
    unsigned long video_width;
    unsigned long video_height;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL front_camera; // @synthesize front_camera;
- (id)init;
@property(nonatomic) BOOL m_bForward; // @synthesize m_bForward;
@property(retain, nonatomic) NSString *m_msgSource; // @synthesize m_msgSource;
@property(retain, nonatomic) NSString *m_nsAesKey; // @synthesize m_nsAesKey;
@property(retain, nonatomic) NSString *m_nsMsgDataUrl; // @synthesize m_nsMsgDataUrl;
@property(retain, nonatomic) NSString *m_nsStatExtStr; // @synthesize m_nsStatExtStr;
@property(retain, nonatomic) NSString *m_nsStreamVideoAdUxInfo; // @synthesize m_nsStreamVideoAdUxInfo;
@property(retain, nonatomic) NSString *m_nsStreamVideoPublishId; // @synthesize m_nsStreamVideoPublishId;
@property(retain, nonatomic) NSString *m_nsStreamVideoThumbUrl; // @synthesize m_nsStreamVideoThumbUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoTitle; // @synthesize m_nsStreamVideoTitle;
@property(retain, nonatomic) NSString *m_nsStreamVideoUrl; // @synthesize m_nsStreamVideoUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWebUrl; // @synthesize m_nsStreamVideoWebUrl;
@property(retain, nonatomic) NSString *m_nsStreamVideoWording; // @synthesize m_nsStreamVideoWording;
@property(nonatomic) unsigned long m_uiStreamVideoTime; // @synthesize m_uiStreamVideoTime;
@property(nonatomic) unsigned long m_uiVideoOffset; // @synthesize m_uiVideoOffset;
@property(nonatomic) unsigned long m_uiVideoSource; // @synthesize m_uiVideoSource;
@property(nonatomic) unsigned long thumb_height; // @synthesize thumb_height;
@property(retain, nonatomic) NSString *thumb_path; // @synthesize thumb_path;
@property(nonatomic) unsigned long thumb_size; // @synthesize thumb_size;
@property(nonatomic) unsigned long thumb_width; // @synthesize thumb_width;
@property(nonatomic) unsigned long video_height; // @synthesize video_height;
@property(retain, nonatomic) NSString *video_path; // @synthesize video_path;
@property(nonatomic) unsigned long video_size; // @synthesize video_size;
@property(nonatomic) unsigned long video_time; // @synthesize video_time;
@property(nonatomic) unsigned long video_width; // @synthesize video_width;

@end

