//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABtestPoint, NSString;

@interface ABtestPointPeriod : NSObject
{
    unsigned int checkID;
    struct timeval tvStart;
    NSString *actionResult;
    NSString *clientID;
    unsigned int serialNum;
    unsigned int actionResultScene;
    BOOL hasEnd;
    BOOL hasStart;
    ABtestPoint *_testPoint;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)genClickStreamReport;
- (id)genReportString:(id)arg1 time:(id)arg2;
- (id)getValue;
- (id)initWithTestPoint:(id)arg1 serialNum:(unsigned int)arg2;
- (void)report;
- (void)setActionResult:(id)arg1;
- (void)setActionResultScene:(unsigned int)arg1;
- (void)setCheckID:(unsigned int)arg1;
- (void)setEnd;
- (void)setStart;
@property(retain, nonatomic) ABtestPoint *testPoint; // @synthesize testPoint=_testPoint;

@end
