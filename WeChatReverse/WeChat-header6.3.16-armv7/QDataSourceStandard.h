//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QDataSourceBase.h"

@interface QDataSourceStandard : QDataSourceBase
{
    id <QDataSourceStandardDelegate> _delegate;
}

+ (id)dataSourceStandard;
- (void).cxx_destruct;
- (id)URLForVersionDetection;
@property(nonatomic) __weak id <QDataSourceStandardDelegate> delegate; // @synthesize delegate=_delegate;
- (void)startVersionDetection;
- (id)tilePath:(CDStruct_77932685)arg1;

@end

