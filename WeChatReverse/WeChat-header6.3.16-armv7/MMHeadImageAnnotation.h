//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "QAnnotation.h"

@class MMHeadImageAnnotationView, NSString, UserPositionItem;

@interface MMHeadImageAnnotation : MMObject <QAnnotation>
{
    UserPositionItem *_userPositionItem;
    MMHeadImageAnnotationView *_annotationView;
    BOOL _showCallout;
}

- (void).cxx_destruct;
@property(nonatomic) __weak MMHeadImageAnnotationView *annotationView; // @synthesize annotationView=_annotationView;
@property(readonly, nonatomic) CDStruct_c3b9c2ee coordinate;
- (void)dealloc;
- (id)initWithUserPostionItem:(id)arg1;
- (void)setCoordinate:(CDStruct_c3b9c2ee)arg1;
- (void)setHeading:(double)arg1;
- (void)setShowCallout:(BOOL)arg1 Animated:(BOOL)arg2;
@property(retain, nonatomic) UserPositionItem *userPositionItem; // @synthesize userPositionItem=_userPositionItem;
@property(readonly, nonatomic) BOOL showCallout; // @synthesize showCallout=_showCallout;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

