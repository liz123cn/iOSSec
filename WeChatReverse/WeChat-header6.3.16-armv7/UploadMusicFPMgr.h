//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UploadAFPMgr.h"

@class CLLocation;

@interface UploadMusicFPMgr : UploadAFPMgr
{
    CLLocation *_curLocation;
}

- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
- (void)SendFPData:(id)arg1 FPId:(unsigned long)arg2 Duration:(float)arg3 EndFlag:(unsigned long)arg4;
@property(retain, nonatomic) CLLocation *curLocation; // @synthesize curLocation=_curLocation;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

