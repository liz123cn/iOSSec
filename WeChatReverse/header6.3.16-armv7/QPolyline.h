//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QMultiPoint.h"

#import "QOverlay.h"

@class NSString;

@interface QPolyline : QMultiPoint <QOverlay>
{
}

+ (id)polylineWithCoordinates:(CDStruct_c3b9c2ee *)arg1 count:(unsigned int)arg2;
+ (id)polylineWithEncodedString:(id)arg1;
+ (id)polylineWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned int)arg2;
@property(readonly, nonatomic) CDStruct_90e2a262 boundingMapRect;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (id)initWithPoints:(CDStruct_c3b9c2ee *)arg1 count:(unsigned int)arg2;
- (id)initWithWithCoordinates:(CDStruct_c3b9c2ee *)arg1 count:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

