//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QAnnotation.h"

@class NSString;

@interface QShape : NSObject <QAnnotation>
{
    NSString *_title;
    NSString *_subtitle;
    NSString *title;
    NSString *subtitle;
    CDStruct_2c43369c coordinate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate; // @synthesize coordinate;
@property(copy) NSString *subtitle; // @synthesize subtitle;
@property(copy) NSString *title; // @synthesize title;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
