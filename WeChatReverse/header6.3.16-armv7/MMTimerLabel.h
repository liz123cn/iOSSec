//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UILabel.h"

@interface MMTimerLabel : UILabel
{
    int _second;
    int _minute;
    int _hour;
    BOOL _isShowHourDefault;
    BOOL _isActive;
}

- (void)dealloc;
@property(nonatomic) int hour; // @synthesize hour=_hour;
- (void)increaseTime;
@property(nonatomic) int minute; // @synthesize minute=_minute;
- (void)pauseTimer;
- (void)reset;
@property(nonatomic) int second; // @synthesize second=_second;
- (void)setIsShowHourDefault:(BOOL)arg1;
- (void)startTimer;
- (void)stopTimer;
- (void)updateLabel;

@end
